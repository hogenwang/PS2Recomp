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

// Function: sub_00323C60
// Address: 0x323c60 - 0x324000
void sub_00323C60_0x323c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323C60_0x323c60");
#endif

    switch (ctx->pc) {
        case 0x323d58u: goto label_323d58;
        case 0x323d70u: goto label_323d70;
        case 0x323ef4u: goto label_323ef4;
        case 0x323f2cu: goto label_323f2c;
        default: break;
    }

    ctx->pc = 0x323c60u;

    // 0x323c60: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x323c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x323c64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x323c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x323c68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x323c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x323c6c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x323c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x323c70: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x323c70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x323c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x323c78: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x323c78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c7c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x323c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x323c80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x323c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x323c84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x323c84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x323c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x323c8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x323c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x323c90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x323c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x323c94: 0x7943c  dsll32      $s2, $a3, 16
    ctx->pc = 0x323c94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) << (32 + 16));
    // 0x323c98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323c9c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x323c9cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x323ca0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x323ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x323ca4: 0x128843  sra         $s1, $s2, 1
    ctx->pc = 0x323ca4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 18), 1));
    // 0x323ca8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x323CA8u;
    {
        const bool branch_taken_0x323ca8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x323CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323CA8u;
        // 0x323cac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323ca8) {
            ctx->pc = 0x323CB8u;
            goto label_323cb8;
        }
    }
    ctx->pc = 0x323CB0u;
    // 0x323cb0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x323cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x323cb4: 0x38843  sra         $s1, $v1, 1
    ctx->pc = 0x323cb4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 1));
label_323cb8:
    // 0x323cb8: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x323cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x323cbc: 0x8843c  dsll32      $s0, $t0, 16
    ctx->pc = 0x323cbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) << (32 + 16));
    // 0x323cc0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x323cc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x323cc4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x323cc4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x323cc8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x323cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x323ccc: 0x10b043  sra         $s6, $s0, 1
    ctx->pc = 0x323cccu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 16), 1));
    // 0x323cd0: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x323cd0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
    // 0x323cd4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323CD4u;
    {
        const bool branch_taken_0x323cd4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x323CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323CD4u;
        // 0x323cd8: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323cd4) {
            ctx->pc = 0x323CE4u;
            goto label_323ce4;
        }
    }
    ctx->pc = 0x323CDCu;
    // 0x323cdc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x323cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x323ce0: 0x3b043  sra         $s6, $v1, 1
    ctx->pc = 0x323ce0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 1));
label_323ce4:
    // 0x323ce4: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x323ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x323ce8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x323ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x323cec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x323cecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x323cf0: 0x762823  subu        $a1, $v1, $s6
    ctx->pc = 0x323cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x323cf4: 0x59c3c  dsll32      $s3, $a1, 16
    ctx->pc = 0x323cf4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) << (32 + 16));
    // 0x323cf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x323cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x323cfc: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x323CFCu;
    {
        const bool branch_taken_0x323cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x323D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323CFCu;
        // 0x323d00: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323cfc) {
            ctx->pc = 0x323D4Cu;
            goto label_323d4c;
        }
    }
    ctx->pc = 0x323D04u;
    // 0x323d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x323d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323d08: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x323D08u;
    {
        const bool branch_taken_0x323d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x323d08) {
            ctx->pc = 0x323D20u;
            goto label_323d20;
        }
    }
    ctx->pc = 0x323D10u;
    // 0x323d10: 0x5080001b  beql        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x323D10u;
    {
        const bool branch_taken_0x323d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x323d10) {
            ctx->pc = 0x323D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323D10u;
            // 0x323d14: 0x141c3c  dsll32      $v1, $s4, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323D80u;
            goto label_323d80;
        }
    }
    ctx->pc = 0x323D18u;
    // 0x323d18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x323D18u;
    {
        const bool branch_taken_0x323d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323d18) {
            ctx->pc = 0x323D7Cu;
            goto label_323d7c;
        }
    }
    ctx->pc = 0x323D20u;
label_323d20:
    // 0x323d20: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x323d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x323d24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x323d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x323d28: 0x8484db30  lh          $a0, -0x24D0($a0)
    ctx->pc = 0x323d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957872)));
    // 0x323d2c: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x323d2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x323d30: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x323d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x323d34: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x323d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x323d38: 0x4a43c  dsll32      $s4, $a0, 16
    ctx->pc = 0x323d38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) << (32 + 16));
    // 0x323d3c: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x323d3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x323d40: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x323d40u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x323d44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x323D44u;
    {
        const bool branch_taken_0x323d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D44u;
        // 0x323d48: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d44) {
            ctx->pc = 0x323D7Cu;
            goto label_323d7c;
        }
    }
    ctx->pc = 0x323D4Cu;
label_323d4c:
    // 0x323d4c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x323d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d50: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x323D50u;
    SET_GPR_U32(ctx, 31, 0x323D58u);
    ctx->pc = 0x323D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D50u;
    // 0x323d54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151AF0u, 0x323D50u, 0x323D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D58u;
label_323d58:
    // 0x323d58: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x323d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x323d5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x323d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323d60: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x323d60u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
    // 0x323d64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x323d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323d68: 0xc0546bc  jal         func_151AF0
    ctx->pc = 0x323D68u;
    SET_GPR_U32(ctx, 31, 0x323D70u);
    ctx->pc = 0x323D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323D68u;
    // 0x323d6c: 0x14a43f  dsra32      $s4, $s4, 16 (Delay Slot)
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151AF0u, 0x323D68u, 0x323D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323D70u;
label_323d70:
    // 0x323d70: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x323d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x323d74: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x323d74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x323d78: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x323d78u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_323d7c:
    // 0x323d7c: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x323d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
label_323d80:
    // 0x323d80: 0x33c5ffff  andi        $a1, $fp, 0xFFFF
    ctx->pc = 0x323d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x323d84: 0x133c3c  dsll32      $a3, $s3, 16
    ctx->pc = 0x323d84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 16));
    // 0x323d88: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x323d88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x323d8c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x323d8cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x323d90: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x323d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x323d94: 0x714021  addu        $t0, $v1, $s1
    ctx->pc = 0x323d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x323d98: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x323D98u;
    {
        const bool branch_taken_0x323d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D98u;
        // 0x323d9c: 0xf63021  addu        $a2, $a3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d98) {
            ctx->pc = 0x323DB8u;
            goto label_323db8;
        }
    }
    ctx->pc = 0x323DA0u;
    // 0x323da0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x323da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x323da4: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x323da4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323da8: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x323da8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
    // 0x323dac: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x323dacu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x323db0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x323DB0u;
    {
        const bool branch_taken_0x323db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DB0u;
        // 0x323db4: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323db0) {
            ctx->pc = 0x323DD0u;
            goto label_323dd0;
        }
    }
    ctx->pc = 0x323DB8u;
label_323db8:
    // 0x323db8: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x323db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x323dbc: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x323dbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323dc0: 0x4543c  dsll32      $t2, $a0, 16
    ctx->pc = 0x323dc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 16));
    // 0x323dc4: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x323dc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323dc8: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x323dc8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x323dcc: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x323dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_323dd0:
    // 0x323dd0: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x323dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x323dd4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x323DD4u;
    {
        const bool branch_taken_0x323dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x323dd4) {
            ctx->pc = 0x323DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323DD4u;
            // 0x323dd8: 0xf02021  addu        $a0, $a3, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323DF4u;
            goto label_323df4;
        }
    }
    ctx->pc = 0x323DDCu;
    // 0x323ddc: 0xf02021  addu        $a0, $a3, $s0
    ctx->pc = 0x323ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x323de0: 0x133c3c  dsll32      $a3, $s3, 16
    ctx->pc = 0x323de0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 16));
    // 0x323de4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x323de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x323de8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x323de8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x323dec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x323DECu;
    {
        const bool branch_taken_0x323dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DECu;
        // 0x323df0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323dec) {
            ctx->pc = 0x323E04u;
            goto label_323e04;
        }
    }
    ctx->pc = 0x323DF4u;
label_323df4:
    // 0x323df4: 0x132c3c  dsll32      $a1, $s3, 16
    ctx->pc = 0x323df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) << (32 + 16));
    // 0x323df8: 0x43c3c  dsll32      $a3, $a0, 16
    ctx->pc = 0x323df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 16));
    // 0x323dfc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x323dfcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x323e00: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x323e00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_323e04:
    // 0x323e04: 0x97a40160  lhu         $a0, 0x160($sp)
    ctx->pc = 0x323e04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x323e08: 0x10800054  beqz        $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x323E08u;
    {
        const bool branch_taken_0x323e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x323e08) {
            ctx->pc = 0x323F5Cu;
            goto label_323f5c;
        }
    }
    ctx->pc = 0x323E10u;
    // 0x323e10: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x323e10u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323e14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x323e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323e1c: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x323e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x323e20: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x323e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x323e24: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x323e24u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323e28: 0x0  nop
    ctx->pc = 0x323e28u;
    // NOP
    // 0x323e2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323e30: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x323e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x323e34: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x323e34u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323e38: 0x0  nop
    ctx->pc = 0x323e38u;
    // NOP
    // 0x323e3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323e40: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x323e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x323e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x323e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323e48: 0x0  nop
    ctx->pc = 0x323e48u;
    // NOP
    // 0x323e4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323e50: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x323e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x323e54: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x323e54u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323e58: 0x0  nop
    ctx->pc = 0x323e58u;
    // NOP
    // 0x323e5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323e60: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x323e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x323e64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x323e64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323e68: 0x0  nop
    ctx->pc = 0x323e68u;
    // NOP
    // 0x323e6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323e70: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x323e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x323e74: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x323e74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323e78: 0x0  nop
    ctx->pc = 0x323e78u;
    // NOP
    // 0x323e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323e80: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x323e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x323e84: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x323e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x323e88: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x323e88u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323e8c: 0x0  nop
    ctx->pc = 0x323e8cu;
    // NOP
    // 0x323e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323e94: 0xe7b400b8  swc1        $f20, 0xB8($sp)
    ctx->pc = 0x323e94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x323e98: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x323e98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x323e9c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x323e9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x323ea0: 0xe7b4010c  swc1        $f20, 0x10C($sp)
    ctx->pc = 0x323ea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x323ea4: 0xe7b40158  swc1        $f20, 0x158($sp)
    ctx->pc = 0x323ea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x323ea8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x323ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x323eac: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x323EACu;
    {
        const bool branch_taken_0x323eac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x323EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EACu;
        // 0x323eb0: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x323eac) {
            ctx->pc = 0x323EC0u;
            goto label_323ec0;
        }
    }
    ctx->pc = 0x323EB4u;
    // 0x323eb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x323eb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323eb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x323EB8u;
    {
        const bool branch_taken_0x323eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323EB8u;
        // 0x323ebc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x323eb8) {
            ctx->pc = 0x323EDCu;
            goto label_323edc;
        }
    }
    ctx->pc = 0x323EC0u;
label_323ec0:
    // 0x323ec0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x323ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x323ec4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x323ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x323ec8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x323ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x323ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x323eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323ed0: 0x0  nop
    ctx->pc = 0x323ed0u;
    // NOP
    // 0x323ed4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x323ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x323ed8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x323ed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_323edc:
    // 0x323edc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x323edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x323ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x323ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323ee4: 0x0  nop
    ctx->pc = 0x323ee4u;
    // NOP
    // 0x323ee8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x323ee8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x323eec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x323eecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x323ef0: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x323ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_323ef4:
    // 0x323ef4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x323ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x323ef8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x323ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x323efc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x323efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x323f00: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x323f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x323f04: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x323f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323f08: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x323f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x323f0c: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x323f0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x323f10: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x323f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x323f14: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x323f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x323f18: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x323f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x323f1c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x323f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x323f20: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x323f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x323f24: 0xc05a9d4  jal         func_16A750
    ctx->pc = 0x323F24u;
    SET_GPR_U32(ctx, 31, 0x323F2Cu);
    ctx->pc = 0x323F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F24u;
    // 0x323f28: 0xafb20138  sw          $s2, 0x138($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A750u, 0x323F24u, 0x323F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F2Cu;
label_323f2c:
    // 0x323f2c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x323f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323f30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x323f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x323f34: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x323f34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x323f38: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x323f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x323f3c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x323f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x323f40: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x323f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323f44: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x323f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x323f48: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x323f48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x323f4c: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x323F4Cu;
    {
        const bool branch_taken_0x323f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x323F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F4Cu;
        // 0x323f50: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f4c) {
            ctx->pc = 0x323EF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_323ef4;
        }
    }
    ctx->pc = 0x323F54u;
    // 0x323f54: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x323F54u;
    {
        const bool branch_taken_0x323f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F54u;
        // 0x323f58: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f54) {
            ctx->pc = 0x323FC8u;
            goto label_323fc8;
        }
    }
    ctx->pc = 0x323F5Cu;
label_323f5c:
    // 0x323f5c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x323f5cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323f60: 0x0  nop
    ctx->pc = 0x323f60u;
    // NOP
    // 0x323f64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323f68: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x323f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x323f6c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x323f6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x323f70: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x323f70u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323f74: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x323f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x323f78: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x323f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x323f7c: 0xe6a30004  swc1        $f3, 0x4($s5)
    ctx->pc = 0x323f7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x323f80: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x323f80u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323f84: 0xe6b40008  swc1        $f20, 0x8($s5)
    ctx->pc = 0x323f84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x323f88: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x323f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x323f8c: 0xe6a2001c  swc1        $f2, 0x1C($s5)
    ctx->pc = 0x323f8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x323f90: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x323f90u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x323f94: 0x0  nop
    ctx->pc = 0x323f94u;
    // NOP
    // 0x323f98: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x323f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x323f9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x323f9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x323fa0: 0xe6a20020  swc1        $f2, 0x20($s5)
    ctx->pc = 0x323fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x323fa4: 0xe6b40024  swc1        $f20, 0x24($s5)
    ctx->pc = 0x323fa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x323fa8: 0xe6a10038  swc1        $f1, 0x38($s5)
    ctx->pc = 0x323fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x323fac: 0xe6a3003c  swc1        $f3, 0x3C($s5)
    ctx->pc = 0x323facu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x323fb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x323fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x323fb4: 0xe6b40040  swc1        $f20, 0x40($s5)
    ctx->pc = 0x323fb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x323fb8: 0xe6a00054  swc1        $f0, 0x54($s5)
    ctx->pc = 0x323fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x323fbc: 0xe6a20058  swc1        $f2, 0x58($s5)
    ctx->pc = 0x323fbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x323fc0: 0xe6b4005c  swc1        $f20, 0x5C($s5)
    ctx->pc = 0x323fc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x323fc4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x323fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_323fc8:
    // 0x323fc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x323fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x323fcc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x323fccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x323fd0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x323fd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x323fd4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x323fd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x323fd8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x323fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x323fdc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x323fdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323fe0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x323fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323fe4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x323fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323fe8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x323fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323fec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x323FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FF0u;
        // 0x323ff4: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323FF8u;
    // 0x323ff8: 0x0  nop
    ctx->pc = 0x323ff8u;
    // NOP
    // 0x323ffc: 0x0  nop
    ctx->pc = 0x323ffcu;
    // NOP
    if (ctx->pc == 0x323ffcu) { ctx->pc = 0x324000u; }
}
