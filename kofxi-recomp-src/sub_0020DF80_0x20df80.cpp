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

// Function: sub_0020DF80
// Address: 0x20df80 - 0x20e050
void sub_0020DF80_0x20df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DF80_0x20df80");
#endif

    switch (ctx->pc) {
        case 0x20dfb8u: goto label_20dfb8;
        case 0x20e004u: goto label_20e004;
        case 0x20e030u: goto label_20e030;
        default: break;
    }

    ctx->pc = 0x20df80u;

    // 0x20df80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20df84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20df88: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x20df88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x20df8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20df90: 0x27a80034  addiu       $t0, $sp, 0x34
    ctx->pc = 0x20df90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x20df94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20df98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20df98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df9c: 0x94a4000a  lhu         $a0, 0xA($a1)
    ctx->pc = 0x20df9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x20dfa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20dfa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dfa4: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x20dfa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20dfa8: 0x27a9003c  addiu       $t1, $sp, 0x3C
    ctx->pc = 0x20dfa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x20dfac: 0x94a6000e  lhu         $a2, 0xE($a1)
    ctx->pc = 0x20dfacu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x20dfb0: 0xc082944  jal         func_20A510
    ctx->pc = 0x20DFB0u;
    SET_GPR_U32(ctx, 31, 0x20DFB8u);
    ctx->pc = 0x20DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFB0u;
    // 0x20dfb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A510u, 0x20DFB0u, 0x20DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFB8u;
label_20dfb8:
    // 0x20dfb8: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x20dfb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x20dfbc: 0x50e0001d  beql        $a3, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x20DFBCu;
    {
        const bool branch_taken_0x20dfbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dfbc) {
            ctx->pc = 0x20DFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DFBCu;
            // 0x20dfc0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E034u;
            goto label_20e034;
        }
    }
    ctx->pc = 0x20DFC4u;
    // 0x20dfc4: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x20dfc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x20dfc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dfcc: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x20dfccu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20dfd0: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x20dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x20dfd4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x20dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20dfd8: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x20dfd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x20dfdc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20DFDCu;
    {
        const bool branch_taken_0x20dfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFDCu;
        // 0x20dfe0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfdc) {
            ctx->pc = 0x20E00Cu;
            goto label_20e00c;
        }
    }
    ctx->pc = 0x20DFE4u;
    // 0x20dfe4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x20dfe4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20dfe8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x20dfe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20dfec: 0x96080008  lhu         $t0, 0x8($s0)
    ctx->pc = 0x20dfecu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20dff0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20dff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20dff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20dffc: 0xc082df4  jal         func_20B7D0
    ctx->pc = 0x20DFFCu;
    SET_GPR_U32(ctx, 31, 0x20E004u);
    ctx->pc = 0x20E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFFCu;
    // 0x20e000: 0x2224821  addu        $t1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B7D0u, 0x20DFFCu, 0x20E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E004u;
label_20e004:
    // 0x20e004: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20E004u;
    {
        const bool branch_taken_0x20e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e004) {
            ctx->pc = 0x20E030u;
            goto label_20e030;
        }
    }
    ctx->pc = 0x20E00Cu;
label_20e00c:
    // 0x20e00c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x20e00cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20e010: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x20e010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e014: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x20e014u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20e018: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20e018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e01c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20e020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20e024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20e024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20e028: 0xc082ea4  jal         func_20BA90
    ctx->pc = 0x20E028u;
    SET_GPR_U32(ctx, 31, 0x20E030u);
    ctx->pc = 0x20E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E028u;
    // 0x20e02c: 0x2224021  addu        $t0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BA90u, 0x20E028u, 0x20E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E030u;
label_20e030:
    // 0x20e030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20e030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20e034:
    // 0x20e034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e03c: 0x3e00008  jr          $ra
    ctx->pc = 0x20E03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E03Cu;
        // 0x20e040: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E044u;
    // 0x20e044: 0x0  nop
    ctx->pc = 0x20e044u;
    // NOP
    // 0x20e048: 0x0  nop
    ctx->pc = 0x20e048u;
    // NOP
    // 0x20e04c: 0x0  nop
    ctx->pc = 0x20e04cu;
    // NOP
    if (ctx->pc == 0x20e04cu) { ctx->pc = 0x20e050u; }
}
