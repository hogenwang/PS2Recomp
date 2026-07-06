#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304290
// Address: 0x304290 - 0x3046e0
void sub_00304290_0x304290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304290_0x304290");
#endif

    switch (ctx->pc) {
        case 0x3042c4u: goto label_3042c4;
        case 0x3042d4u: goto label_3042d4;
        case 0x304350u: goto label_304350;
        case 0x3044b4u: goto label_3044b4;
        case 0x3044f4u: goto label_3044f4;
        case 0x304564u: goto label_304564;
        case 0x304674u: goto label_304674;
        case 0x3046a8u: goto label_3046a8;
        case 0x3046b8u: goto label_3046b8;
        case 0x3046c0u: goto label_3046c0;
        default: break;
    }

    ctx->pc = 0x304290u;

    // 0x304290: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x304290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x304294: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x304294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x304298: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x304298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30429c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3042a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3042a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3042a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3042a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3042a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3042acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3042b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3042b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3042b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3042b8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3042b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042bc: 0xc048930  jal         func_1224C0
    ctx->pc = 0x3042BCu;
    SET_GPR_U32(ctx, 31, 0x3042C4u);
    ctx->pc = 0x3042C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3042BCu;
    // 0x3042c0: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x3042BCu, 0x3042C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042C4u;
label_3042c4:
    // 0x3042c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3042c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3042c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042cc: 0xc067cec  jal         func_19F3B0
    ctx->pc = 0x3042CCu;
    SET_GPR_U32(ctx, 31, 0x3042D4u);
    ctx->pc = 0x3042D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3042CCu;
    // 0x3042d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3B0u, 0x3042CCu, 0x3042D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3042D4u;
label_3042d4:
    // 0x3042d4: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3042d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x3042d8: 0x90421500  lbu         $v0, 0x1500($v0)
    ctx->pc = 0x3042d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5376)));
    // 0x3042dc: 0x50400087  beql        $v0, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x3042DCu;
    {
        const bool branch_taken_0x3042dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3042dc) {
            ctx->pc = 0x3042E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3042DCu;
            // 0x3042e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3044FCu;
            goto label_3044fc;
        }
    }
    ctx->pc = 0x3042E4u;
    // 0x3042e4: 0x1a000080  blez        $s0, . + 4 + (0x80 << 2)
    ctx->pc = 0x3042E4u;
    {
        const bool branch_taken_0x3042e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3042E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042E4u;
        // 0x3042e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042e4) {
            ctx->pc = 0x3044E8u;
            goto label_3044e8;
        }
    }
    ctx->pc = 0x3042ECu;
    // 0x3042ec: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x3042ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3042f0: 0x1420005d  bnez        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x3042F0u;
    {
        const bool branch_taken_0x3042f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3042F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042F0u;
        // 0x3042f4: 0x2605fff8  addiu       $a1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042f0) {
            ctx->pc = 0x304468u;
            goto label_304468;
        }
    }
    ctx->pc = 0x3042F8u;
    // 0x3042f8: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3042F8u;
    {
        const bool branch_taken_0x3042f8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3042FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042F8u;
        // 0x3042fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042f8) {
            ctx->pc = 0x304318u;
            goto label_304318;
        }
    }
    ctx->pc = 0x304300u;
    // 0x304300: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x304300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x304304: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x304304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x304308: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x304308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x30430c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30430Cu;
    {
        const bool branch_taken_0x30430c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30430c) {
            ctx->pc = 0x304318u;
            goto label_304318;
        }
    }
    ctx->pc = 0x304314u;
    // 0x304314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304318:
    // 0x304318: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x304318u;
    {
        const bool branch_taken_0x304318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304318) {
            ctx->pc = 0x304468u;
            goto label_304468;
        }
    }
    ctx->pc = 0x304320u;
    // 0x304320: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304324: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x304324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x304328: 0x8444db30  lh          $a0, -0x24D0($v0)
    ctx->pc = 0x304328u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x30432c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30432cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304330: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304334: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x304334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x304338: 0x8443db2c  lh          $v1, -0x24D4($v0)
    ctx->pc = 0x304338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x30433c: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x30433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x304340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304344: 0x0  nop
    ctx->pc = 0x304344u;
    // NOP
    // 0x304348: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x304348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30434c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30434cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304350:
    // 0x304350: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x304350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304354: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x304354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x304358: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x304358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30435c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30435cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304360: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x304360u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x304364: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x304364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304368: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304368u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30436c: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x30436cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304370: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x304370u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x304374: 0xe4d40008  swc1        $f20, 0x8($a2)
    ctx->pc = 0x304374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x304378: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x304378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30437c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30437cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304380: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x304380u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x304384: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x304384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304388: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304388u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30438c: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x30438cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304390: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x304390u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x304394: 0xe4d40014  swc1        $f20, 0x14($a2)
    ctx->pc = 0x304394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x304398: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x304398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30439c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30439cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3043a0: 0xe4c30018  swc1        $f3, 0x18($a2)
    ctx->pc = 0x3043a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x3043a4: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x3043a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3043a8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x3043a8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3043ac: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x3043acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3043b0: 0xe4c3001c  swc1        $f3, 0x1C($a2)
    ctx->pc = 0x3043b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x3043b4: 0xe4d40020  swc1        $f20, 0x20($a2)
    ctx->pc = 0x3043b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x3043b8: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x3043b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3043bc: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x3043bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3043c0: 0xe4c30024  swc1        $f3, 0x24($a2)
    ctx->pc = 0x3043c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x3043c4: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x3043c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3043c8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x3043c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3043cc: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x3043ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3043d0: 0xe4c30028  swc1        $f3, 0x28($a2)
    ctx->pc = 0x3043d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x3043d4: 0xe4d4002c  swc1        $f20, 0x2C($a2)
    ctx->pc = 0x3043d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x3043d8: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x3043d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3043dc: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x3043dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3043e0: 0xe4c30030  swc1        $f3, 0x30($a2)
    ctx->pc = 0x3043e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x3043e4: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x3043e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3043e8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x3043e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3043ec: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x3043ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3043f0: 0xe4c30034  swc1        $f3, 0x34($a2)
    ctx->pc = 0x3043f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x3043f4: 0xe4d40038  swc1        $f20, 0x38($a2)
    ctx->pc = 0x3043f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x3043f8: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x3043f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3043fc: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x3043fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304400: 0xe4c3003c  swc1        $f3, 0x3C($a2)
    ctx->pc = 0x304400u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x304404: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x304404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304408: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304408u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30440c: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x30440cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304410: 0xe4c30040  swc1        $f3, 0x40($a2)
    ctx->pc = 0x304410u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x304414: 0xe4d40044  swc1        $f20, 0x44($a2)
    ctx->pc = 0x304414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x304418: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x304418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30441c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30441cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304420: 0xe4c30048  swc1        $f3, 0x48($a2)
    ctx->pc = 0x304420u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x304424: 0xc6230034  lwc1        $f3, 0x34($s1)
    ctx->pc = 0x304424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304428: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304428u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30442c: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x30442cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304430: 0xe4c3004c  swc1        $f3, 0x4C($a2)
    ctx->pc = 0x304430u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x304434: 0xe4d40050  swc1        $f20, 0x50($a2)
    ctx->pc = 0x304434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x304438: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x304438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30443c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30443cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304440: 0xe4c30054  swc1        $f3, 0x54($a2)
    ctx->pc = 0x304440u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x304444: 0xc623003c  lwc1        $f3, 0x3C($s1)
    ctx->pc = 0x304444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304448: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304448u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30444c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x30444cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x304450: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x304450u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304454: 0xe4c30058  swc1        $f3, 0x58($a2)
    ctx->pc = 0x304454u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x304458: 0xe4d4005c  swc1        $f20, 0x5C($a2)
    ctx->pc = 0x304458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x30445c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x30445Cu;
    {
        const bool branch_taken_0x30445c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30445Cu;
        // 0x304460: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30445c) {
            ctx->pc = 0x304350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304350;
        }
    }
    ctx->pc = 0x304464u;
    // 0x304464: 0x0  nop
    ctx->pc = 0x304464u;
    // NOP
label_304468:
    // 0x304468: 0xf0082a  slt         $at, $a3, $s0
    ctx->pc = 0x304468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30446c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x30446Cu;
    {
        const bool branch_taken_0x30446c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30446c) {
            ctx->pc = 0x3044E8u;
            goto label_3044e8;
        }
    }
    ctx->pc = 0x304474u;
    // 0x304474: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304478: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x304478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x30447c: 0x8444db30  lh          $a0, -0x24D0($v0)
    ctx->pc = 0x30447cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x304480: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x304480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x304484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x304484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x304488: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x304488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x30448c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30448cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304490: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304494: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x304494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x304498: 0x8443db2c  lh          $v1, -0x24D4($v0)
    ctx->pc = 0x304498u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x30449c: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x30449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x3044a0: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x3044a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x3044a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3044a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3044a8: 0x0  nop
    ctx->pc = 0x3044a8u;
    // NOP
    // 0x3044ac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3044acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3044b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3044b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3044b4:
    // 0x3044b4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3044b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3044b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3044b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3044bc: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x3044bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3044c0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3044c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3044c4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3044c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3044c8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3044c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3044cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3044ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3044d0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x3044d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3044d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3044d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3044d8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3044d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3044dc: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x3044dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3044e0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3044E0u;
    {
        const bool branch_taken_0x3044e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3044E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044E0u;
        // 0x3044e4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044e0) {
            ctx->pc = 0x3044B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3044b4;
        }
    }
    ctx->pc = 0x3044E8u;
label_3044e8:
    // 0x3044e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3044e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3044ec: 0xc067d10  jal         func_19F440
    ctx->pc = 0x3044ECu;
    SET_GPR_U32(ctx, 31, 0x3044F4u);
    ctx->pc = 0x3044F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3044ECu;
    // 0x3044f0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F440u, 0x3044ECu, 0x3044F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044F4u;
label_3044f4:
    // 0x3044f4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3044F4u;
    {
        const bool branch_taken_0x3044f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3044f4) {
            ctx->pc = 0x3046B8u;
            goto label_3046b8;
        }
    }
    ctx->pc = 0x3044FCu;
label_3044fc:
    // 0x3044fc: 0x1a000068  blez        $s0, . + 4 + (0x68 << 2)
    ctx->pc = 0x3044FCu;
    {
        const bool branch_taken_0x3044fc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3044fc) {
            ctx->pc = 0x3046A0u;
            goto label_3046a0;
        }
    }
    ctx->pc = 0x304504u;
    // 0x304504: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x304504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x304508: 0x1420004b  bnez        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x304508u;
    {
        const bool branch_taken_0x304508 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304508u;
        // 0x30450c: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304508) {
            ctx->pc = 0x304638u;
            goto label_304638;
        }
    }
    ctx->pc = 0x304510u;
    // 0x304510: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304510u;
    {
        const bool branch_taken_0x304510 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x304514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304510u;
        // 0x304514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304510) {
            ctx->pc = 0x304530u;
            goto label_304530;
        }
    }
    ctx->pc = 0x304518u;
    // 0x304518: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x304518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x30451c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x30451cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x304520: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x304520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x304524: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x304524u;
    {
        const bool branch_taken_0x304524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304524) {
            ctx->pc = 0x304530u;
            goto label_304530;
        }
    }
    ctx->pc = 0x30452Cu;
    // 0x30452c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304530:
    // 0x304530: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x304530u;
    {
        const bool branch_taken_0x304530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304530) {
            ctx->pc = 0x304638u;
            goto label_304638;
        }
    }
    ctx->pc = 0x304538u;
    // 0x304538: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30453c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x30453cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304540: 0x8443db30  lh          $v1, -0x24D0($v0)
    ctx->pc = 0x304540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x304544: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304548: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x304548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x30454c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30454cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304550: 0x0  nop
    ctx->pc = 0x304550u;
    // NOP
    // 0x304554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x304558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30455c: 0x0  nop
    ctx->pc = 0x30455cu;
    // NOP
    // 0x304560: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x304560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_304564:
    // 0x304564: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x304564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304568: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x304568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x30456c: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x30456cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x304570: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x304570u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304574: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x304574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x304578: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x304578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30457c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30457cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304580: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x304580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x304584: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x304584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304588: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x304588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30458c: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x30458cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x304590: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x304590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304594: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x304594u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304598: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x304598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x30459c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x30459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3045a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3045a4: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x3045a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x3045a8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3045a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045ac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3045acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3045b0: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x3045b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x3045b4: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x3045b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3045b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3045bc: 0xe5010018  swc1        $f1, 0x18($t0)
    ctx->pc = 0x3045bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x3045c0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x3045c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045c4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3045c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3045c8: 0xe501001c  swc1        $f1, 0x1C($t0)
    ctx->pc = 0x3045c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x3045cc: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x3045ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3045d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3045d4: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x3045d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x3045d8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3045d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045dc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3045dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3045e0: 0xe5010024  swc1        $f1, 0x24($t0)
    ctx->pc = 0x3045e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x3045e4: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x3045e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3045e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3045ec: 0xe5010028  swc1        $f1, 0x28($t0)
    ctx->pc = 0x3045ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x3045f0: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x3045f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3045f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3045f8: 0xe501002c  swc1        $f1, 0x2C($t0)
    ctx->pc = 0x3045f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x3045fc: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x3045fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304600: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x304600u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304604: 0xe5010030  swc1        $f1, 0x30($t0)
    ctx->pc = 0x304604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x304608: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x304608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30460c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30460cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304610: 0xe5010034  swc1        $f1, 0x34($t0)
    ctx->pc = 0x304610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 52), bits); }
    // 0x304614: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x304614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304618: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x304618u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30461c: 0xe5010038  swc1        $f1, 0x38($t0)
    ctx->pc = 0x30461cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 56), bits); }
    // 0x304620: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x304620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304624: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x304624u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304628: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x304628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x30462c: 0xe501003c  swc1        $f1, 0x3C($t0)
    ctx->pc = 0x30462cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 60), bits); }
    // 0x304630: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x304630u;
    {
        const bool branch_taken_0x304630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304630u;
        // 0x304634: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304630) {
            ctx->pc = 0x304564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304564;
        }
    }
    ctx->pc = 0x304638u;
label_304638:
    // 0x304638: 0xf0082a  slt         $at, $a3, $s0
    ctx->pc = 0x304638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30463c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x30463Cu;
    {
        const bool branch_taken_0x30463c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30463c) {
            ctx->pc = 0x3046A0u;
            goto label_3046a0;
        }
    }
    ctx->pc = 0x304644u;
    // 0x304644: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x304644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x304648: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30464c: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x30464cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x304650: 0x8443db30  lh          $v1, -0x24D0($v0)
    ctx->pc = 0x304650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x304654: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x304654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x304658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30465c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304660: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x304660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x304664: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x304664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x304668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30466c: 0x0  nop
    ctx->pc = 0x30466cu;
    // NOP
    // 0x304670: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x304670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_304674:
    // 0x304674: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x304674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304678: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x304678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30467c: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x30467cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x304680: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x304680u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x304684: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x304684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x304688: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x304688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30468c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30468cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304690: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x304690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x304694: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x304694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x304698: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x304698u;
    {
        const bool branch_taken_0x304698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304698u;
        // 0x30469c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304698) {
            ctx->pc = 0x304674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304674;
        }
    }
    ctx->pc = 0x3046A0u;
label_3046a0:
    // 0x3046a0: 0xc048930  jal         func_1224C0
    ctx->pc = 0x3046A0u;
    SET_GPR_U32(ctx, 31, 0x3046A8u);
    ctx->pc = 0x3046A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046A0u;
    // 0x3046a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x3046A0u, 0x3046A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046A8u;
label_3046a8:
    // 0x3046a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3046a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3046ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3046acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3046b0: 0xc067d18  jal         func_19F460
    ctx->pc = 0x3046B0u;
    SET_GPR_U32(ctx, 31, 0x3046B8u);
    ctx->pc = 0x3046B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3046B0u;
    // 0x3046b4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F460u, 0x3046B0u, 0x3046B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046B8u;
label_3046b8:
    // 0x3046b8: 0xc067cf4  jal         func_19F3D0
    ctx->pc = 0x3046B8u;
    SET_GPR_U32(ctx, 31, 0x3046C0u);
    ctx->pc = 0x19F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3D0u, 0x3046B8u, 0x3046C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3046C0u;
label_3046c0:
    // 0x3046c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3046c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3046c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3046c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3046c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3046c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3046cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3046ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3046d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3046d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3046d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3046d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3046d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3046D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3046DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046D8u;
        // 0x3046dc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3046D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3046E0u;
}
