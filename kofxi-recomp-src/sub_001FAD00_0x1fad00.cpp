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

// Function: sub_001FAD00
// Address: 0x1fad00 - 0x1fadb8
void sub_001FAD00_0x1fad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAD00_0x1fad00");
#endif

    switch (ctx->pc) {
        case 0x1fad30u: goto label_1fad30;
        case 0x1fad50u: goto label_1fad50;
        case 0x1fad88u: goto label_1fad88;
        case 0x1fad98u: goto label_1fad98;
        default: break;
    }

    ctx->pc = 0x1fad00u;

    // 0x1fad00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fad04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fad08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fad08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fad10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fad10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fad18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fad18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad1c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FAD1Cu;
    {
        const bool branch_taken_0x1fad1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD1Cu;
        // 0x1fad20: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad1c) {
            ctx->pc = 0x1FAD48u;
            goto label_1fad48;
        }
    }
    ctx->pc = 0x1FAD24u;
    // 0x1fad24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fad24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad28: 0xc07eb6e  jal         func_1FADB8
    ctx->pc = 0x1FAD28u;
    SET_GPR_U32(ctx, 31, 0x1FAD30u);
    ctx->pc = 0x1FAD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD28u;
    // 0x1fad2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADB8u, 0x1FAD28u, 0x1FAD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD30u;
label_1fad30:
    // 0x1fad30: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1fad30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1fad34: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1fad34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1fad38: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1fad38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1fad3c: 0xac321540  sw          $s2, 0x1540($at)
    ctx->pc = 0x1fad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5440), GPR_U32(ctx, 18));
    // 0x1fad40: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1FAD40u;
    {
        const bool branch_taken_0x1fad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD40u;
        // 0x1fad44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad40) {
            ctx->pc = 0x1FAD9Cu;
            goto label_1fad9c;
        }
    }
    ctx->pc = 0x1FAD48u;
label_1fad48:
    // 0x1fad48: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FAD48u;
    SET_GPR_U32(ctx, 31, 0x1FAD50u);
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FAD48u, 0x1FAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD50u;
label_1fad50:
    // 0x1fad50: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fad50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fad54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAD54u;
    {
        const bool branch_taken_0x1fad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD54u;
        // 0x1fad58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad54) {
            ctx->pc = 0x1FAD78u;
            goto label_1fad78;
        }
    }
    ctx->pc = 0x1FAD5Cu;
    // 0x1fad5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fad5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fad60: 0x34a50112  ori         $a1, $a1, 0x112
    ctx->pc = 0x1fad60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
    // 0x1fad64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fad64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fad68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fad68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fad6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fad6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fad70: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FAD70u;
    ctx->pc = 0x1FAD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD70u;
    // 0x1fad74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FAD78u;
label_1fad78:
    // 0x1fad78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fad7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad80: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FAD80u;
    SET_GPR_U32(ctx, 31, 0x1FAD88u);
    ctx->pc = 0x1FAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD80u;
    // 0x1fad84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE40u, 0x1FAD80u, 0x1FAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD88u;
label_1fad88:
    // 0x1fad88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fad88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fad8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad90: 0xc07eba4  jal         func_1FAE90
    ctx->pc = 0x1FAD90u;
    SET_GPR_U32(ctx, 31, 0x1FAD98u);
    ctx->pc = 0x1FAD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD90u;
    // 0x1fad94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE90u, 0x1FAD90u, 0x1FAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD98u;
label_1fad98:
    // 0x1fad98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fad98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fad9c:
    // 0x1fad9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fad9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fada0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fada0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fada4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fada4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fada8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fada8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fadac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADACu;
        // 0x1fadb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FADB4u;
    // 0x1fadb4: 0x0  nop
    ctx->pc = 0x1fadb4u;
    // NOP
    if (ctx->pc == 0x1fadb4u) { ctx->pc = 0x1fadb8u; }
}
