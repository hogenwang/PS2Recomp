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

// Function: sub_002BBE30
// Address: 0x2bbe30 - 0x2bbf60
void sub_002BBE30_0x2bbe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBE30_0x2bbe30");
#endif

    switch (ctx->pc) {
        case 0x2bbe64u: goto label_2bbe64;
        case 0x2bbeccu: goto label_2bbecc;
        case 0x2bbf24u: goto label_2bbf24;
        case 0x2bbf40u: goto label_2bbf40;
        case 0x2bbf4cu: goto label_2bbf4c;
        default: break;
    }

    ctx->pc = 0x2bbe30u;

label_2bbe30:
    // 0x2bbe30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bbe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bbe34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bbe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bbe38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bbe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbe3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bbe3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bbe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbe44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bbe44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bbe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bbe4c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBE4Cu;
    {
        const bool branch_taken_0x2bbe4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE4Cu;
        // 0x2bbe50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe4c) {
            ctx->pc = 0x2BBE5Cu;
            goto label_2bbe5c;
        }
    }
    ctx->pc = 0x2BBE54u;
    // 0x2bbe54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2BBE54u;
    {
        const bool branch_taken_0x2bbe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE54u;
        // 0x2bbe58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe54) {
            ctx->pc = 0x2BBEE0u;
            goto label_2bbee0;
        }
    }
    ctx->pc = 0x2BBE5Cu;
label_2bbe5c:
    // 0x2bbe5c: 0xc0aef82  jal         func_2BBE08
    ctx->pc = 0x2BBE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BBE64u);
    ctx->pc = 0x2BBE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBE5Cu;
    // 0x2bbe60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBE08u, 0x2BBE5Cu, 0x2BBE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBE64u;
label_2bbe64:
    // 0x2bbe64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bbe64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbe68: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2bbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2bbe6c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BBE6Cu;
    {
        const bool branch_taken_0x2bbe6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE6Cu;
        // 0x2bbe70: 0x2862001d  slti        $v0, $v1, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe6c) {
            ctx->pc = 0x2BBEA0u;
            goto label_2bbea0;
        }
    }
    ctx->pc = 0x2BBE74u;
    // 0x2bbe74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBE74u;
    {
        const bool branch_taken_0x2bbe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE74u;
        // 0x2bbe78: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe74) {
            ctx->pc = 0x2BBE8Cu;
            goto label_2bbe8c;
        }
    }
    ctx->pc = 0x2BBE7Cu;
    // 0x2bbe7c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BBE7Cu;
    {
        const bool branch_taken_0x2bbe7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbe7c) {
            ctx->pc = 0x2BBE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBE7Cu;
            // 0x2bbe80: 0x24100031  addiu       $s0, $zero, 0x31 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBEA8u;
            goto label_2bbea8;
        }
    }
    ctx->pc = 0x2BBE84u;
    // 0x2bbe84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBE84u;
    {
        const bool branch_taken_0x2bbe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe84) {
            ctx->pc = 0x2BBEA8u;
            goto label_2bbea8;
        }
    }
    ctx->pc = 0x2BBE8Cu;
label_2bbe8c:
    // 0x2bbe8c: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x2bbe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x2bbe90: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBE90u;
    {
        const bool branch_taken_0x2bbe90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE90u;
        // 0x2bbe94: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe90) {
            ctx->pc = 0x2BBEA8u;
            goto label_2bbea8;
        }
    }
    ctx->pc = 0x2BBE98u;
    // 0x2bbe98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBE98u;
    {
        const bool branch_taken_0x2bbe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE98u;
        // 0x2bbe9c: 0x24100012  addiu       $s0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe98) {
            ctx->pc = 0x2BBEA8u;
            goto label_2bbea8;
        }
    }
    ctx->pc = 0x2BBEA0u;
label_2bbea0:
    // 0x2bbea0: 0x24100044  addiu       $s0, $zero, 0x44
    ctx->pc = 0x2bbea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2bbea4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2bbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2bbea8:
    // 0x2bbea8: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BBEA8u;
    {
        const bool branch_taken_0x2bbea8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEA8u;
        // 0x2bbeac: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbea8) {
            ctx->pc = 0x2BBEC0u;
            goto label_2bbec0;
        }
    }
    ctx->pc = 0x2BBEB0u;
    // 0x2bbeb0: 0x52420004  beql        $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBEB0u;
    {
        const bool branch_taken_0x2bbeb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bbeb0) {
            ctx->pc = 0x2BBEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBEB0u;
            // 0x2bbeb4: 0x36100200  ori         $s0, $s0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBEC4u;
            goto label_2bbec4;
        }
    }
    ctx->pc = 0x2BBEB8u;
    // 0x2bbeb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBEB8u;
    {
        const bool branch_taken_0x2bbeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbeb8) {
            ctx->pc = 0x2BBEC4u;
            goto label_2bbec4;
        }
    }
    ctx->pc = 0x2BBEC0u;
label_2bbec0:
    // 0x2bbec0: 0x36100100  ori         $s0, $s0, 0x100
    ctx->pc = 0x2bbec0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)256);
label_2bbec4:
    // 0x2bbec4: 0xc0aef0e  jal         func_2BBC38
    ctx->pc = 0x2BBEC4u;
    SET_GPR_U32(ctx, 31, 0x2BBECCu);
    ctx->pc = 0x2BBEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBEC4u;
    // 0x2bbec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBC38u, 0x2BBEC4u, 0x2BBECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBECCu;
label_2bbecc:
    // 0x2bbecc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2bbeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2bbed0: 0x36041000  ori         $a0, $s0, 0x1000
    ctx->pc = 0x2bbed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4096);
    // 0x2bbed4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2bbed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2bbed8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bbed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbedc: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x2bbedcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_2bbee0:
    // 0x2bbee0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bbee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbee4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bbee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbee8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bbee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbeec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbeecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEF0u;
        // 0x2bbef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBEF8u;
    // 0x2bbef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bbefc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2bbefcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bbf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbf04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bbf08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf0c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBF0Cu;
    {
        const bool branch_taken_0x2bbf0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF0Cu;
        // 0x2bbf10: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf0c) {
            ctx->pc = 0x2BBF30u;
            goto label_2bbf30;
        }
    }
    ctx->pc = 0x2BBF14u;
    // 0x2bbf14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBF14u;
    {
        const bool branch_taken_0x2bbf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF14u;
        // 0x2bbf18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf14) {
            ctx->pc = 0x2BBF28u;
            goto label_2bbf28;
        }
    }
    ctx->pc = 0x2BBF1Cu;
    // 0x2bbf1c: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2BBF1Cu;
    SET_GPR_U32(ctx, 31, 0x2BBF24u);
    ctx->pc = 0x2BBF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF1Cu;
    // 0x2bbf20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E700u, 0x2BBF1Cu, 0x2BBF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF24u;
label_2bbf24:
    // 0x2bbf24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bbf24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbf28:
    // 0x2bbf28: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BBF28u;
    {
        const bool branch_taken_0x2bbf28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bbf28) {
            ctx->pc = 0x2BBF38u;
            goto label_2bbf38;
        }
    }
    ctx->pc = 0x2BBF30u;
label_2bbf30:
    // 0x2bbf30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBF30u;
    {
        const bool branch_taken_0x2bbf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF30u;
        // 0x2bbf34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf30) {
            ctx->pc = 0x2BBF4Cu;
            goto label_2bbf4c;
        }
    }
    ctx->pc = 0x2BBF38u;
label_2bbf38:
    // 0x2bbf38: 0xc0a3978  jal         func_28E5E0
    ctx->pc = 0x2BBF38u;
    SET_GPR_U32(ctx, 31, 0x2BBF40u);
    ctx->pc = 0x2BBF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF38u;
    // 0x2bbf3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E5E0u, 0x2BBF38u, 0x2BBF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBF40u;
label_2bbf40:
    // 0x2bbf40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bbf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf44: 0xc0aef8c  jal         func_2BBE30
    ctx->pc = 0x2BBF44u;
    SET_GPR_U32(ctx, 31, 0x2BBF4Cu);
    ctx->pc = 0x2BBF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBF44u;
    // 0x2bbf48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBE30u;
    goto label_2bbe30;
    ctx->pc = 0x2BBF4Cu;
label_2bbf4c:
    // 0x2bbf4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbf50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bbf50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbf54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbf54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbf58: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF58u;
        // 0x2bbf5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBF60u;
}
