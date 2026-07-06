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

// Function: sub_002AEBF8
// Address: 0x2aebf8 - 0x2aee90
void sub_002AEBF8_0x2aebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEBF8_0x2aebf8");
#endif

    switch (ctx->pc) {
        case 0x2aec14u: goto label_2aec14;
        case 0x2aec38u: goto label_2aec38;
        case 0x2aec50u: goto label_2aec50;
        case 0x2aecd8u: goto label_2aecd8;
        case 0x2aed0cu: goto label_2aed0c;
        case 0x2aed30u: goto label_2aed30;
        case 0x2aed48u: goto label_2aed48;
        case 0x2aed68u: goto label_2aed68;
        case 0x2aed70u: goto label_2aed70;
        case 0x2aed84u: goto label_2aed84;
        case 0x2aed9cu: goto label_2aed9c;
        case 0x2aedd4u: goto label_2aedd4;
        case 0x2aede4u: goto label_2aede4;
        case 0x2aedfcu: goto label_2aedfc;
        case 0x2aee1cu: goto label_2aee1c;
        case 0x2aee30u: goto label_2aee30;
        case 0x2aee60u: goto label_2aee60;
        case 0x2aee74u: goto label_2aee74;
        default: break;
    }

    ctx->pc = 0x2aebf8u;

label_2aebf8:
    // 0x2aebf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aebfc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aec00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aec00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aec08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aec0c: 0xc0aa554  jal         func_2A9550
    ctx->pc = 0x2AEC0Cu;
    SET_GPR_U32(ctx, 31, 0x2AEC14u);
    ctx->pc = 0x2AEC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC0Cu;
    // 0x2aec10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9550u, 0x2AEC0Cu, 0x2AEC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC14u;
label_2aec14:
    // 0x2aec14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aec14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec18: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AEC18u;
    {
        const bool branch_taken_0x2aec18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aec18) {
            ctx->pc = 0x2AEC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEC18u;
            // 0x2aec1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEC40u;
            goto label_2aec40;
        }
    }
    ctx->pc = 0x2AEC20u;
    // 0x2aec20: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2aec24: 0x240500d7  addiu       $a1, $zero, 0xD7
    ctx->pc = 0x2aec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x2aec28: 0x24060804  addiu       $a2, $zero, 0x804
    ctx->pc = 0x2aec28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
    // 0x2aec2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aec2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec30: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AEC30u;
    SET_GPR_U32(ctx, 31, 0x2AEC38u);
    ctx->pc = 0x2AEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEC30u;
    // 0x2aec34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AEC30u, 0x2AEC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC38u;
label_2aec38:
    // 0x2aec38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEC38u;
    {
        const bool branch_taken_0x2aec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC38u;
        // 0x2aec3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec38) {
            ctx->pc = 0x2AEC58u;
            goto label_2aec58;
        }
    }
    ctx->pc = 0x2AEC40u;
label_2aec40:
    // 0x2aec40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEC40u;
    {
        const bool branch_taken_0x2aec40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aec40) {
            ctx->pc = 0x2AEC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEC40u;
            // 0x2aec44: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEC54u;
            goto label_2aec54;
        }
    }
    ctx->pc = 0x2AEC48u;
    // 0x2aec48: 0xc0aa334  jal         func_2A8CD0
    ctx->pc = 0x2AEC48u;
    SET_GPR_U32(ctx, 31, 0x2AEC50u);
    ctx->pc = 0x2A8CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8CD0u, 0x2AEC48u, 0x2AEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC50u;
label_2aec50:
    // 0x2aec50: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2aec50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2aec54:
    // 0x2aec54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aec58:
    // 0x2aec58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aec58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aec5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aec5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aec60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aec60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aec64: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC64u;
        // 0x2aec68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEC6Cu;
    // 0x2aec6c: 0x0  nop
    ctx->pc = 0x2aec6cu;
    // NOP
    // 0x2aec70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aec74: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2aec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2aec78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2aec7c: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2aec7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2aec80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aec84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aec84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2aec8c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2aec8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aec94: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2AEC94u;
    {
        const bool branch_taken_0x2aec94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEC94u;
        // 0x2aec98: 0x8e5000a0  lw          $s0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aec94) {
            ctx->pc = 0x2AED70u;
            goto label_2aed70;
        }
    }
    ctx->pc = 0x2AEC9Cu;
    // 0x2aec9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2aec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2aeca0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aeca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aeca4: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x2aeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x2aeca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2aeca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aecac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2aecacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aecb0: 0x800008  jr          $a0
    ctx->pc = 0x2AECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AECB8u: goto label_2aecb8;
            case 0x2AECECu: goto label_2aecec;
            case 0x2AED20u: goto label_2aed20;
            case 0x2AED70u: goto label_2aed70;
            case 0x2AED8Cu: goto label_2aed8c;
            case 0x2AEDACu: goto label_2aedac;
            case 0x2AEDB4u: goto label_2aedb4;
            case 0x2AEE44u: goto label_2aee44;
            case 0x2AEE4Cu: goto label_2aee4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AECB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AECB8u;
label_2aecb8:
    // 0x2aecb8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2aecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2aecbc: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2AECBCu;
    {
        const bool branch_taken_0x2aecbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECBCu;
        // 0x2aecc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aecbc) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AECC4u;
    // 0x2aecc4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2aecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2aecc8: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2AECC8u;
    {
        const bool branch_taken_0x2aecc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECC8u;
        // 0x2aeccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aecc8) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AECD0u;
    // 0x2aecd0: 0xc0aef0e  jal         func_2BBC38
    ctx->pc = 0x2AECD0u;
    SET_GPR_U32(ctx, 31, 0x2AECD8u);
    ctx->pc = 0x2BBC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC38u, 0x2AECD0u, 0x2AECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECD8u;
label_2aecd8:
    // 0x2aecd8: 0x28420041  slti        $v0, $v0, 0x41
    ctx->pc = 0x2aecd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x2aecdc: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2AECDCu;
    {
        const bool branch_taken_0x2aecdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECDCu;
        // 0x2aece0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aecdc) {
            ctx->pc = 0x2AEE74u;
            goto label_2aee74;
        }
    }
    ctx->pc = 0x2AECE4u;
    // 0x2aece4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2AECE4u;
    {
        const bool branch_taken_0x2aece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECE4u;
        // 0x2aece8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aece4) {
            ctx->pc = 0x2AEE7Cu;
            goto label_2aee7c;
        }
    }
    ctx->pc = 0x2AECECu;
label_2aecec:
    // 0x2aecec: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2aececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2aecf0: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2AECF0u;
    {
        const bool branch_taken_0x2aecf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECF0u;
        // 0x2aecf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aecf0) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AECF8u;
    // 0x2aecf8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2aecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2aecfc: 0x1080005e  beqz        $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2AECFCu;
    {
        const bool branch_taken_0x2aecfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECFCu;
        // 0x2aed00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aecfc) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AED04u;
    // 0x2aed04: 0xc0aef0e  jal         func_2BBC38
    ctx->pc = 0x2AED04u;
    SET_GPR_U32(ctx, 31, 0x2AED0Cu);
    ctx->pc = 0x2BBC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC38u, 0x2AED04u, 0x2AED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED0Cu;
label_2aed0c:
    // 0x2aed0c: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x2aed0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2aed10: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2AED10u;
    {
        const bool branch_taken_0x2aed10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED10u;
        // 0x2aed14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed10) {
            ctx->pc = 0x2AEE74u;
            goto label_2aee74;
        }
    }
    ctx->pc = 0x2AED18u;
    // 0x2aed18: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2AED18u;
    {
        const bool branch_taken_0x2aed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED18u;
        // 0x2aed1c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed18) {
            ctx->pc = 0x2AEE7Cu;
            goto label_2aee7c;
        }
    }
    ctx->pc = 0x2AED20u;
label_2aed20:
    // 0x2aed20: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AED20u;
    {
        const bool branch_taken_0x2aed20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED20u;
        // 0x2aed24: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed20) {
            ctx->pc = 0x2AEDC0u;
            goto label_2aedc0;
        }
    }
    ctx->pc = 0x2AED28u;
    // 0x2aed28: 0xc0aa39c  jal         func_2A8E70
    ctx->pc = 0x2AED28u;
    SET_GPR_U32(ctx, 31, 0x2AED30u);
    ctx->pc = 0x2AED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED28u;
    // 0x2aed2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E70u, 0x2AED28u, 0x2AED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED30u;
label_2aed30:
    // 0x2aed30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2aed30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2aed34: 0x28420201  slti        $v0, $v0, 0x201
    ctx->pc = 0x2aed34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x2aed38: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AED38u;
    {
        const bool branch_taken_0x2aed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED38u;
        // 0x2aed3c: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed38) {
            ctx->pc = 0x2AED78u;
            goto label_2aed78;
        }
    }
    ctx->pc = 0x2AED40u;
    // 0x2aed40: 0xc0abafe  jal         func_2AEBF8
    ctx->pc = 0x2AED40u;
    SET_GPR_U32(ctx, 31, 0x2AED48u);
    ctx->pc = 0x2AED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED40u;
    // 0x2aed44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEBF8u;
    goto label_2aebf8;
    ctx->pc = 0x2AED48u;
label_2aed48:
    // 0x2aed48: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2AED48u;
    {
        const bool branch_taken_0x2aed48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED48u;
        // 0x2aed4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed48) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AED50u;
    // 0x2aed50: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2aed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2aed54: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2AED54u;
    {
        const bool branch_taken_0x2aed54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED54u;
        // 0x2aed58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed54) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AED5Cu;
    // 0x2aed5c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2aed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2aed60: 0xc0abafe  jal         func_2AEBF8
    ctx->pc = 0x2AED60u;
    SET_GPR_U32(ctx, 31, 0x2AED68u);
    ctx->pc = 0x2AED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED60u;
    // 0x2aed64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEBF8u;
    goto label_2aebf8;
    ctx->pc = 0x2AED68u;
label_2aed68:
    // 0x2aed68: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2AED68u;
    {
        const bool branch_taken_0x2aed68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED68u;
        // 0x2aed6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed68) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AED70u;
label_2aed70:
    // 0x2aed70: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2AED70u;
    {
        const bool branch_taken_0x2aed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED70u;
        // 0x2aed74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed70) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AED78u;
label_2aed78:
    // 0x2aed78: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2aed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2aed7c: 0xc0abafe  jal         func_2AEBF8
    ctx->pc = 0x2AED7Cu;
    SET_GPR_U32(ctx, 31, 0x2AED84u);
    ctx->pc = 0x2AED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED7Cu;
    // 0x2aed80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEBF8u;
    goto label_2aebf8;
    ctx->pc = 0x2AED84u;
label_2aed84:
    // 0x2aed84: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2AED84u;
    {
        const bool branch_taken_0x2aed84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED84u;
        // 0x2aed88: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed84) {
            ctx->pc = 0x2AEE34u;
            goto label_2aee34;
        }
    }
    ctx->pc = 0x2AED8Cu;
label_2aed8c:
    // 0x2aed8c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AED8Cu;
    {
        const bool branch_taken_0x2aed8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED8Cu;
        // 0x2aed90: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aed8c) {
            ctx->pc = 0x2AEDBCu;
            goto label_2aedbc;
        }
    }
    ctx->pc = 0x2AED94u;
    // 0x2aed94: 0xc0abafe  jal         func_2AEBF8
    ctx->pc = 0x2AED94u;
    SET_GPR_U32(ctx, 31, 0x2AED9Cu);
    ctx->pc = 0x2AED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AED94u;
    // 0x2aed98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEBF8u;
    goto label_2aebf8;
    ctx->pc = 0x2AED9Cu;
label_2aed9c:
    // 0x2aed9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeda0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2aeda0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2aeda4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2AEDA4u;
    {
        const bool branch_taken_0x2aeda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDA4u;
        // 0x2aeda8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeda4) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AEDACu;
label_2aedac:
    // 0x2aedac: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2AEDACu;
    {
        const bool branch_taken_0x2aedac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDACu;
        // 0x2aedb0: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aedac) {
            ctx->pc = 0x2AEE74u;
            goto label_2aee74;
        }
    }
    ctx->pc = 0x2AEDB4u;
label_2aedb4:
    // 0x2aedb4: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AEDB4u;
    {
        const bool branch_taken_0x2aedb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aedb4) {
            ctx->pc = 0x2AEDDCu;
            goto label_2aeddc;
        }
    }
    ctx->pc = 0x2AEDBCu;
label_2aedbc:
    // 0x2aedbc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aedbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aedc0:
    // 0x2aedc0: 0x240500d9  addiu       $a1, $zero, 0xD9
    ctx->pc = 0x2aedc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x2aedc4: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2aedc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2aedc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aedc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedcc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AEDCCu;
    SET_GPR_U32(ctx, 31, 0x2AEDD4u);
    ctx->pc = 0x2AEDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDCCu;
    // 0x2aedd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AEDCCu, 0x2AEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDD4u;
label_2aedd4:
    // 0x2aedd4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2AEDD4u;
    {
        const bool branch_taken_0x2aedd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDD4u;
        // 0x2aedd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aedd4) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AEDDCu;
label_2aeddc:
    // 0x2aeddc: 0xc0a5014  jal         func_294050
    ctx->pc = 0x2AEDDCu;
    SET_GPR_U32(ctx, 31, 0x2AEDE4u);
    ctx->pc = 0x2AEDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDDCu;
    // 0x2aede0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294050u, 0x2AEDDCu, 0x2AEDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDE4u;
label_2aede4:
    // 0x2aede4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2aede4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2aede8: 0x28420201  slti        $v0, $v0, 0x201
    ctx->pc = 0x2aede8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x2aedec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AEDECu;
    {
        const bool branch_taken_0x2aedec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDECu;
        // 0x2aedf0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aedec) {
            ctx->pc = 0x2AEE24u;
            goto label_2aee24;
        }
    }
    ctx->pc = 0x2AEDF4u;
    // 0x2aedf4: 0xc0abadc  jal         func_2AEB70
    ctx->pc = 0x2AEDF4u;
    SET_GPR_U32(ctx, 31, 0x2AEDFCu);
    ctx->pc = 0x2AEDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDF4u;
    // 0x2aedf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB70u, 0x2AEDF4u, 0x2AEDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDFCu;
label_2aedfc:
    // 0x2aedfc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2AEDFCu;
    {
        const bool branch_taken_0x2aedfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDFCu;
        // 0x2aee00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aedfc) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AEE04u;
    // 0x2aee04: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2aee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2aee08: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2AEE08u;
    {
        const bool branch_taken_0x2aee08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE08u;
        // 0x2aee0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee08) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AEE10u;
    // 0x2aee10: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x2aee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2aee14: 0xc0abadc  jal         func_2AEB70
    ctx->pc = 0x2AEE14u;
    SET_GPR_U32(ctx, 31, 0x2AEE1Cu);
    ctx->pc = 0x2AEE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE14u;
    // 0x2aee18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB70u, 0x2AEE14u, 0x2AEE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE1Cu;
label_2aee1c:
    // 0x2aee1c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x2AEE1Cu;
    {
        const bool branch_taken_0x2aee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aee1c) {
            ctx->pc = 0x2AED68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aed68;
        }
    }
    ctx->pc = 0x2AEE24u;
label_2aee24:
    // 0x2aee24: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x2aee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2aee28: 0xc0abadc  jal         func_2AEB70
    ctx->pc = 0x2AEE28u;
    SET_GPR_U32(ctx, 31, 0x2AEE30u);
    ctx->pc = 0x2AEE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE28u;
    // 0x2aee2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB70u, 0x2AEE28u, 0x2AEE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE30u;
label_2aee30:
    // 0x2aee30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2aee30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aee34:
    // 0x2aee34: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AEE34u;
    {
        const bool branch_taken_0x2aee34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE34u;
        // 0x2aee38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee34) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AEE3Cu;
    // 0x2aee3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2AEE3Cu;
    {
        const bool branch_taken_0x2aee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE3Cu;
        // 0x2aee40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee3c) {
            ctx->pc = 0x2AEE78u;
            goto label_2aee78;
        }
    }
    ctx->pc = 0x2AEE44u;
label_2aee44:
    // 0x2aee44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AEE44u;
    {
        const bool branch_taken_0x2aee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE44u;
        // 0x2aee48: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee44) {
            ctx->pc = 0x2AEE74u;
            goto label_2aee74;
        }
    }
    ctx->pc = 0x2AEE4Cu;
label_2aee4c:
    // 0x2aee4c: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x2aee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2aee50: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEE50u;
    {
        const bool branch_taken_0x2aee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aee50) {
            ctx->pc = 0x2AEE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEE50u;
            // 0x2aee54: 0x8e440110  lw          $a0, 0x110($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEE6Cu;
            goto label_2aee6c;
        }
    }
    ctx->pc = 0x2AEE58u;
    // 0x2aee58: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x2AEE58u;
    SET_GPR_U32(ctx, 31, 0x2AEE60u);
    ctx->pc = 0x2AEE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE58u;
    // 0x2aee5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2AEE58u, 0x2AEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE60u;
label_2aee60:
    // 0x2aee60: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2AEE60u;
    {
        const bool branch_taken_0x2aee60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE60u;
        // 0x2aee64: 0xae420110  sw          $v0, 0x110($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee60) {
            ctx->pc = 0x2AED70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aed70;
        }
    }
    ctx->pc = 0x2AEE68u;
    // 0x2aee68: 0x8e440110  lw          $a0, 0x110($s2)
    ctx->pc = 0x2aee68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_2aee6c:
    // 0x2aee6c: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2AEE6Cu;
    SET_GPR_U32(ctx, 31, 0x2AEE74u);
    ctx->pc = 0x2AEE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE6Cu;
    // 0x2aee70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x2AEE6Cu, 0x2AEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE74u;
label_2aee74:
    // 0x2aee74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aee78:
    // 0x2aee78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aee7c:
    // 0x2aee7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aee7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aee80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aee80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aee84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aee84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aee88: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE88u;
        // 0x2aee8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEE90u;
}
