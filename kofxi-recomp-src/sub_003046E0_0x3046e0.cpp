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

// Function: sub_003046E0
// Address: 0x3046e0 - 0x304b30
void sub_003046E0_0x3046e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003046E0_0x3046e0");
#endif

    switch (ctx->pc) {
        case 0x304714u: goto label_304714;
        case 0x304724u: goto label_304724;
        case 0x3047a0u: goto label_3047a0;
        case 0x304904u: goto label_304904;
        case 0x304944u: goto label_304944;
        case 0x3049b4u: goto label_3049b4;
        case 0x304ac4u: goto label_304ac4;
        case 0x304af8u: goto label_304af8;
        case 0x304b08u: goto label_304b08;
        case 0x304b10u: goto label_304b10;
        default: break;
    }

    ctx->pc = 0x3046e0u;

    // 0x3046e0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3046e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x3046e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3046e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3046e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3046e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3046ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3046ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3046f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3046f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3046f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3046f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3046f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3046f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3046fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3046fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x304700: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x304700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304704: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x304704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x304708: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x304708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30470c: 0xc048930  jal         func_1224C0
    ctx->pc = 0x30470Cu;
    SET_GPR_U32(ctx, 31, 0x304714u);
    ctx->pc = 0x304710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30470Cu;
    // 0x304710: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x30470Cu, 0x304714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304714u;
label_304714:
    // 0x304714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x304714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304718: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x304718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30471c: 0xc067cec  jal         func_19F3B0
    ctx->pc = 0x30471Cu;
    SET_GPR_U32(ctx, 31, 0x304724u);
    ctx->pc = 0x304720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30471Cu;
    // 0x304720: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3B0u, 0x30471Cu, 0x304724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304724u;
label_304724:
    // 0x304724: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x304724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x304728: 0x90421500  lbu         $v0, 0x1500($v0)
    ctx->pc = 0x304728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5376)));
    // 0x30472c: 0x50400087  beql        $v0, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x30472Cu;
    {
        const bool branch_taken_0x30472c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30472c) {
            ctx->pc = 0x304730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30472Cu;
            // 0x304730: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30494Cu;
            goto label_30494c;
        }
    }
    ctx->pc = 0x304734u;
    // 0x304734: 0x1a000080  blez        $s0, . + 4 + (0x80 << 2)
    ctx->pc = 0x304734u;
    {
        const bool branch_taken_0x304734 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x304738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304734u;
        // 0x304738: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304734) {
            ctx->pc = 0x304938u;
            goto label_304938;
        }
    }
    ctx->pc = 0x30473Cu;
    // 0x30473c: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x30473cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x304740: 0x1420005d  bnez        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x304740u;
    {
        const bool branch_taken_0x304740 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x304744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304740u;
        // 0x304744: 0x2605fff8  addiu       $a1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304740) {
            ctx->pc = 0x3048B8u;
            goto label_3048b8;
        }
    }
    ctx->pc = 0x304748u;
    // 0x304748: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304748u;
    {
        const bool branch_taken_0x304748 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x30474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304748u;
        // 0x30474c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304748) {
            ctx->pc = 0x304768u;
            goto label_304768;
        }
    }
    ctx->pc = 0x304750u;
    // 0x304750: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x304750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x304754: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x304754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x304758: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x304758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x30475c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30475Cu;
    {
        const bool branch_taken_0x30475c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30475c) {
            ctx->pc = 0x304768u;
            goto label_304768;
        }
    }
    ctx->pc = 0x304764u;
    // 0x304764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304768:
    // 0x304768: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x304768u;
    {
        const bool branch_taken_0x304768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304768) {
            ctx->pc = 0x3048B8u;
            goto label_3048b8;
        }
    }
    ctx->pc = 0x304770u;
    // 0x304770: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304774: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x304774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x304778: 0x8444db30  lh          $a0, -0x24D0($v0)
    ctx->pc = 0x304778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x30477c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30477cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304780: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304784: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x304784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x304788: 0x8443db2c  lh          $v1, -0x24D4($v0)
    ctx->pc = 0x304788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x30478c: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x30478cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x304790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304794: 0x0  nop
    ctx->pc = 0x304794u;
    // NOP
    // 0x304798: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x304798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30479c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30479cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3047a0:
    // 0x3047a0: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x3047a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3047a4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3047a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3047a8: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x3047a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3047ac: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x3047acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3047b0: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x3047b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3047b4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x3047b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3047b8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x3047b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3047bc: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x3047bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3047c0: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x3047c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3047c4: 0xe4d40008  swc1        $f20, 0x8($a2)
    ctx->pc = 0x3047c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3047c8: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x3047c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3047cc: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x3047ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3047d0: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x3047d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x3047d4: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x3047d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3047d8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x3047d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3047dc: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x3047dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3047e0: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x3047e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x3047e4: 0xe4d40014  swc1        $f20, 0x14($a2)
    ctx->pc = 0x3047e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x3047e8: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x3047e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3047ec: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x3047ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3047f0: 0xe4c30018  swc1        $f3, 0x18($a2)
    ctx->pc = 0x3047f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x3047f4: 0xc6230014  lwc1        $f3, 0x14($s1)
    ctx->pc = 0x3047f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3047f8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x3047f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3047fc: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x3047fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304800: 0xe4c3001c  swc1        $f3, 0x1C($a2)
    ctx->pc = 0x304800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x304804: 0xe4d40020  swc1        $f20, 0x20($a2)
    ctx->pc = 0x304804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x304808: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x304808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30480c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30480cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304810: 0xe4c30024  swc1        $f3, 0x24($a2)
    ctx->pc = 0x304810u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x304814: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x304814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304818: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304818u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30481c: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x30481cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304820: 0xe4c30028  swc1        $f3, 0x28($a2)
    ctx->pc = 0x304820u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x304824: 0xe4d4002c  swc1        $f20, 0x2C($a2)
    ctx->pc = 0x304824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x304828: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x304828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30482c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30482cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304830: 0xe4c30030  swc1        $f3, 0x30($a2)
    ctx->pc = 0x304830u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x304834: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x304834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304838: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304838u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30483c: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x30483cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304840: 0xe4c30034  swc1        $f3, 0x34($a2)
    ctx->pc = 0x304840u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x304844: 0xe4d40038  swc1        $f20, 0x38($a2)
    ctx->pc = 0x304844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x304848: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x304848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30484c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30484cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304850: 0xe4c3003c  swc1        $f3, 0x3C($a2)
    ctx->pc = 0x304850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x304854: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x304854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304858: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304858u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30485c: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x30485cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304860: 0xe4c30040  swc1        $f3, 0x40($a2)
    ctx->pc = 0x304860u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x304864: 0xe4d40044  swc1        $f20, 0x44($a2)
    ctx->pc = 0x304864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x304868: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x304868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30486c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30486cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304870: 0xe4c30048  swc1        $f3, 0x48($a2)
    ctx->pc = 0x304870u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
    // 0x304874: 0xc6230034  lwc1        $f3, 0x34($s1)
    ctx->pc = 0x304874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304878: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304878u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30487c: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x30487cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304880: 0xe4c3004c  swc1        $f3, 0x4C($a2)
    ctx->pc = 0x304880u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 76), bits); }
    // 0x304884: 0xe4d40050  swc1        $f20, 0x50($a2)
    ctx->pc = 0x304884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x304888: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x304888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30488c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x30488cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x304890: 0xe4c30054  swc1        $f3, 0x54($a2)
    ctx->pc = 0x304890u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x304894: 0xc623003c  lwc1        $f3, 0x3C($s1)
    ctx->pc = 0x304894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304898: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x304898u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x30489c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x30489cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3048a0: 0x460300c1  sub.s       $f3, $f0, $f3
    ctx->pc = 0x3048a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3048a4: 0xe4c30058  swc1        $f3, 0x58($a2)
    ctx->pc = 0x3048a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x3048a8: 0xe4d4005c  swc1        $f20, 0x5C($a2)
    ctx->pc = 0x3048a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 92), bits); }
    // 0x3048ac: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x3048ACu;
    {
        const bool branch_taken_0x3048ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3048B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048ACu;
        // 0x3048b0: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3048ac) {
            ctx->pc = 0x3047A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3047a0;
        }
    }
    ctx->pc = 0x3048B4u;
    // 0x3048b4: 0x0  nop
    ctx->pc = 0x3048b4u;
    // NOP
label_3048b8:
    // 0x3048b8: 0xf0082a  slt         $at, $a3, $s0
    ctx->pc = 0x3048b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3048bc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x3048BCu;
    {
        const bool branch_taken_0x3048bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3048bc) {
            ctx->pc = 0x304938u;
            goto label_304938;
        }
    }
    ctx->pc = 0x3048C4u;
    // 0x3048c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3048c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3048c8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3048c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3048cc: 0x8444db30  lh          $a0, -0x24D0($v0)
    ctx->pc = 0x3048ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x3048d0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3048d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3048d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3048d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3048d8: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x3048d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3048dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3048dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3048e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3048e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3048e4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3048e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3048e8: 0x8443db2c  lh          $v1, -0x24D4($v0)
    ctx->pc = 0x3048e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x3048ec: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x3048ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x3048f0: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x3048f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x3048f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3048f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3048f8: 0x0  nop
    ctx->pc = 0x3048f8u;
    // NOP
    // 0x3048fc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3048fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x304900: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x304900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_304904:
    // 0x304904: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x304904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304908: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x304908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30490c: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x30490cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x304910: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x304910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x304914: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x304914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x304918: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x304918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30491c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30491cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x304920: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x304920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x304924: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x304924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304928: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x304928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x30492c: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x30492cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x304930: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x304930u;
    {
        const bool branch_taken_0x304930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304930u;
        // 0x304934: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304930) {
            ctx->pc = 0x304904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304904;
        }
    }
    ctx->pc = 0x304938u;
label_304938:
    // 0x304938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x304938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30493c: 0xc067d04  jal         func_19F410
    ctx->pc = 0x30493Cu;
    SET_GPR_U32(ctx, 31, 0x304944u);
    ctx->pc = 0x304940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30493Cu;
    // 0x304940: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F410u, 0x30493Cu, 0x304944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304944u;
label_304944:
    // 0x304944: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x304944u;
    {
        const bool branch_taken_0x304944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304944) {
            ctx->pc = 0x304B08u;
            goto label_304b08;
        }
    }
    ctx->pc = 0x30494Cu;
label_30494c:
    // 0x30494c: 0x1a000068  blez        $s0, . + 4 + (0x68 << 2)
    ctx->pc = 0x30494Cu;
    {
        const bool branch_taken_0x30494c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x30494c) {
            ctx->pc = 0x304AF0u;
            goto label_304af0;
        }
    }
    ctx->pc = 0x304954u;
    // 0x304954: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x304954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x304958: 0x1420004b  bnez        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x304958u;
    {
        const bool branch_taken_0x304958 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x30495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304958u;
        // 0x30495c: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304958) {
            ctx->pc = 0x304A88u;
            goto label_304a88;
        }
    }
    ctx->pc = 0x304960u;
    // 0x304960: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304960u;
    {
        const bool branch_taken_0x304960 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x304964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304960u;
        // 0x304964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304960) {
            ctx->pc = 0x304980u;
            goto label_304980;
        }
    }
    ctx->pc = 0x304968u;
    // 0x304968: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x304968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x30496c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x30496cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x304970: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x304970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x304974: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x304974u;
    {
        const bool branch_taken_0x304974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304974) {
            ctx->pc = 0x304980u;
            goto label_304980;
        }
    }
    ctx->pc = 0x30497Cu;
    // 0x30497c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304980:
    // 0x304980: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x304980u;
    {
        const bool branch_taken_0x304980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304980) {
            ctx->pc = 0x304A88u;
            goto label_304a88;
        }
    }
    ctx->pc = 0x304988u;
    // 0x304988: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30498c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x30498cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x304990: 0x8443db30  lh          $v1, -0x24D0($v0)
    ctx->pc = 0x304990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x304994: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304998: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x304998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x30499c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30499cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3049a0: 0x0  nop
    ctx->pc = 0x3049a0u;
    // NOP
    // 0x3049a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3049a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3049a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3049a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3049ac: 0x0  nop
    ctx->pc = 0x3049acu;
    // NOP
    // 0x3049b0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x3049b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3049b4:
    // 0x3049b4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3049b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3049b8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3049b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3049bc: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x3049bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3049c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3049c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3049c4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x3049c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3049c8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3049c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3049cc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3049ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3049d0: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x3049d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x3049d4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3049d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3049d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3049d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3049dc: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x3049dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x3049e0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3049e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3049e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3049e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3049e8: 0xe501000c  swc1        $f1, 0xC($t0)
    ctx->pc = 0x3049e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x3049ec: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x3049ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3049f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3049f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3049f4: 0xe5010010  swc1        $f1, 0x10($t0)
    ctx->pc = 0x3049f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x3049f8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3049f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3049fc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3049fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304a00: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x304a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x304a04: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x304a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x304a08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304a0c: 0xe5010018  swc1        $f1, 0x18($t0)
    ctx->pc = 0x304a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x304a10: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x304a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a14: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x304a14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304a18: 0xe501001c  swc1        $f1, 0x1C($t0)
    ctx->pc = 0x304a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x304a1c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x304a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x304a20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304a24: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x304a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x304a28: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x304a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a2c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x304a2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304a30: 0xe5010024  swc1        $f1, 0x24($t0)
    ctx->pc = 0x304a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x304a34: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x304a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x304a38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304a3c: 0xe5010028  swc1        $f1, 0x28($t0)
    ctx->pc = 0x304a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
    // 0x304a40: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x304a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a44: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x304a44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304a48: 0xe501002c  swc1        $f1, 0x2C($t0)
    ctx->pc = 0x304a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x304a4c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x304a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x304a50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304a54: 0xe5010030  swc1        $f1, 0x30($t0)
    ctx->pc = 0x304a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x304a58: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x304a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a5c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x304a5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304a60: 0xe5010034  swc1        $f1, 0x34($t0)
    ctx->pc = 0x304a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 52), bits); }
    // 0x304a64: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x304a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x304a68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304a6c: 0xe5010038  swc1        $f1, 0x38($t0)
    ctx->pc = 0x304a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 56), bits); }
    // 0x304a70: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x304a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a74: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x304a74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x304a78: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x304a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x304a7c: 0xe501003c  swc1        $f1, 0x3C($t0)
    ctx->pc = 0x304a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 60), bits); }
    // 0x304a80: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x304A80u;
    {
        const bool branch_taken_0x304a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A80u;
        // 0x304a84: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a80) {
            ctx->pc = 0x3049B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3049b4;
        }
    }
    ctx->pc = 0x304A88u;
label_304a88:
    // 0x304a88: 0xf0082a  slt         $at, $a3, $s0
    ctx->pc = 0x304a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x304a8c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x304A8Cu;
    {
        const bool branch_taken_0x304a8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304a8c) {
            ctx->pc = 0x304AF0u;
            goto label_304af0;
        }
    }
    ctx->pc = 0x304A94u;
    // 0x304a94: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x304a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x304a98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304a9c: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x304a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x304aa0: 0x8443db30  lh          $v1, -0x24D0($v0)
    ctx->pc = 0x304aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x304aa4: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x304aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x304aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304aac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x304aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x304ab0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x304ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x304ab4: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x304ab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x304ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304abc: 0x0  nop
    ctx->pc = 0x304abcu;
    // NOP
    // 0x304ac0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x304ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_304ac4:
    // 0x304ac4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x304ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304ac8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x304ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x304acc: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x304accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x304ad0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x304ad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x304ad4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x304ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x304ad8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x304ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304adc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x304adcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304ae0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x304ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x304ae4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x304ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x304ae8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x304AE8u;
    {
        const bool branch_taken_0x304ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AE8u;
        // 0x304aec: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ae8) {
            ctx->pc = 0x304AC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_304ac4;
        }
    }
    ctx->pc = 0x304AF0u;
label_304af0:
    // 0x304af0: 0xc048930  jal         func_1224C0
    ctx->pc = 0x304AF0u;
    SET_GPR_U32(ctx, 31, 0x304AF8u);
    ctx->pc = 0x304AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AF0u;
    // 0x304af4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x304AF0u, 0x304AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AF8u;
label_304af8:
    // 0x304af8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304afc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x304afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b00: 0xc067cf0  jal         func_19F3C0
    ctx->pc = 0x304B00u;
    SET_GPR_U32(ctx, 31, 0x304B08u);
    ctx->pc = 0x304B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304B00u;
    // 0x304b04: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3C0u, 0x304B00u, 0x304B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B08u;
label_304b08:
    // 0x304b08: 0xc067cf4  jal         func_19F3D0
    ctx->pc = 0x304B08u;
    SET_GPR_U32(ctx, 31, 0x304B10u);
    ctx->pc = 0x19F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3D0u, 0x304B08u, 0x304B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B10u;
label_304b10:
    // 0x304b10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x304b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304b14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x304b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x304b18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x304b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304b1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x304b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304b20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x304b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304b24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x304b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304b28: 0x3e00008  jr          $ra
    ctx->pc = 0x304B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B28u;
        // 0x304b2c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304B30u;
}
