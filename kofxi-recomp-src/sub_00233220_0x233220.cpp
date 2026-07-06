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

// Function: sub_00233220
// Address: 0x233220 - 0x233330
void sub_00233220_0x233220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233220_0x233220");
#endif

    switch (ctx->pc) {
        case 0x233268u: goto label_233268;
        case 0x233290u: goto label_233290;
        case 0x2332b0u: goto label_2332b0;
        case 0x2332bcu: goto label_2332bc;
        case 0x2332ccu: goto label_2332cc;
        case 0x2332e0u: goto label_2332e0;
        case 0x2332e8u: goto label_2332e8;
        case 0x2332f8u: goto label_2332f8;
        case 0x233308u: goto label_233308;
        default: break;
    }

    ctx->pc = 0x233220u;

    // 0x233220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x233220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x233224: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x233224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x233228: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x233228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23322c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23322cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233230: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x233230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x233234: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x233234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233238: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x233238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x23323c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x23323cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x233240: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x233240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x233244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233248: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x233248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x23324c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23324Cu;
    {
        const bool branch_taken_0x23324c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23324Cu;
        // 0x233250: 0x8e950028  lw          $s5, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23324c) {
            ctx->pc = 0x233278u;
            goto label_233278;
        }
    }
    ctx->pc = 0x233254u;
    // 0x233254: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x233254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x233258: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x233258u;
    {
        const bool branch_taken_0x233258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233258u;
        // 0x23325c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233258) {
            ctx->pc = 0x23330Cu;
            goto label_23330c;
        }
    }
    ctx->pc = 0x233260u;
    // 0x233260: 0xc08c682  jal         func_231A08
    ctx->pc = 0x233260u;
    SET_GPR_U32(ctx, 31, 0x233268u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x233260u, 0x233268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233268u;
label_233268:
    // 0x233268: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x233268u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x23326c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23326cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233270: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x233270u;
    {
        const bool branch_taken_0x233270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233270u;
        // 0x233274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233270) {
            ctx->pc = 0x2332D8u;
            goto label_2332d8;
        }
    }
    ctx->pc = 0x233278u;
label_233278:
    // 0x233278: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x233278u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23327c: 0x2e420201  sltiu       $v0, $s2, 0x201
    ctx->pc = 0x23327cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
    // 0x233280: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x233280u;
    {
        const bool branch_taken_0x233280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233280u;
        // 0x233284: 0x1298c0  sll         $s3, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233280) {
            ctx->pc = 0x233308u;
            goto label_233308;
        }
    }
    ctx->pc = 0x233288u;
    // 0x233288: 0xc098552  jal         func_261548
    ctx->pc = 0x233288u;
    SET_GPR_U32(ctx, 31, 0x233290u);
    ctx->pc = 0x23328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233288u;
    // 0x23328c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x233288u, 0x233290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233290u;
label_233290:
    // 0x233290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233294: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x233294u;
    {
        const bool branch_taken_0x233294 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x233294) {
            ctx->pc = 0x233298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233294u;
            // 0x233298: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2332A4u;
            goto label_2332a4;
        }
    }
    ctx->pc = 0x23329Cu;
    // 0x23329c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23329Cu;
    {
        const bool branch_taken_0x23329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23329Cu;
        // 0x2332a0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23329c) {
            ctx->pc = 0x23330Cu;
            goto label_23330c;
        }
    }
    ctx->pc = 0x2332A4u;
label_2332a4:
    // 0x2332a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2332a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332a8: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2332A8u;
    SET_GPR_U32(ctx, 31, 0x2332B0u);
    ctx->pc = 0x2332ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332A8u;
    // 0x2332ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2332A8u, 0x2332B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332B0u;
label_2332b0:
    // 0x2332b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2332b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332b4: 0xc08d09c  jal         func_234270
    ctx->pc = 0x2332B4u;
    SET_GPR_U32(ctx, 31, 0x2332BCu);
    ctx->pc = 0x2332B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332B4u;
    // 0x2332b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234270u, 0x2332B4u, 0x2332BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332BCu;
label_2332bc:
    // 0x2332bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2332BCu;
    {
        const bool branch_taken_0x2332bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2332bc) {
            ctx->pc = 0x233300u;
            goto label_233300;
        }
    }
    ctx->pc = 0x2332C4u;
    // 0x2332c4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2332C4u;
    SET_GPR_U32(ctx, 31, 0x2332CCu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2332C4u, 0x2332CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332CCu;
label_2332cc:
    // 0x2332cc: 0xae900028  sw          $s0, 0x28($s4)
    ctx->pc = 0x2332ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 16));
    // 0x2332d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2332d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2332d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2332d8:
    // 0x2332d8: 0xc08cb78  jal         func_232DE0
    ctx->pc = 0x2332D8u;
    SET_GPR_U32(ctx, 31, 0x2332E0u);
    ctx->pc = 0x232DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232DE0u, 0x2332D8u, 0x2332E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332E0u;
label_2332e0:
    // 0x2332e0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2332E0u;
    SET_GPR_U32(ctx, 31, 0x2332E8u);
    ctx->pc = 0x2332E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332E0u;
    // 0x2332e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2332E0u, 0x2332E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332E8u;
label_2332e8:
    // 0x2332e8: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2332E8u;
    {
        const bool branch_taken_0x2332e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332E8u;
        // 0x2332ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332e8) {
            ctx->pc = 0x23330Cu;
            goto label_23330c;
        }
    }
    ctx->pc = 0x2332F0u;
    // 0x2332f0: 0xc098560  jal         func_261580
    ctx->pc = 0x2332F0u;
    SET_GPR_U32(ctx, 31, 0x2332F8u);
    ctx->pc = 0x2332F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332F0u;
    // 0x2332f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2332F0u, 0x2332F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332F8u;
label_2332f8:
    // 0x2332f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2332F8u;
    {
        const bool branch_taken_0x2332f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332F8u;
        // 0x2332fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332f8) {
            ctx->pc = 0x23330Cu;
            goto label_23330c;
        }
    }
    ctx->pc = 0x233300u;
label_233300:
    // 0x233300: 0xc098560  jal         func_261580
    ctx->pc = 0x233300u;
    SET_GPR_U32(ctx, 31, 0x233308u);
    ctx->pc = 0x233304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233300u;
    // 0x233304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x233300u, 0x233308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233308u;
label_233308:
    // 0x233308: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x233308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_23330c:
    // 0x23330c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x233310: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x233310u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233314: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x233314u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233318: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x233318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23331c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23331cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233320: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x233320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233328: 0x3e00008  jr          $ra
    ctx->pc = 0x233328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233328u;
        // 0x23332c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233330u;
}
