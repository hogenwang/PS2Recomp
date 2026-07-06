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

// Function: sub_00303D60
// Address: 0x303d60 - 0x304290
void sub_00303D60_0x303d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303D60_0x303d60");
#endif

    switch (ctx->pc) {
        case 0x303dccu: goto label_303dcc;
        case 0x303e30u: goto label_303e30;
        case 0x303eb4u: goto label_303eb4;
        case 0x3041dcu: goto label_3041dc;
        case 0x304258u: goto label_304258;
        default: break;
    }

    ctx->pc = 0x303d60u;

    // 0x303d60: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x303d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x303d64: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x303d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x303d68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x303d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x303d6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x303d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x303d70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x303d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x303d74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x303d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x303d78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x303d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x303d7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x303d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x303d80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x303d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x303d84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303d8c: 0x90421500  lbu         $v0, 0x1500($v0)
    ctx->pc = 0x303d8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5376)));
    // 0x303d90: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x303D90u;
    {
        const bool branch_taken_0x303d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D90u;
        // 0x303d94: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d90) {
            ctx->pc = 0x303E38u;
            goto label_303e38;
        }
    }
    ctx->pc = 0x303D98u;
    // 0x303d98: 0x18a00023  blez        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x303D98u;
    {
        const bool branch_taken_0x303d98 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x303D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303D98u;
        // 0x303d9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303d98) {
            ctx->pc = 0x303E28u;
            goto label_303e28;
        }
    }
    ctx->pc = 0x303DA0u;
    // 0x303da0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x303da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x303da4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x303da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x303da8: 0x8468db30  lh          $t0, -0x24D0($v1)
    ctx->pc = 0x303da8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x303dac: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x303dacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x303db0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x303db0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303db4: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x303db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x303db8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x303db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x303dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303dc0: 0x0  nop
    ctx->pc = 0x303dc0u;
    // NOP
    // 0x303dc4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x303dc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x303dc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x303dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303dcc:
    // 0x303dcc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x303dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303dd0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x303dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x303dd4: 0x125102a  slt         $v0, $t1, $a1
    ctx->pc = 0x303dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x303dd8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x303dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x303ddc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x303ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x303de0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x303de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303de4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x303de4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x303de8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x303de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x303dec: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x303decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x303df0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x303df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303df4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x303df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x303df8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x303df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303dfc: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x303dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x303e00: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x303e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303e04: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x303e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x303e08: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x303e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x303e0c: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x303e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x303e10: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x303e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x303e14: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x303e14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x303e18: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x303e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x303e1c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x303E1Cu;
    {
        const bool branch_taken_0x303e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E1Cu;
        // 0x303e20: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e1c) {
            ctx->pc = 0x303DCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303dcc;
        }
    }
    ctx->pc = 0x303E24u;
    // 0x303e24: 0x0  nop
    ctx->pc = 0x303e24u;
    // NOP
label_303e28:
    // 0x303e28: 0xc067d14  jal         func_19F450
    ctx->pc = 0x303E28u;
    SET_GPR_U32(ctx, 31, 0x303E30u);
    ctx->pc = 0x303E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303E28u;
    // 0x303e2c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F450u, 0x303E28u, 0x303E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E30u;
label_303e30:
    // 0x303e30: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x303E30u;
    {
        const bool branch_taken_0x303e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E30u;
        // 0x303e34: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e30) {
            ctx->pc = 0x30425Cu;
            goto label_30425c;
        }
    }
    ctx->pc = 0x303E38u;
label_303e38:
    // 0x303e38: 0x18a00105  blez        $a1, . + 4 + (0x105 << 2)
    ctx->pc = 0x303E38u;
    {
        const bool branch_taken_0x303e38 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x303E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E38u;
        // 0x303e3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e38) {
            ctx->pc = 0x304250u;
            goto label_304250;
        }
    }
    ctx->pc = 0x303E40u;
    // 0x303e40: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x303e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x303e44: 0x142000e0  bnez        $at, . + 4 + (0xE0 << 2)
    ctx->pc = 0x303E44u;
    {
        const bool branch_taken_0x303e44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x303E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E44u;
        // 0x303e48: 0x24a2fff8  addiu       $v0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e44) {
            ctx->pc = 0x3041C8u;
            goto label_3041c8;
        }
    }
    ctx->pc = 0x303E4Cu;
    // 0x303e4c: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x303E4Cu;
    {
        const bool branch_taken_0x303e4c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x303E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303E4Cu;
        // 0x303e50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303e4c) {
            ctx->pc = 0x303E6Cu;
            goto label_303e6c;
        }
    }
    ctx->pc = 0x303E54u;
    // 0x303e54: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x303e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x303e58: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x303e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x303e5c: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x303e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x303e60: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x303E60u;
    {
        const bool branch_taken_0x303e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x303e60) {
            ctx->pc = 0x303E6Cu;
            goto label_303e6c;
        }
    }
    ctx->pc = 0x303E68u;
    // 0x303e68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x303e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303e6c:
    // 0x303e6c: 0x110000d6  beqz        $t0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x303E6Cu;
    {
        const bool branch_taken_0x303e6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x303e6c) {
            ctx->pc = 0x3041C8u;
            goto label_3041c8;
        }
    }
    ctx->pc = 0x303E74u;
    // 0x303e74: 0x3c15009c  lui         $s5, 0x9C
    ctx->pc = 0x303e74u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)156 << 16));
    // 0x303e78: 0x3c14009c  lui         $s4, 0x9C
    ctx->pc = 0x303e78u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)156 << 16));
    // 0x303e7c: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x303e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x303e80: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x303e80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x303e84: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x303e84u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x303e88: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x303e88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x303e8c: 0x3c19009c  lui         $t9, 0x9C
    ctx->pc = 0x303e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)156 << 16));
    // 0x303e90: 0x3c18009c  lui         $t8, 0x9C
    ctx->pc = 0x303e90u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)156 << 16));
    // 0x303e94: 0x3c0f009c  lui         $t7, 0x9C
    ctx->pc = 0x303e94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)156 << 16));
    // 0x303e98: 0x3c0e009c  lui         $t6, 0x9C
    ctx->pc = 0x303e98u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)156 << 16));
    // 0x303e9c: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x303e9cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x303ea0: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x303ea0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x303ea4: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x303ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x303ea8: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x303ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x303eac: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x303eacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x303eb0: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x303eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
label_303eb4:
    // 0x303eb4: 0x86b7db30  lh          $s7, -0x24D0($s5)
    ctx->pc = 0x303eb4u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294957872)));
    // 0x303eb8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x303eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x303ebc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x303ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303ec0: 0x62b02a  slt         $s6, $v1, $v0
    ctx->pc = 0x303ec0u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x303ec4: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x303ec4u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303ec8: 0x0  nop
    ctx->pc = 0x303ec8u;
    // NOP
    // 0x303ecc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303ed0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x303ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x303ed4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x303ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x303ed8: 0x8697db2c  lh          $s7, -0x24D4($s4)
    ctx->pc = 0x303ed8u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294957868)));
    // 0x303edc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x303edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303ee0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x303ee0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303ee4: 0x0  nop
    ctx->pc = 0x303ee4u;
    // NOP
    // 0x303ee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303eec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x303eecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x303ef0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x303ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x303ef4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x303ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303ef8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x303ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x303efc: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x303efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f00: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x303f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x303f04: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x303f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f08: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x303f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x303f0c: 0x8c970014  lw          $s7, 0x14($a0)
    ctx->pc = 0x303f0cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x303f10: 0xacf70014  sw          $s7, 0x14($a3)
    ctx->pc = 0x303f10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 23));
    // 0x303f14: 0x8c970018  lw          $s7, 0x18($a0)
    ctx->pc = 0x303f14u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x303f18: 0xacf70018  sw          $s7, 0x18($a3)
    ctx->pc = 0x303f18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 23));
    // 0x303f1c: 0x8677db30  lh          $s7, -0x24D0($s3)
    ctx->pc = 0x303f1cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294957872)));
    // 0x303f20: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x303f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303f24: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x303f24u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303f28: 0x0  nop
    ctx->pc = 0x303f28u;
    // NOP
    // 0x303f2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303f30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x303f30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x303f34: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x303f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x303f38: 0x8657db2c  lh          $s7, -0x24D4($s2)
    ctx->pc = 0x303f38u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294957868)));
    // 0x303f3c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x303f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303f40: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x303f40u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303f44: 0x0  nop
    ctx->pc = 0x303f44u;
    // NOP
    // 0x303f48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303f4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x303f4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x303f50: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x303f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x303f54: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x303f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f58: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x303f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x303f5c: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x303f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f60: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x303f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x303f64: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x303f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303f68: 0xe4e0002c  swc1        $f0, 0x2C($a3)
    ctx->pc = 0x303f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x303f6c: 0x8c970030  lw          $s7, 0x30($a0)
    ctx->pc = 0x303f6cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x303f70: 0xacf70030  sw          $s7, 0x30($a3)
    ctx->pc = 0x303f70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 23));
    // 0x303f74: 0x8c970034  lw          $s7, 0x34($a0)
    ctx->pc = 0x303f74u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x303f78: 0xacf70034  sw          $s7, 0x34($a3)
    ctx->pc = 0x303f78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 23));
    // 0x303f7c: 0x8637db30  lh          $s7, -0x24D0($s1)
    ctx->pc = 0x303f7cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294957872)));
    // 0x303f80: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x303f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303f84: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x303f84u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303f88: 0x0  nop
    ctx->pc = 0x303f88u;
    // NOP
    // 0x303f8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303f8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303f90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x303f90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x303f94: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x303f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x303f98: 0x8617db2c  lh          $s7, -0x24D4($s0)
    ctx->pc = 0x303f98u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294957868)));
    // 0x303f9c: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x303f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303fa0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x303fa0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303fa4: 0x0  nop
    ctx->pc = 0x303fa4u;
    // NOP
    // 0x303fa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303fac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x303facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x303fb0: 0xe4e0003c  swc1        $f0, 0x3C($a3)
    ctx->pc = 0x303fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 60), bits); }
    // 0x303fb4: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x303fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303fb8: 0xe4e00040  swc1        $f0, 0x40($a3)
    ctx->pc = 0x303fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
    // 0x303fbc: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x303fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303fc0: 0xe4e00044  swc1        $f0, 0x44($a3)
    ctx->pc = 0x303fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 68), bits); }
    // 0x303fc4: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x303fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303fc8: 0xe4e00048  swc1        $f0, 0x48($a3)
    ctx->pc = 0x303fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 72), bits); }
    // 0x303fcc: 0x8c97004c  lw          $s7, 0x4C($a0)
    ctx->pc = 0x303fccu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x303fd0: 0xacf7004c  sw          $s7, 0x4C($a3)
    ctx->pc = 0x303fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 23));
    // 0x303fd4: 0x8c970050  lw          $s7, 0x50($a0)
    ctx->pc = 0x303fd4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x303fd8: 0xacf70050  sw          $s7, 0x50($a3)
    ctx->pc = 0x303fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 23));
    // 0x303fdc: 0x8737db30  lh          $s7, -0x24D0($t9)
    ctx->pc = 0x303fdcu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4294957872)));
    // 0x303fe0: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x303fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303fe4: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x303fe4u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303fe8: 0x0  nop
    ctx->pc = 0x303fe8u;
    // NOP
    // 0x303fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x303fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x303ff0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x303ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x303ff4: 0xe4e00054  swc1        $f0, 0x54($a3)
    ctx->pc = 0x303ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 84), bits); }
    // 0x303ff8: 0x8717db2c  lh          $s7, -0x24D4($t8)
    ctx->pc = 0x303ff8u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294957868)));
    // 0x303ffc: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x303ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304000: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x304000u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304004: 0x0  nop
    ctx->pc = 0x304004u;
    // NOP
    // 0x304008: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30400c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30400cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304010: 0xe4e00058  swc1        $f0, 0x58($a3)
    ctx->pc = 0x304010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 88), bits); }
    // 0x304014: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x304014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304018: 0xe4e0005c  swc1        $f0, 0x5C($a3)
    ctx->pc = 0x304018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 92), bits); }
    // 0x30401c: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x30401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304020: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x304020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x304024: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x304024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304028: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x304028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x30402c: 0x8c970068  lw          $s7, 0x68($a0)
    ctx->pc = 0x30402cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x304030: 0xacf70068  sw          $s7, 0x68($a3)
    ctx->pc = 0x304030u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 23));
    // 0x304034: 0x8c97006c  lw          $s7, 0x6C($a0)
    ctx->pc = 0x304034u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x304038: 0xacf7006c  sw          $s7, 0x6C($a3)
    ctx->pc = 0x304038u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 23));
    // 0x30403c: 0x85f7db30  lh          $s7, -0x24D0($t7)
    ctx->pc = 0x30403cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 4294957872)));
    // 0x304040: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x304040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304044: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x304044u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304048: 0x0  nop
    ctx->pc = 0x304048u;
    // NOP
    // 0x30404c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30404cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304050: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x304050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304054: 0xe4e00070  swc1        $f0, 0x70($a3)
    ctx->pc = 0x304054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
    // 0x304058: 0x85d7db2c  lh          $s7, -0x24D4($t6)
    ctx->pc = 0x304058u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294957868)));
    // 0x30405c: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x30405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304060: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x304060u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304064: 0x0  nop
    ctx->pc = 0x304064u;
    // NOP
    // 0x304068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30406c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30406cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304070: 0xe4e00074  swc1        $f0, 0x74($a3)
    ctx->pc = 0x304070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 116), bits); }
    // 0x304074: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x304074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304078: 0xe4e00078  swc1        $f0, 0x78($a3)
    ctx->pc = 0x304078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 120), bits); }
    // 0x30407c: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x30407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304080: 0xe4e0007c  swc1        $f0, 0x7C($a3)
    ctx->pc = 0x304080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 124), bits); }
    // 0x304084: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x304084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304088: 0xe4e00080  swc1        $f0, 0x80($a3)
    ctx->pc = 0x304088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 128), bits); }
    // 0x30408c: 0x8c970084  lw          $s7, 0x84($a0)
    ctx->pc = 0x30408cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x304090: 0xacf70084  sw          $s7, 0x84($a3)
    ctx->pc = 0x304090u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 132), GPR_U32(ctx, 23));
    // 0x304094: 0x8c970088  lw          $s7, 0x88($a0)
    ctx->pc = 0x304094u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x304098: 0xacf70088  sw          $s7, 0x88($a3)
    ctx->pc = 0x304098u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 23));
    // 0x30409c: 0x85b7db30  lh          $s7, -0x24D0($t5)
    ctx->pc = 0x30409cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294957872)));
    // 0x3040a0: 0xc481008c  lwc1        $f1, 0x8C($a0)
    ctx->pc = 0x3040a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3040a4: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x3040a4u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3040a8: 0x0  nop
    ctx->pc = 0x3040a8u;
    // NOP
    // 0x3040ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3040acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3040b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3040b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3040b4: 0xe4e0008c  swc1        $f0, 0x8C($a3)
    ctx->pc = 0x3040b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 140), bits); }
    // 0x3040b8: 0x8597db2c  lh          $s7, -0x24D4($t4)
    ctx->pc = 0x3040b8u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4294957868)));
    // 0x3040bc: 0xc4810090  lwc1        $f1, 0x90($a0)
    ctx->pc = 0x3040bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3040c0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x3040c0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3040c4: 0x0  nop
    ctx->pc = 0x3040c4u;
    // NOP
    // 0x3040c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3040c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3040cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3040ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3040d0: 0xe4e00090  swc1        $f0, 0x90($a3)
    ctx->pc = 0x3040d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 144), bits); }
    // 0x3040d4: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x3040d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3040d8: 0xe4e00094  swc1        $f0, 0x94($a3)
    ctx->pc = 0x3040d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 148), bits); }
    // 0x3040dc: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x3040dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3040e0: 0xe4e00098  swc1        $f0, 0x98($a3)
    ctx->pc = 0x3040e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 152), bits); }
    // 0x3040e4: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x3040e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3040e8: 0xe4e0009c  swc1        $f0, 0x9C($a3)
    ctx->pc = 0x3040e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 156), bits); }
    // 0x3040ec: 0x8c9700a0  lw          $s7, 0xA0($a0)
    ctx->pc = 0x3040ecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x3040f0: 0xacf700a0  sw          $s7, 0xA0($a3)
    ctx->pc = 0x3040f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 23));
    // 0x3040f4: 0x8c9700a4  lw          $s7, 0xA4($a0)
    ctx->pc = 0x3040f4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x3040f8: 0xacf700a4  sw          $s7, 0xA4($a3)
    ctx->pc = 0x3040f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 23));
    // 0x3040fc: 0x8577db30  lh          $s7, -0x24D0($t3)
    ctx->pc = 0x3040fcu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294957872)));
    // 0x304100: 0xc48100a8  lwc1        $f1, 0xA8($a0)
    ctx->pc = 0x304100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304104: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x304104u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304108: 0x0  nop
    ctx->pc = 0x304108u;
    // NOP
    // 0x30410c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30410cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304110: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x304110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304114: 0xe4e000a8  swc1        $f0, 0xA8($a3)
    ctx->pc = 0x304114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 168), bits); }
    // 0x304118: 0x8557db2c  lh          $s7, -0x24D4($t2)
    ctx->pc = 0x304118u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294957868)));
    // 0x30411c: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x30411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304120: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x304120u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304124: 0x0  nop
    ctx->pc = 0x304124u;
    // NOP
    // 0x304128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30412c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30412cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304130: 0xe4e000ac  swc1        $f0, 0xAC($a3)
    ctx->pc = 0x304130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 172), bits); }
    // 0x304134: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x304134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304138: 0xe4e000b0  swc1        $f0, 0xB0($a3)
    ctx->pc = 0x304138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 176), bits); }
    // 0x30413c: 0xc48000b4  lwc1        $f0, 0xB4($a0)
    ctx->pc = 0x30413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304140: 0xe4e000b4  swc1        $f0, 0xB4($a3)
    ctx->pc = 0x304140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 180), bits); }
    // 0x304144: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x304144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304148: 0xe4e000b8  swc1        $f0, 0xB8($a3)
    ctx->pc = 0x304148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 184), bits); }
    // 0x30414c: 0x8c9700bc  lw          $s7, 0xBC($a0)
    ctx->pc = 0x30414cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x304150: 0xacf700bc  sw          $s7, 0xBC($a3)
    ctx->pc = 0x304150u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 188), GPR_U32(ctx, 23));
    // 0x304154: 0x8c9700c0  lw          $s7, 0xC0($a0)
    ctx->pc = 0x304154u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x304158: 0xacf700c0  sw          $s7, 0xC0($a3)
    ctx->pc = 0x304158u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 192), GPR_U32(ctx, 23));
    // 0x30415c: 0x8537db30  lh          $s7, -0x24D0($t1)
    ctx->pc = 0x30415cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294957872)));
    // 0x304160: 0xc48100c4  lwc1        $f1, 0xC4($a0)
    ctx->pc = 0x304160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304164: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x304164u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304168: 0x0  nop
    ctx->pc = 0x304168u;
    // NOP
    // 0x30416c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30416cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304170: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x304170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304174: 0xe4e000c4  swc1        $f0, 0xC4($a3)
    ctx->pc = 0x304174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 196), bits); }
    // 0x304178: 0x8517db2c  lh          $s7, -0x24D4($t0)
    ctx->pc = 0x304178u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294957868)));
    // 0x30417c: 0xc48100c8  lwc1        $f1, 0xC8($a0)
    ctx->pc = 0x30417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304180: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x304180u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304184: 0x0  nop
    ctx->pc = 0x304184u;
    // NOP
    // 0x304188: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30418c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x30418cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304190: 0xe4e000c8  swc1        $f0, 0xC8($a3)
    ctx->pc = 0x304190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 200), bits); }
    // 0x304194: 0xc48000cc  lwc1        $f0, 0xCC($a0)
    ctx->pc = 0x304194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304198: 0xe4e000cc  swc1        $f0, 0xCC($a3)
    ctx->pc = 0x304198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 204), bits); }
    // 0x30419c: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x30419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3041a0: 0xe4e000d0  swc1        $f0, 0xD0($a3)
    ctx->pc = 0x3041a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 208), bits); }
    // 0x3041a4: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x3041a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3041a8: 0xe4e000d4  swc1        $f0, 0xD4($a3)
    ctx->pc = 0x3041a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 212), bits); }
    // 0x3041ac: 0x8c9700d8  lw          $s7, 0xD8($a0)
    ctx->pc = 0x3041acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x3041b0: 0xacf700d8  sw          $s7, 0xD8($a3)
    ctx->pc = 0x3041b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 23));
    // 0x3041b4: 0x8c9700dc  lw          $s7, 0xDC($a0)
    ctx->pc = 0x3041b4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x3041b8: 0xacf700dc  sw          $s7, 0xDC($a3)
    ctx->pc = 0x3041b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 23));
    // 0x3041bc: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x3041bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x3041c0: 0x16c0ff3c  bnez        $s6, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x3041C0u;
    {
        const bool branch_taken_0x3041c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x3041C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3041C0u;
        // 0x3041c4: 0x24e700e0  addiu       $a3, $a3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3041c0) {
            ctx->pc = 0x303EB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303eb4;
        }
    }
    ctx->pc = 0x3041C8u;
label_3041c8:
    // 0x3041c8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3041c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3041cc: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x3041CCu;
    {
        const bool branch_taken_0x3041cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3041cc) {
            ctx->pc = 0x304250u;
            goto label_304250;
        }
    }
    ctx->pc = 0x3041D4u;
    // 0x3041d4: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x3041d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x3041d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3041d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_3041dc:
    // 0x3041dc: 0x850adb30  lh          $t2, -0x24D0($t0)
    ctx->pc = 0x3041dcu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294957872)));
    // 0x3041e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3041e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3041e4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3041e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3041e8: 0x65482a  slt         $t1, $v1, $a1
    ctx->pc = 0x3041e8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3041ec: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3041ecu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3041f0: 0x0  nop
    ctx->pc = 0x3041f0u;
    // NOP
    // 0x3041f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3041f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3041f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3041f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3041fc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x3041fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x304200: 0x844adb2c  lh          $t2, -0x24D4($v0)
    ctx->pc = 0x304200u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x304204: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x304204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304208: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x304208u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30420c: 0x0  nop
    ctx->pc = 0x30420cu;
    // NOP
    // 0x304210: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304214: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x304214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x304218: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x304218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x30421c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x30421cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304220: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x304220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x304224: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x304224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304228: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x304228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x30422c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x30422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304230: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x304230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x304234: 0x8c8a0014  lw          $t2, 0x14($a0)
    ctx->pc = 0x304234u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x304238: 0xacea0014  sw          $t2, 0x14($a3)
    ctx->pc = 0x304238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 10));
    // 0x30423c: 0x8c8a0018  lw          $t2, 0x18($a0)
    ctx->pc = 0x30423cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x304240: 0xacea0018  sw          $t2, 0x18($a3)
    ctx->pc = 0x304240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 10));
    // 0x304244: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x304244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x304248: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x304248u;
    {
        const bool branch_taken_0x304248 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x30424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304248u;
        // 0x30424c: 0x24e7001c  addiu       $a3, $a3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304248) {
            ctx->pc = 0x3041DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3041dc;
        }
    }
    ctx->pc = 0x304250u;
label_304250:
    // 0x304250: 0xc067cf8  jal         func_19F3E0
    ctx->pc = 0x304250u;
    SET_GPR_U32(ctx, 31, 0x304258u);
    ctx->pc = 0x304254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304250u;
    // 0x304254: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3E0u, 0x304250u, 0x304258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304258u;
label_304258:
    // 0x304258: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x304258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_30425c:
    // 0x30425c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30425cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304260: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x304260u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304264: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x304264u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304268: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x304268u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30426c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30426cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x304270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x304274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30427c: 0x3e00008  jr          $ra
    ctx->pc = 0x30427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30427Cu;
        // 0x304280: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304284u;
    // 0x304284: 0x0  nop
    ctx->pc = 0x304284u;
    // NOP
    // 0x304288: 0x0  nop
    ctx->pc = 0x304288u;
    // NOP
    // 0x30428c: 0x0  nop
    ctx->pc = 0x30428cu;
    // NOP
    if (ctx->pc == 0x30428cu) { ctx->pc = 0x304290u; }
}
