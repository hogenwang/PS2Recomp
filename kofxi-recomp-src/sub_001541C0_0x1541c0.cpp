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

// Function: sub_001541C0
// Address: 0x1541c0 - 0x154310
void sub_001541C0_0x1541c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001541C0_0x1541c0");
#endif

    switch (ctx->pc) {
        case 0x1541e4u: goto label_1541e4;
        case 0x1541ecu: goto label_1541ec;
        case 0x154204u: goto label_154204;
        case 0x15421cu: goto label_15421c;
        case 0x154270u: goto label_154270;
        case 0x154298u: goto label_154298;
        default: break;
    }

    ctx->pc = 0x1541c0u;

    // 0x1541c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1541c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1541c4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1541c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1541c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1541c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1541cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1541ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1541d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1541d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1541d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1541d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541d8: 0xac8007d0  sw          $zero, 0x7D0($a0)
    ctx->pc = 0x1541d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2000), GPR_U32(ctx, 0));
    // 0x1541dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1541dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541e0: 0xac8207d4  sw          $v0, 0x7D4($a0)
    ctx->pc = 0x1541e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2004), GPR_U32(ctx, 2));
label_1541e4:
    // 0x1541e4: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x1541E4u;
    SET_GPR_U32(ctx, 31, 0x1541ECu);
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x1541E4u, 0x1541ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1541ECu;
label_1541ec:
    // 0x1541ec: 0x3c024430  lui         $v0, 0x4430
    ctx->pc = 0x1541ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17456 << 16));
    // 0x1541f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1541f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1541f4: 0x0  nop
    ctx->pc = 0x1541f4u;
    // NOP
    // 0x1541f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1541f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1541fc: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x1541FCu;
    SET_GPR_U32(ctx, 31, 0x154204u);
    ctx->pc = 0x154200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1541FCu;
    // 0x154200: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x1541FCu, 0x154204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154204u;
label_154204:
    // 0x154204: 0x3c0244c0  lui         $v0, 0x44C0
    ctx->pc = 0x154204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17600 << 16));
    // 0x154208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15420c: 0x0  nop
    ctx->pc = 0x15420cu;
    // NOP
    // 0x154210: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x154210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x154214: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x154214u;
    SET_GPR_U32(ctx, 31, 0x15421Cu);
    ctx->pc = 0x154218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154214u;
    // 0x154218: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x154214u, 0x15421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15421Cu;
label_15421c:
    // 0x15421c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x15421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x154220: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x154220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154224: 0x0  nop
    ctx->pc = 0x154224u;
    // NOP
    // 0x154228: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x154228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15422c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15422cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x154230: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x154230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x154234: 0x0  nop
    ctx->pc = 0x154234u;
    // NOP
    // 0x154238: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15423c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15423Cu;
    {
        const bool branch_taken_0x15423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15423c) {
            ctx->pc = 0x154258u;
            goto label_154258;
        }
    }
    ctx->pc = 0x154244u;
    // 0x154244: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x154244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
    // 0x154248: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x154248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x15424c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15424Cu;
    {
        const bool branch_taken_0x15424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15424Cu;
        // 0x154250: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15424c) {
            ctx->pc = 0x154268u;
            goto label_154268;
        }
    }
    ctx->pc = 0x154254u;
    // 0x154254: 0x0  nop
    ctx->pc = 0x154254u;
    // NOP
label_154258:
    // 0x154258: 0x3c02413c  lui         $v0, 0x413C
    ctx->pc = 0x154258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16700 << 16));
    // 0x15425c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x154260: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x154260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x154264: 0x0  nop
    ctx->pc = 0x154264u;
    // NOP
label_154268:
    // 0x154268: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x154268u;
    SET_GPR_U32(ctx, 31, 0x154270u);
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x154268u, 0x154270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154270u;
label_154270:
    // 0x154270: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x154270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x154274: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x154274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x154278: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x154278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15427c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15427cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154280: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x154280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x154284: 0x0  nop
    ctx->pc = 0x154284u;
    // NOP
    // 0x154288: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x154288u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x15428c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x15428cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x154290: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x154290u;
    SET_GPR_U32(ctx, 31, 0x154298u);
    ctx->pc = 0x154294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154290u;
    // 0x154294: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x154290u, 0x154298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154298u;
label_154298:
    // 0x154298: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x154298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x15429c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x15429cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1542a0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1542a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1542a4: 0x0  nop
    ctx->pc = 0x1542a4u;
    // NOP
    // 0x1542a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1542a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1542ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1542acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1542b0: 0x0  nop
    ctx->pc = 0x1542b0u;
    // NOP
    // 0x1542b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1542b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1542b8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1542B8u;
    {
        const bool branch_taken_0x1542b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1542b8) {
            ctx->pc = 0x1542BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1542B8u;
            // 0x1542bc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1542D0u;
            goto label_1542d0;
        }
    }
    ctx->pc = 0x1542C0u;
    // 0x1542c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1542c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1542c4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1542c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1542c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1542C8u;
    {
        const bool branch_taken_0x1542c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1542CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542C8u;
        // 0x1542cc: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542c8) {
            ctx->pc = 0x1542E8u;
            goto label_1542e8;
        }
    }
    ctx->pc = 0x1542D0u;
label_1542d0:
    // 0x1542d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1542d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1542d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1542d8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1542d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1542dc: 0x0  nop
    ctx->pc = 0x1542dcu;
    // NOP
    // 0x1542e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1542e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1542e4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1542e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1542e8:
    // 0x1542e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1542e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1542ec: 0xa2040010  sb          $a0, 0x10($s0)
    ctx->pc = 0x1542ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x1542f0: 0x2a230064  slti        $v1, $s1, 0x64
    ctx->pc = 0x1542f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1542f4: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1542F4u;
    {
        const bool branch_taken_0x1542f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1542F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542F4u;
        // 0x1542f8: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542f4) {
            ctx->pc = 0x1541E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1541e4;
        }
    }
    ctx->pc = 0x1542FCu;
    // 0x1542fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1542fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154308: 0x3e00008  jr          $ra
    ctx->pc = 0x154308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154308u;
        // 0x15430c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154310u;
}
