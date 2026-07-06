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

// Function: sub_0025D6A0
// Address: 0x25d6a0 - 0x25d7a8
void sub_0025D6A0_0x25d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D6A0_0x25d6a0");
#endif

    switch (ctx->pc) {
        case 0x25d6ccu: goto label_25d6cc;
        case 0x25d6e4u: goto label_25d6e4;
        case 0x25d710u: goto label_25d710;
        case 0x25d744u: goto label_25d744;
        case 0x25d760u: goto label_25d760;
        case 0x25d770u: goto label_25d770;
        case 0x25d77cu: goto label_25d77c;
        default: break;
    }

    ctx->pc = 0x25d6a0u;

    // 0x25d6a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x25d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x25d6a4: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x25d6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x25d6a8: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x25d6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x25d6ac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25d6acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d6b0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x25d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x25d6b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25d6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d6b8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x25d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x25d6bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25d6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d6c0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x25d6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x25d6c4: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25D6C4u;
    SET_GPR_U32(ctx, 31, 0x25D6CCu);
    ctx->pc = 0x25D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6C4u;
    // 0x25d6c8: 0xffb300a0  sd          $s3, 0xA0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x25D6C4u, 0x25D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6CCu;
label_25d6cc:
    // 0x25d6cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25d6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d6d0: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x25D6D0u;
    {
        const bool branch_taken_0x25d6d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6D0u;
        // 0x25d6d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6d0) {
            ctx->pc = 0x25D784u;
            goto label_25d784;
        }
    }
    ctx->pc = 0x25D6D8u;
    // 0x25d6d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d6dc: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x25D6DCu;
    SET_GPR_U32(ctx, 31, 0x25D6E4u);
    ctx->pc = 0x25D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6DCu;
    // 0x25d6e0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x25D6DCu, 0x25D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6E4u;
label_25d6e4:
    // 0x25d6e4: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x25d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25d6e8: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x25d6e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x25d6ec: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x25D6ECu;
    {
        const bool branch_taken_0x25d6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d6ec) {
            ctx->pc = 0x25D6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D6ECu;
            // 0x25d6f0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D724u;
            goto label_25d724;
        }
    }
    ctx->pc = 0x25D6F4u;
    // 0x25d6f4: 0x2c820401  sltiu       $v0, $a0, 0x401
    ctx->pc = 0x25d6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x25d6f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D6F8u;
    {
        const bool branch_taken_0x25d6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d6f8) {
            ctx->pc = 0x25D708u;
            goto label_25d708;
        }
    }
    ctx->pc = 0x25D700u;
    // 0x25d700: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x25D700u;
    {
        const bool branch_taken_0x25d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D700u;
        // 0x25d704: 0x2411007a  addiu       $s1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d700) {
            ctx->pc = 0x25D770u;
            goto label_25d770;
        }
    }
    ctx->pc = 0x25D708u;
label_25d708:
    // 0x25d708: 0xc098552  jal         func_261548
    ctx->pc = 0x25D708u;
    SET_GPR_U32(ctx, 31, 0x25D710u);
    ctx->pc = 0x25D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D708u;
    // 0x25d70c: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x25D708u, 0x25D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D710u;
label_25d710:
    // 0x25d710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d714: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D714u;
    {
        const bool branch_taken_0x25d714 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D714u;
        // 0x25d718: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d714) {
            ctx->pc = 0x25D72Cu;
            goto label_25d72c;
        }
    }
    ctx->pc = 0x25D71Cu;
    // 0x25d71c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25D71Cu;
    {
        const bool branch_taken_0x25d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D71Cu;
        // 0x25d720: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d71c) {
            ctx->pc = 0x25D770u;
            goto label_25d770;
        }
    }
    ctx->pc = 0x25D724u;
label_25d724:
    // 0x25d724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D724u;
    {
        const bool branch_taken_0x25d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D724u;
        // 0x25d728: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d724) {
            ctx->pc = 0x25D730u;
            goto label_25d730;
        }
    }
    ctx->pc = 0x25D72Cu;
label_25d72c:
    // 0x25d72c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x25d72cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25d730:
    // 0x25d730: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D730u;
    {
        const bool branch_taken_0x25d730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D730u;
        // 0x25d734: 0x430c0  sll         $a2, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d730) {
            ctx->pc = 0x25D744u;
            goto label_25d744;
        }
    }
    ctx->pc = 0x25D738u;
    // 0x25d738: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x25d738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25d73c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x25D73Cu;
    SET_GPR_U32(ctx, 31, 0x25D744u);
    ctx->pc = 0x25D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D73Cu;
    // 0x25d740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x25D73Cu, 0x25D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D744u;
label_25d744:
    // 0x25d744: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25d744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d748: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25d748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d74c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x25d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x25d750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d754: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25d754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d758: 0xc0975ea  jal         func_25D7A8
    ctx->pc = 0x25D758u;
    SET_GPR_U32(ctx, 31, 0x25D760u);
    ctx->pc = 0x25D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D758u;
    // 0x25d75c: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D7A8u, 0x25D758u, 0x25D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D760u;
label_25d760:
    // 0x25d760: 0x12130003  beq         $s0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D760u;
    {
        const bool branch_taken_0x25d760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x25D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D760u;
        // 0x25d764: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d760) {
            ctx->pc = 0x25D770u;
            goto label_25d770;
        }
    }
    ctx->pc = 0x25D768u;
    // 0x25d768: 0xc098560  jal         func_261580
    ctx->pc = 0x25D768u;
    SET_GPR_U32(ctx, 31, 0x25D770u);
    ctx->pc = 0x25D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D768u;
    // 0x25d76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x25D768u, 0x25D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D770u;
label_25d770:
    // 0x25d770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d774: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25D774u;
    SET_GPR_U32(ctx, 31, 0x25D77Cu);
    ctx->pc = 0x25D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D774u;
    // 0x25d778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x25D774u, 0x25D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D77Cu;
label_25d77c:
    // 0x25d77c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D77Cu;
    {
        const bool branch_taken_0x25d77c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D77Cu;
        // 0x25d780: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d77c) {
            ctx->pc = 0x25D788u;
            goto label_25d788;
        }
    }
    ctx->pc = 0x25D784u;
label_25d784:
    // 0x25d784: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25d784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25d788:
    // 0x25d788: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x25d788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25d78c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x25d78cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x25d790: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x25d790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25d794: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x25d794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25d798: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x25d798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25d79c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x25d79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7A0u;
        // 0x25d7a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D7A8u;
}
