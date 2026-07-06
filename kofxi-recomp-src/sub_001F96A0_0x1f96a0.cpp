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

// Function: sub_001F96A0
// Address: 0x1f96a0 - 0x1f9828
void sub_001F96A0_0x1f96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F96A0_0x1f96a0");
#endif

    switch (ctx->pc) {
        case 0x1f96a0u: goto label_1f96a0;
        case 0x1f96a4u: goto label_1f96a4;
        case 0x1f96a8u: goto label_1f96a8;
        case 0x1f96acu: goto label_1f96ac;
        case 0x1f96b0u: goto label_1f96b0;
        case 0x1f96b4u: goto label_1f96b4;
        case 0x1f96b8u: goto label_1f96b8;
        case 0x1f96bcu: goto label_1f96bc;
        case 0x1f96c0u: goto label_1f96c0;
        case 0x1f96c4u: goto label_1f96c4;
        case 0x1f96c8u: goto label_1f96c8;
        case 0x1f96ccu: goto label_1f96cc;
        case 0x1f96d0u: goto label_1f96d0;
        case 0x1f96d4u: goto label_1f96d4;
        case 0x1f96d8u: goto label_1f96d8;
        case 0x1f96dcu: goto label_1f96dc;
        case 0x1f96e0u: goto label_1f96e0;
        case 0x1f96e4u: goto label_1f96e4;
        case 0x1f96e8u: goto label_1f96e8;
        case 0x1f96ecu: goto label_1f96ec;
        case 0x1f96f0u: goto label_1f96f0;
        case 0x1f96f4u: goto label_1f96f4;
        case 0x1f96f8u: goto label_1f96f8;
        case 0x1f96fcu: goto label_1f96fc;
        case 0x1f9700u: goto label_1f9700;
        case 0x1f9704u: goto label_1f9704;
        case 0x1f9708u: goto label_1f9708;
        case 0x1f970cu: goto label_1f970c;
        case 0x1f9710u: goto label_1f9710;
        case 0x1f9714u: goto label_1f9714;
        case 0x1f9718u: goto label_1f9718;
        case 0x1f971cu: goto label_1f971c;
        case 0x1f9720u: goto label_1f9720;
        case 0x1f9724u: goto label_1f9724;
        case 0x1f9728u: goto label_1f9728;
        case 0x1f972cu: goto label_1f972c;
        case 0x1f9730u: goto label_1f9730;
        case 0x1f9734u: goto label_1f9734;
        case 0x1f9738u: goto label_1f9738;
        case 0x1f973cu: goto label_1f973c;
        case 0x1f9740u: goto label_1f9740;
        case 0x1f9744u: goto label_1f9744;
        case 0x1f9748u: goto label_1f9748;
        case 0x1f974cu: goto label_1f974c;
        case 0x1f9750u: goto label_1f9750;
        case 0x1f9754u: goto label_1f9754;
        case 0x1f9758u: goto label_1f9758;
        case 0x1f975cu: goto label_1f975c;
        case 0x1f9760u: goto label_1f9760;
        case 0x1f9764u: goto label_1f9764;
        case 0x1f9768u: goto label_1f9768;
        case 0x1f976cu: goto label_1f976c;
        case 0x1f9770u: goto label_1f9770;
        case 0x1f9774u: goto label_1f9774;
        case 0x1f9778u: goto label_1f9778;
        case 0x1f977cu: goto label_1f977c;
        case 0x1f9780u: goto label_1f9780;
        case 0x1f9784u: goto label_1f9784;
        case 0x1f9788u: goto label_1f9788;
        case 0x1f978cu: goto label_1f978c;
        case 0x1f9790u: goto label_1f9790;
        case 0x1f9794u: goto label_1f9794;
        case 0x1f9798u: goto label_1f9798;
        case 0x1f979cu: goto label_1f979c;
        case 0x1f97a0u: goto label_1f97a0;
        case 0x1f97a4u: goto label_1f97a4;
        case 0x1f97a8u: goto label_1f97a8;
        case 0x1f97acu: goto label_1f97ac;
        case 0x1f97b0u: goto label_1f97b0;
        case 0x1f97b4u: goto label_1f97b4;
        case 0x1f97b8u: goto label_1f97b8;
        case 0x1f97bcu: goto label_1f97bc;
        case 0x1f97c0u: goto label_1f97c0;
        case 0x1f97c4u: goto label_1f97c4;
        case 0x1f97c8u: goto label_1f97c8;
        case 0x1f97ccu: goto label_1f97cc;
        case 0x1f97d0u: goto label_1f97d0;
        case 0x1f97d4u: goto label_1f97d4;
        case 0x1f97d8u: goto label_1f97d8;
        case 0x1f97dcu: goto label_1f97dc;
        case 0x1f97e0u: goto label_1f97e0;
        case 0x1f97e4u: goto label_1f97e4;
        case 0x1f97e8u: goto label_1f97e8;
        case 0x1f97ecu: goto label_1f97ec;
        case 0x1f97f0u: goto label_1f97f0;
        case 0x1f97f4u: goto label_1f97f4;
        case 0x1f97f8u: goto label_1f97f8;
        case 0x1f97fcu: goto label_1f97fc;
        case 0x1f9800u: goto label_1f9800;
        case 0x1f9804u: goto label_1f9804;
        case 0x1f9808u: goto label_1f9808;
        case 0x1f980cu: goto label_1f980c;
        case 0x1f9810u: goto label_1f9810;
        case 0x1f9814u: goto label_1f9814;
        case 0x1f9818u: goto label_1f9818;
        case 0x1f981cu: goto label_1f981c;
        case 0x1f9820u: goto label_1f9820;
        case 0x1f9824u: goto label_1f9824;
        default: break;
    }

    ctx->pc = 0x1f96a0u;

label_1f96a0:
    // 0x1f96a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f96a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f96a4:
    // 0x1f96a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f96a8:
    // 0x1f96a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f96a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f96ac:
    // 0x1f96ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f96acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f96b0:
    // 0x1f96b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f96b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f96b4:
    // 0x1f96b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f96b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f96b8:
    // 0x1f96b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f96b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f96bc:
    // 0x1f96bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f96bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f96c0:
    // 0x1f96c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f96c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f96c4:
    // 0x1f96c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1f96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1f96c8:
    // 0x1f96c8: 0xc07b648  jal         func_1ED920
label_1f96cc:
    if (ctx->pc == 0x1F96CCu) {
        ctx->pc = 0x1F96CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96C8u;
        // 0x1f96cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96D0u;
        goto label_1f96d0;
    }
    ctx->pc = 0x1F96C8u;
    SET_GPR_U32(ctx, 31, 0x1F96D0u);
    ctx->pc = 0x1F96CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96C8u;
    // 0x1f96cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F96C8u, 0x1F96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96D0u;
label_1f96d0:
    // 0x1f96d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f96d4:
    if (ctx->pc == 0x1F96D4u) {
        ctx->pc = 0x1F96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96D0u;
        // 0x1f96d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96D8u;
        goto label_1f96d8;
    }
    ctx->pc = 0x1F96D0u;
    {
        const bool branch_taken_0x1f96d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96D0u;
        // 0x1f96d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96d0) {
            ctx->pc = 0x1F96F0u;
            goto label_1f96f0;
        }
    }
    ctx->pc = 0x1F96D8u;
label_1f96d8:
    // 0x1f96d8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f96d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1f96dc:
    // 0x1f96dc: 0xc07b5c0  jal         func_1ED700
label_1f96e0:
    if (ctx->pc == 0x1F96E0u) {
        ctx->pc = 0x1F96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96DCu;
        // 0x1f96e0: 0x34a5013a  ori         $a1, $a1, 0x13A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)314);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96E4u;
        goto label_1f96e4;
    }
    ctx->pc = 0x1F96DCu;
    SET_GPR_U32(ctx, 31, 0x1F96E4u);
    ctx->pc = 0x1F96E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96DCu;
    // 0x1f96e0: 0x34a5013a  ori         $a1, $a1, 0x13A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)314);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1F96DCu, 0x1F96E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96E4u;
label_1f96e4:
    // 0x1f96e4: 0x10000021  b           . + 4 + (0x21 << 2)
label_1f96e8:
    if (ctx->pc == 0x1F96E8u) {
        ctx->pc = 0x1F96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96E4u;
        // 0x1f96e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96ECu;
        goto label_1f96ec;
    }
    ctx->pc = 0x1F96E4u;
    {
        const bool branch_taken_0x1f96e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96E4u;
        // 0x1f96e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96e4) {
            ctx->pc = 0x1F976Cu;
            goto label_1f976c;
        }
    }
    ctx->pc = 0x1F96ECu;
label_1f96ec:
    // 0x1f96ec: 0x0  nop
    ctx->pc = 0x1f96ecu;
    // NOP
label_1f96f0:
    // 0x1f96f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f96f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f96f4:
    // 0x1f96f4: 0xc07e672  jal         func_1F99C8
label_1f96f8:
    if (ctx->pc == 0x1F96F8u) {
        ctx->pc = 0x1F96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96F4u;
        // 0x1f96f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F96FCu;
        goto label_1f96fc;
    }
    ctx->pc = 0x1F96F4u;
    SET_GPR_U32(ctx, 31, 0x1F96FCu);
    ctx->pc = 0x1F96F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96F4u;
    // 0x1f96f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99C8u, 0x1F96F4u, 0x1F96FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96FCu;
label_1f96fc:
    // 0x1f96fc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1f9700:
    if (ctx->pc == 0x1F9700u) {
        ctx->pc = 0x1F9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96FCu;
        // 0x1f9700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9704u;
        goto label_1f9704;
    }
    ctx->pc = 0x1F96FCu;
    {
        const bool branch_taken_0x1f96fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96FCu;
        // 0x1f9700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96fc) {
            ctx->pc = 0x1F976Cu;
            goto label_1f976c;
        }
    }
    ctx->pc = 0x1F9704u;
label_1f9704:
    // 0x1f9704: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f9704u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f9708:
    // 0x1f9708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f970c:
    // 0x1f970c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f9710:
    // 0x1f9710: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1f9710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1f9714:
    // 0x1f9714: 0xc07f662  jal         func_1FD988
label_1f9718:
    if (ctx->pc == 0x1F9718u) {
        ctx->pc = 0x1F9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9714u;
        // 0x1f9718: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F971Cu;
        goto label_1f971c;
    }
    ctx->pc = 0x1F9714u;
    SET_GPR_U32(ctx, 31, 0x1F971Cu);
    ctx->pc = 0x1F9718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9714u;
    // 0x1f9718: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1F9714u, 0x1F971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F971Cu;
label_1f971c:
    // 0x1f971c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f971cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1f9720:
    // 0x1f9720: 0x8c621794  lw          $v0, 0x1794($v1)
    ctx->pc = 0x1f9720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6036)));
label_1f9724:
    // 0x1f9724: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1f9728:
    if (ctx->pc == 0x1F9728u) {
        ctx->pc = 0x1F9728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9724u;
        // 0x1f9728: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F972Cu;
        goto label_1f972c;
    }
    ctx->pc = 0x1F9724u;
    {
        const bool branch_taken_0x1f9724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9724) {
            ctx->pc = 0x1F9728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9724u;
            // 0x1f9728: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F973Cu;
            goto label_1f973c;
        }
    }
    ctx->pc = 0x1F972Cu;
label_1f972c:
    // 0x1f972c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1f972cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f9730:
    // 0x1f9730: 0x40f809  jalr        $v0
label_1f9734:
    if (ctx->pc == 0x1F9734u) {
        ctx->pc = 0x1F9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9730u;
        // 0x1f9734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9738u;
        goto label_1f9738;
    }
    ctx->pc = 0x1F9730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9738u);
        ctx->pc = 0x1F9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9730u;
        // 0x1f9734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9730u, 0x1F9738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9738u;
label_1f9738:
    // 0x1f9738: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f9738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f973c:
    // 0x1f973c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f9740:
    if (ctx->pc == 0x1F9740u) {
        ctx->pc = 0x1F9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F973Cu;
        // 0x1f9740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9744u;
        goto label_1f9744;
    }
    ctx->pc = 0x1F973Cu;
    {
        const bool branch_taken_0x1f973c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F973Cu;
        // 0x1f9740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f973c) {
            ctx->pc = 0x1F976Cu;
            goto label_1f976c;
        }
    }
    ctx->pc = 0x1F9744u;
label_1f9744:
    // 0x1f9744: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1f9744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_1f9748:
    // 0x1f9748: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1f974c:
    if (ctx->pc == 0x1F974Cu) {
        ctx->pc = 0x1F974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9748u;
        // 0x1f974c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9750u;
        goto label_1f9750;
    }
    ctx->pc = 0x1F9748u;
    {
        const bool branch_taken_0x1f9748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9748) {
            ctx->pc = 0x1F974Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9748u;
            // 0x1f974c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9764u;
            goto label_1f9764;
        }
    }
    ctx->pc = 0x1F9750u;
label_1f9750:
    // 0x1f9750: 0xc07f446  jal         func_1FD118
label_1f9754:
    if (ctx->pc == 0x1F9754u) {
        ctx->pc = 0x1F9758u;
        goto label_1f9758;
    }
    ctx->pc = 0x1F9750u;
    SET_GPR_U32(ctx, 31, 0x1F9758u);
    ctx->pc = 0x1FD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD118u, 0x1F9750u, 0x1F9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9758u;
label_1f9758:
    // 0x1f9758: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1f9758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_1f975c:
    // 0x1f975c: 0xfe0237d8  sd          $v0, 0x37D8($s0)
    ctx->pc = 0x1f975cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 14296), GPR_U64(ctx, 2));
label_1f9760:
    // 0x1f9760: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f9760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f9764:
    // 0x1f9764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9768:
    // 0x1f9768: 0xae030968  sw          $v1, 0x968($s0)
    ctx->pc = 0x1f9768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 3));
label_1f976c:
    // 0x1f976c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f976cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9770:
    // 0x1f9770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f9774:
    // 0x1f9774: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9778:
    // 0x1f9778: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f977c:
    // 0x1f977c: 0x3e00008  jr          $ra
label_1f9780:
    if (ctx->pc == 0x1F9780u) {
        ctx->pc = 0x1F9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F977Cu;
        // 0x1f9780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9784u;
        goto label_1f9784;
    }
    ctx->pc = 0x1F977Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F977Cu;
        // 0x1f9780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F977Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9784u;
label_1f9784:
    // 0x1f9784: 0x0  nop
    ctx->pc = 0x1f9784u;
    // NOP
label_1f9788:
    // 0x1f9788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f978c:
    // 0x1f978c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f9790:
    // 0x1f9790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9794:
    // 0x1f9794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f9798:
    // 0x1f9798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f979c:
    // 0x1f979c: 0xc07b648  jal         func_1ED920
label_1f97a0:
    if (ctx->pc == 0x1F97A0u) {
        ctx->pc = 0x1F97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F979Cu;
        // 0x1f97a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97A4u;
        goto label_1f97a4;
    }
    ctx->pc = 0x1F979Cu;
    SET_GPR_U32(ctx, 31, 0x1F97A4u);
    ctx->pc = 0x1F97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F979Cu;
    // 0x1f97a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F979Cu, 0x1F97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F97A4u;
label_1f97a4:
    // 0x1f97a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f97a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1f97a8:
    // 0x1f97a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1f97ac:
    if (ctx->pc == 0x1F97ACu) {
        ctx->pc = 0x1F97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97A8u;
        // 0x1f97ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97B0u;
        goto label_1f97b0;
    }
    ctx->pc = 0x1F97A8u;
    {
        const bool branch_taken_0x1f97a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97A8u;
        // 0x1f97ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97a8) {
            ctx->pc = 0x1F97C8u;
            goto label_1f97c8;
        }
    }
    ctx->pc = 0x1F97B0u;
label_1f97b0:
    // 0x1f97b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f97b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f97b4:
    // 0x1f97b4: 0x34a5013b  ori         $a1, $a1, 0x13B
    ctx->pc = 0x1f97b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)315);
label_1f97b8:
    // 0x1f97b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f97b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f97bc:
    // 0x1f97bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f97bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f97c0:
    // 0x1f97c0: 0x807b5c0  j           func_1ED700
label_1f97c4:
    if (ctx->pc == 0x1F97C4u) {
        ctx->pc = 0x1F97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97C0u;
        // 0x1f97c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97C8u;
        goto label_1f97c8;
    }
    ctx->pc = 0x1F97C0u;
    ctx->pc = 0x1F97C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97C0u;
    // 0x1f97c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F97C8u;
label_1f97c8:
    // 0x1f97c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f97c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f97cc:
    // 0x1f97cc: 0xc07e672  jal         func_1F99C8
label_1f97d0:
    if (ctx->pc == 0x1F97D0u) {
        ctx->pc = 0x1F97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97CCu;
        // 0x1f97d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97D4u;
        goto label_1f97d4;
    }
    ctx->pc = 0x1F97CCu;
    SET_GPR_U32(ctx, 31, 0x1F97D4u);
    ctx->pc = 0x1F97D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97CCu;
    // 0x1f97d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99C8u, 0x1F97CCu, 0x1F97D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F97D4u;
label_1f97d4:
    // 0x1f97d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f97d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f97d8:
    // 0x1f97d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f97d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f97dc:
    // 0x1f97dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f97dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f97e0:
    // 0x1f97e0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1f97e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f97e4:
    // 0x1f97e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f97e8:
    if (ctx->pc == 0x1F97E8u) {
        ctx->pc = 0x1F97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97E4u;
        // 0x1f97e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97ECu;
        goto label_1f97ec;
    }
    ctx->pc = 0x1F97E4u;
    {
        const bool branch_taken_0x1f97e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97E4u;
        // 0x1f97e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97e4) {
            ctx->pc = 0x1F9810u;
            goto label_1f9810;
        }
    }
    ctx->pc = 0x1F97ECu;
label_1f97ec:
    // 0x1f97ec: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x1f97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
label_1f97f0:
    // 0x1f97f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f97f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f97f4:
    // 0x1f97f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f97f8:
    // 0x1f97f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f97f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f97fc:
    // 0x1f97fc: 0xae02096c  sw          $v0, 0x96C($s0)
    ctx->pc = 0x1f97fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2412), GPR_U32(ctx, 2));
label_1f9800:
    // 0x1f9800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9804:
    // 0x1f9804: 0x807f662  j           func_1FD988
label_1f9808:
    if (ctx->pc == 0x1F9808u) {
        ctx->pc = 0x1F9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9804u;
        // 0x1f9808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F980Cu;
        goto label_1f980c;
    }
    ctx->pc = 0x1F9804u;
    ctx->pc = 0x1F9808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9804u;
    // 0x1f9808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    sub_001FD988_0x1fd988(rdram, ctx, runtime); return;
    ctx->pc = 0x1F980Cu;
label_1f980c:
    // 0x1f980c: 0x0  nop
    ctx->pc = 0x1f980cu;
    // NOP
label_1f9810:
    // 0x1f9810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9814:
    // 0x1f9814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f9818:
    // 0x1f9818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f981c:
    // 0x1f981c: 0x3e00008  jr          $ra
label_1f9820:
    if (ctx->pc == 0x1F9820u) {
        ctx->pc = 0x1F9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F981Cu;
        // 0x1f9820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9824u;
        goto label_1f9824;
    }
    ctx->pc = 0x1F981Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F981Cu;
        // 0x1f9820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F981Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9824u;
label_1f9824:
    // 0x1f9824: 0x0  nop
    ctx->pc = 0x1f9824u;
    // NOP
}
