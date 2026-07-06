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

// Function: sub_0011CE10
// Address: 0x11ce10 - 0x11cf28
void sub_0011CE10_0x11ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CE10_0x11ce10");
#endif

    switch (ctx->pc) {
        case 0x11ce68u: goto label_11ce68;
        case 0x11ceb4u: goto label_11ceb4;
        case 0x11ced4u: goto label_11ced4;
        case 0x11cef8u: goto label_11cef8;
        default: break;
    }

    ctx->pc = 0x11ce10u;

    // 0x11ce10: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x11ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x11ce14: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x11ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11ce18: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x11ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x11ce1c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x11ce1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x11ce20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ce20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11ce24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce28: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x11ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11ce2c: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x11ce2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11ce30: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x11ce30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11ce34: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x11ce34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x11ce38: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x11ce38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x11ce3c: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x11ce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x11ce40: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x11ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x11ce44: 0x2662db50  addiu       $v0, $s3, -0x24B0
    ctx->pc = 0x11ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957904));
    // 0x11ce48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11ce4c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x11ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ce50: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11ce50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce54: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x11ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11ce58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CE58u;
    {
        const bool branch_taken_0x11ce58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE58u;
        // 0x11ce5c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce58) {
            ctx->pc = 0x11CE70u;
            goto label_11ce70;
        }
    }
    ctx->pc = 0x11CE60u;
    // 0x11ce60: 0xc043400  jal         func_10D000
    ctx->pc = 0x11CE60u;
    SET_GPR_U32(ctx, 31, 0x11CE68u);
    ctx->pc = 0x10D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D000u, 0x11CE60u, 0x11CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE68u;
label_11ce68:
    // 0x11ce68: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11CE68u;
    {
        const bool branch_taken_0x11ce68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE68u;
        // 0x11ce6c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce68) {
            ctx->pc = 0x11CEE4u;
            goto label_11cee4;
        }
    }
    ctx->pc = 0x11CE70u;
label_11ce70:
    // 0x11ce70: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x11ce70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11ce74: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11ce78: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x11ce78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x11ce7c: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x11ce7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11ce80: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x11ce80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11ce84: 0x2673db50  addiu       $s3, $s3, -0x24B0
    ctx->pc = 0x11ce84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957904));
    // 0x11ce88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce8c: 0x2625001f  addiu       $a1, $s1, 0x1F
    ctx->pc = 0x11ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x11ce90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11ce94: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x11ce94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11ce98: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x11ce98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x11ce9c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x11ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x11cea0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x11cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x11cea4: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x11cea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11cea8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x11cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x11ceac: 0xc043556  jal         func_10D558
    ctx->pc = 0x11CEACu;
    SET_GPR_U32(ctx, 31, 0x11CEB4u);
    ctx->pc = 0x11CEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEACu;
    // 0x11ceb0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D558u, 0x11CEACu, 0x11CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEB4u;
label_11ceb4:
    // 0x11ceb4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11ceb8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x11ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x11cebc: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x11cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x11cec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cec4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x11cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x11cec8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11cec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cecc: 0xc043ee2  jal         func_10FB88
    ctx->pc = 0x11CECCu;
    SET_GPR_U32(ctx, 31, 0x11CED4u);
    ctx->pc = 0x11CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CECCu;
    // 0x11ced0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB88u, 0x11CECCu, 0x11CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CED4u;
label_11ced4:
    // 0x11ced4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ced4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ced8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CED8u;
    {
        const bool branch_taken_0x11ced8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CED8u;
        // 0x11cedc: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ced8) {
            ctx->pc = 0x11CF00u;
            goto label_11cf00;
        }
    }
    ctx->pc = 0x11CEE0u;
    // 0x11cee0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11cee4:
    // 0x11cee4: 0x8c43b98c  lw          $v1, -0x4674($v0)
    ctx->pc = 0x11cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949260)));
    // 0x11cee8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CEE8u;
    {
        const bool branch_taken_0x11cee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEE8u;
        // 0x11ceec: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cee8) {
            ctx->pc = 0x11CEF8u;
            goto label_11cef8;
        }
    }
    ctx->pc = 0x11CEF0u;
    // 0x11cef0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11CEF0u;
    SET_GPR_U32(ctx, 31, 0x11CEF8u);
    ctx->pc = 0x11CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEF0u;
    // 0x11cef4: 0x2484b468  addiu       $a0, $a0, -0x4B98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11CEF0u, 0x11CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEF8u;
label_11cef8:
    // 0x11cef8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11CEF8u;
    {
        const bool branch_taken_0x11cef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEF8u;
        // 0x11cefc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cef8) {
            ctx->pc = 0x11CF08u;
            goto label_11cf08;
        }
    }
    ctx->pc = 0x11CF00u;
label_11cf00:
    // 0x11cf00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cf04: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x11cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_11cf08:
    // 0x11cf08: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x11cf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11cf0c: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x11cf0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x11cf10: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x11cf10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x11cf14: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x11cf14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11cf18: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x11cf18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x11cf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF1Cu;
        // 0x11cf20: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CF24u;
    // 0x11cf24: 0x0  nop
    ctx->pc = 0x11cf24u;
    // NOP
}
