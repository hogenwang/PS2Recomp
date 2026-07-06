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

// Function: sub_00312A30
// Address: 0x312a30 - 0x312b40
void sub_00312A30_0x312a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312A30_0x312a30");
#endif

    ctx->pc = 0x312a30u;

    // 0x312a30: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x312a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x312a34: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x312a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x312a38: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x312a38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x312a3c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x312A3Cu;
    {
        const bool branch_taken_0x312a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312a3c) {
            ctx->pc = 0x312A50u;
            goto label_312a50;
        }
    }
    ctx->pc = 0x312A44u;
    // 0x312a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312a48: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x312a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x312a4c: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x312a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_312a50:
    // 0x312a50: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x312a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x312a54: 0x3c0d447a  lui         $t5, 0x447A
    ctx->pc = 0x312a54u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)17530 << 16));
    // 0x312a58: 0x8c7829e0  lw          $t8, 0x29E0($v1)
    ctx->pc = 0x312a58u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x312a5c: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x312a5cu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a60: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x312a60u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x312a64: 0x3c0c4f00  lui         $t4, 0x4F00
    ctx->pc = 0x312a64u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20224 << 16));
    // 0x312a68: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x312a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x312a6c: 0x25ce4df0  addiu       $t6, $t6, 0x4DF0
    ctx->pc = 0x312a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 19952));
    // 0x312a70: 0x1868c0  sll         $t5, $t8, 3
    ctx->pc = 0x312a70u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x312a74: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x312a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x312a78: 0x1b87823  subu        $t7, $t5, $t8
    ctx->pc = 0x312a78u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
    // 0x312a7c: 0x270d0001  addiu       $t5, $t8, 0x1
    ctx->pc = 0x312a7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x312a80: 0xac6d29e0  sw          $t5, 0x29E0($v1)
    ctx->pc = 0x312a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 13));
    // 0x312a84: 0xf1880  sll         $v1, $t7, 2
    ctx->pc = 0x312a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x312a88: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x312a88u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a8c: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x312a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x312a90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x312a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x312a94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x312a94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312a98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x312A98u;
    {
        const bool branch_taken_0x312a98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x312A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A98u;
        // 0x312a9c: 0x1c37021  addu        $t6, $t6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a98) {
            ctx->pc = 0x312AB0u;
            goto label_312ab0;
        }
    }
    ctx->pc = 0x312AA0u;
    // 0x312aa0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312aa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x312aa4: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x312aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x312aa8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x312AA8u;
    {
        const bool branch_taken_0x312aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AA8u;
        // 0x312aac: 0x3c0c8000  lui         $t4, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312aa8) {
            ctx->pc = 0x312ACCu;
            goto label_312acc;
        }
    }
    ctx->pc = 0x312AB0u;
label_312ab0:
    // 0x312ab0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x312ab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x312ab4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x312ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x312ab8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x312ab8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x312abc: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x312abcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x312ac0: 0x0  nop
    ctx->pc = 0x312ac0u;
    // NOP
    // 0x312ac4: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x312ac4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x312ac8: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x312ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
label_312acc:
    // 0x312acc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x312accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312ad0: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x312ad0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x312ad4: 0xadcd0110  sw          $t5, 0x110($t6)
    ctx->pc = 0x312ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 272), GPR_U32(ctx, 13));
    // 0x312ad8: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x312ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
    // 0x312adc: 0xadc6000c  sw          $a2, 0xC($t6)
    ctx->pc = 0x312adcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 6));
    // 0x312ae0: 0xadc70010  sw          $a3, 0x10($t6)
    ctx->pc = 0x312ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 7));
    // 0x312ae4: 0xadc80014  sw          $t0, 0x14($t6)
    ctx->pc = 0x312ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 8));
    // 0x312ae8: 0xadc90018  sw          $t1, 0x18($t6)
    ctx->pc = 0x312ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 9));
    // 0x312aec: 0xadca001c  sw          $t2, 0x1C($t6)
    ctx->pc = 0x312aecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 10));
    // 0x312af0: 0xadc50004  sw          $a1, 0x4($t6)
    ctx->pc = 0x312af0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 5));
    // 0x312af4: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x312af4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x312af8: 0xadcb0020  sw          $t3, 0x20($t6)
    ctx->pc = 0x312af8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 32), GPR_U32(ctx, 11));
    // 0x312afc: 0xadc30024  sw          $v1, 0x24($t6)
    ctx->pc = 0x312afcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 36), GPR_U32(ctx, 3));
    // 0x312b00: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x312b00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312b04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x312b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x312b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x312b0c: 0xadcc0028  sw          $t4, 0x28($t6)
    ctx->pc = 0x312b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 12));
    // 0x312b10: 0xadc4002c  sw          $a0, 0x2C($t6)
    ctx->pc = 0x312b10u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 4));
    // 0x312b14: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x312B14u;
    {
        const bool branch_taken_0x312b14 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x312B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B14u;
        // 0x312b18: 0xadc30030  sw          $v1, 0x30($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b14) {
            ctx->pc = 0x312B2Cu;
            goto label_312b2c;
        }
    }
    ctx->pc = 0x312B1Cu;
    // 0x312b1c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x312b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x312b20: 0x24632cb0  addiu       $v1, $v1, 0x2CB0
    ctx->pc = 0x312b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11440));
    // 0x312b24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x312B24u;
    {
        const bool branch_taken_0x312b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B24u;
        // 0x312b28: 0xadc30114  sw          $v1, 0x114($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b24) {
            ctx->pc = 0x312B38u;
            goto label_312b38;
        }
    }
    ctx->pc = 0x312B2Cu;
label_312b2c:
    // 0x312b2c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x312b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x312b30: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x312b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
    // 0x312b34: 0xadc30114  sw          $v1, 0x114($t6)
    ctx->pc = 0x312b34u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 276), GPR_U32(ctx, 3));
label_312b38:
    // 0x312b38: 0x3e00008  jr          $ra
    ctx->pc = 0x312B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312B40u;
}
