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

// Function: sub_002BF888
// Address: 0x2bf888 - 0x2bfb20
void sub_002BF888_0x2bf888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF888_0x2bf888");
#endif

    switch (ctx->pc) {
        case 0x2bf888u: goto label_2bf888;
        case 0x2bf88cu: goto label_2bf88c;
        case 0x2bf890u: goto label_2bf890;
        case 0x2bf894u: goto label_2bf894;
        case 0x2bf898u: goto label_2bf898;
        case 0x2bf89cu: goto label_2bf89c;
        case 0x2bf8a0u: goto label_2bf8a0;
        case 0x2bf8a4u: goto label_2bf8a4;
        case 0x2bf8a8u: goto label_2bf8a8;
        case 0x2bf8acu: goto label_2bf8ac;
        case 0x2bf8b0u: goto label_2bf8b0;
        case 0x2bf8b4u: goto label_2bf8b4;
        case 0x2bf8b8u: goto label_2bf8b8;
        case 0x2bf8bcu: goto label_2bf8bc;
        case 0x2bf8c0u: goto label_2bf8c0;
        case 0x2bf8c4u: goto label_2bf8c4;
        case 0x2bf8c8u: goto label_2bf8c8;
        case 0x2bf8ccu: goto label_2bf8cc;
        case 0x2bf8d0u: goto label_2bf8d0;
        case 0x2bf8d4u: goto label_2bf8d4;
        case 0x2bf8d8u: goto label_2bf8d8;
        case 0x2bf8dcu: goto label_2bf8dc;
        case 0x2bf8e0u: goto label_2bf8e0;
        case 0x2bf8e4u: goto label_2bf8e4;
        case 0x2bf8e8u: goto label_2bf8e8;
        case 0x2bf8ecu: goto label_2bf8ec;
        case 0x2bf8f0u: goto label_2bf8f0;
        case 0x2bf8f4u: goto label_2bf8f4;
        case 0x2bf8f8u: goto label_2bf8f8;
        case 0x2bf8fcu: goto label_2bf8fc;
        case 0x2bf900u: goto label_2bf900;
        case 0x2bf904u: goto label_2bf904;
        case 0x2bf908u: goto label_2bf908;
        case 0x2bf90cu: goto label_2bf90c;
        case 0x2bf910u: goto label_2bf910;
        case 0x2bf914u: goto label_2bf914;
        case 0x2bf918u: goto label_2bf918;
        case 0x2bf91cu: goto label_2bf91c;
        case 0x2bf920u: goto label_2bf920;
        case 0x2bf924u: goto label_2bf924;
        case 0x2bf928u: goto label_2bf928;
        case 0x2bf92cu: goto label_2bf92c;
        case 0x2bf930u: goto label_2bf930;
        case 0x2bf934u: goto label_2bf934;
        case 0x2bf938u: goto label_2bf938;
        case 0x2bf93cu: goto label_2bf93c;
        case 0x2bf940u: goto label_2bf940;
        case 0x2bf944u: goto label_2bf944;
        case 0x2bf948u: goto label_2bf948;
        case 0x2bf94cu: goto label_2bf94c;
        case 0x2bf950u: goto label_2bf950;
        case 0x2bf954u: goto label_2bf954;
        case 0x2bf958u: goto label_2bf958;
        case 0x2bf95cu: goto label_2bf95c;
        case 0x2bf960u: goto label_2bf960;
        case 0x2bf964u: goto label_2bf964;
        case 0x2bf968u: goto label_2bf968;
        case 0x2bf96cu: goto label_2bf96c;
        case 0x2bf970u: goto label_2bf970;
        case 0x2bf974u: goto label_2bf974;
        case 0x2bf978u: goto label_2bf978;
        case 0x2bf97cu: goto label_2bf97c;
        case 0x2bf980u: goto label_2bf980;
        case 0x2bf984u: goto label_2bf984;
        case 0x2bf988u: goto label_2bf988;
        case 0x2bf98cu: goto label_2bf98c;
        case 0x2bf990u: goto label_2bf990;
        case 0x2bf994u: goto label_2bf994;
        case 0x2bf998u: goto label_2bf998;
        case 0x2bf99cu: goto label_2bf99c;
        case 0x2bf9a0u: goto label_2bf9a0;
        case 0x2bf9a4u: goto label_2bf9a4;
        case 0x2bf9a8u: goto label_2bf9a8;
        case 0x2bf9acu: goto label_2bf9ac;
        case 0x2bf9b0u: goto label_2bf9b0;
        case 0x2bf9b4u: goto label_2bf9b4;
        case 0x2bf9b8u: goto label_2bf9b8;
        case 0x2bf9bcu: goto label_2bf9bc;
        case 0x2bf9c0u: goto label_2bf9c0;
        case 0x2bf9c4u: goto label_2bf9c4;
        case 0x2bf9c8u: goto label_2bf9c8;
        case 0x2bf9ccu: goto label_2bf9cc;
        case 0x2bf9d0u: goto label_2bf9d0;
        case 0x2bf9d4u: goto label_2bf9d4;
        case 0x2bf9d8u: goto label_2bf9d8;
        case 0x2bf9dcu: goto label_2bf9dc;
        case 0x2bf9e0u: goto label_2bf9e0;
        case 0x2bf9e4u: goto label_2bf9e4;
        case 0x2bf9e8u: goto label_2bf9e8;
        case 0x2bf9ecu: goto label_2bf9ec;
        case 0x2bf9f0u: goto label_2bf9f0;
        case 0x2bf9f4u: goto label_2bf9f4;
        case 0x2bf9f8u: goto label_2bf9f8;
        case 0x2bf9fcu: goto label_2bf9fc;
        case 0x2bfa00u: goto label_2bfa00;
        case 0x2bfa04u: goto label_2bfa04;
        case 0x2bfa08u: goto label_2bfa08;
        case 0x2bfa0cu: goto label_2bfa0c;
        case 0x2bfa10u: goto label_2bfa10;
        case 0x2bfa14u: goto label_2bfa14;
        case 0x2bfa18u: goto label_2bfa18;
        case 0x2bfa1cu: goto label_2bfa1c;
        case 0x2bfa20u: goto label_2bfa20;
        case 0x2bfa24u: goto label_2bfa24;
        case 0x2bfa28u: goto label_2bfa28;
        case 0x2bfa2cu: goto label_2bfa2c;
        case 0x2bfa30u: goto label_2bfa30;
        case 0x2bfa34u: goto label_2bfa34;
        case 0x2bfa38u: goto label_2bfa38;
        case 0x2bfa3cu: goto label_2bfa3c;
        case 0x2bfa40u: goto label_2bfa40;
        case 0x2bfa44u: goto label_2bfa44;
        case 0x2bfa48u: goto label_2bfa48;
        case 0x2bfa4cu: goto label_2bfa4c;
        case 0x2bfa50u: goto label_2bfa50;
        case 0x2bfa54u: goto label_2bfa54;
        case 0x2bfa58u: goto label_2bfa58;
        case 0x2bfa5cu: goto label_2bfa5c;
        case 0x2bfa60u: goto label_2bfa60;
        case 0x2bfa64u: goto label_2bfa64;
        case 0x2bfa68u: goto label_2bfa68;
        case 0x2bfa6cu: goto label_2bfa6c;
        case 0x2bfa70u: goto label_2bfa70;
        case 0x2bfa74u: goto label_2bfa74;
        case 0x2bfa78u: goto label_2bfa78;
        case 0x2bfa7cu: goto label_2bfa7c;
        case 0x2bfa80u: goto label_2bfa80;
        case 0x2bfa84u: goto label_2bfa84;
        case 0x2bfa88u: goto label_2bfa88;
        case 0x2bfa8cu: goto label_2bfa8c;
        case 0x2bfa90u: goto label_2bfa90;
        case 0x2bfa94u: goto label_2bfa94;
        case 0x2bfa98u: goto label_2bfa98;
        case 0x2bfa9cu: goto label_2bfa9c;
        case 0x2bfaa0u: goto label_2bfaa0;
        case 0x2bfaa4u: goto label_2bfaa4;
        case 0x2bfaa8u: goto label_2bfaa8;
        case 0x2bfaacu: goto label_2bfaac;
        case 0x2bfab0u: goto label_2bfab0;
        case 0x2bfab4u: goto label_2bfab4;
        case 0x2bfab8u: goto label_2bfab8;
        case 0x2bfabcu: goto label_2bfabc;
        case 0x2bfac0u: goto label_2bfac0;
        case 0x2bfac4u: goto label_2bfac4;
        case 0x2bfac8u: goto label_2bfac8;
        case 0x2bfaccu: goto label_2bfacc;
        case 0x2bfad0u: goto label_2bfad0;
        case 0x2bfad4u: goto label_2bfad4;
        case 0x2bfad8u: goto label_2bfad8;
        case 0x2bfadcu: goto label_2bfadc;
        case 0x2bfae0u: goto label_2bfae0;
        case 0x2bfae4u: goto label_2bfae4;
        case 0x2bfae8u: goto label_2bfae8;
        case 0x2bfaecu: goto label_2bfaec;
        case 0x2bfaf0u: goto label_2bfaf0;
        case 0x2bfaf4u: goto label_2bfaf4;
        case 0x2bfaf8u: goto label_2bfaf8;
        case 0x2bfafcu: goto label_2bfafc;
        case 0x2bfb00u: goto label_2bfb00;
        case 0x2bfb04u: goto label_2bfb04;
        case 0x2bfb08u: goto label_2bfb08;
        case 0x2bfb0cu: goto label_2bfb0c;
        case 0x2bfb10u: goto label_2bfb10;
        case 0x2bfb14u: goto label_2bfb14;
        case 0x2bfb18u: goto label_2bfb18;
        case 0x2bfb1cu: goto label_2bfb1c;
        default: break;
    }

    ctx->pc = 0x2bf888u;

label_2bf888:
    // 0x2bf888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2bf88c:
    // 0x2bf88c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bf890:
    // 0x2bf890: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2bf890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2bf894:
    // 0x2bf894: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2bf898:
    if (ctx->pc == 0x2BF898u) {
        ctx->pc = 0x2BF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF894u;
        // 0x2bf898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF89Cu;
        goto label_2bf89c;
    }
    ctx->pc = 0x2BF894u;
    {
        const bool branch_taken_0x2bf894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf894) {
            ctx->pc = 0x2BF898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF894u;
            // 0x2bf898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF8BCu;
            goto label_2bf8bc;
        }
    }
    ctx->pc = 0x2BF89Cu;
label_2bf89c:
    // 0x2bf89c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2bf89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2bf8a0:
    // 0x2bf8a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2bf8a4:
    if (ctx->pc == 0x2BF8A4u) {
        ctx->pc = 0x2BF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8A0u;
        // 0x2bf8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8A8u;
        goto label_2bf8a8;
    }
    ctx->pc = 0x2BF8A0u;
    {
        const bool branch_taken_0x2bf8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8A0u;
        // 0x2bf8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8a0) {
            ctx->pc = 0x2BF8BCu;
            goto label_2bf8bc;
        }
    }
    ctx->pc = 0x2BF8A8u;
label_2bf8a8:
    // 0x2bf8a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2bf8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2bf8ac:
    // 0x2bf8ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2bf8b0:
    if (ctx->pc == 0x2BF8B0u) {
        ctx->pc = 0x2BF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8ACu;
        // 0x2bf8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8B4u;
        goto label_2bf8b4;
    }
    ctx->pc = 0x2BF8ACu;
    {
        const bool branch_taken_0x2bf8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8ACu;
        // 0x2bf8b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8ac) {
            ctx->pc = 0x2BF8BCu;
            goto label_2bf8bc;
        }
    }
    ctx->pc = 0x2BF8B4u;
label_2bf8b4:
    // 0x2bf8b4: 0x60f809  jalr        $v1
label_2bf8b8:
    if (ctx->pc == 0x2BF8B8u) {
        ctx->pc = 0x2BF8BCu;
        goto label_2bf8bc;
    }
    ctx->pc = 0x2BF8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BF8BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF8B4u, 0x2BF8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF8BCu;
label_2bf8bc:
    // 0x2bf8bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf8c0:
    // 0x2bf8c0: 0x3e00008  jr          $ra
label_2bf8c4:
    if (ctx->pc == 0x2BF8C4u) {
        ctx->pc = 0x2BF8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8C0u;
        // 0x2bf8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8C8u;
        goto label_2bf8c8;
    }
    ctx->pc = 0x2BF8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8C0u;
        // 0x2bf8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF8C8u;
label_2bf8c8:
    // 0x2bf8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2bf8cc:
    // 0x2bf8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bf8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf8d0:
    // 0x2bf8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bf8d4:
    // 0x2bf8d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bf8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf8d8:
    // 0x2bf8d8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2bf8dc:
    if (ctx->pc == 0x2BF8DCu) {
        ctx->pc = 0x2BF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8D8u;
        // 0x2bf8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8E0u;
        goto label_2bf8e0;
    }
    ctx->pc = 0x2BF8D8u;
    {
        const bool branch_taken_0x2bf8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8D8u;
        // 0x2bf8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8d8) {
            ctx->pc = 0x2BF8F8u;
            goto label_2bf8f8;
        }
    }
    ctx->pc = 0x2BF8E0u;
label_2bf8e0:
    // 0x2bf8e0: 0xc0afc4c  jal         func_2BF130
label_2bf8e4:
    if (ctx->pc == 0x2BF8E4u) {
        ctx->pc = 0x2BF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8E0u;
        // 0x2bf8e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8E8u;
        goto label_2bf8e8;
    }
    ctx->pc = 0x2BF8E0u;
    SET_GPR_U32(ctx, 31, 0x2BF8E8u);
    ctx->pc = 0x2BF8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF8E0u;
    // 0x2bf8e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF130u, 0x2BF8E0u, 0x2BF8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8E8u;
label_2bf8e8:
    // 0x2bf8e8: 0xc0afca4  jal         func_2BF290
label_2bf8ec:
    if (ctx->pc == 0x2BF8ECu) {
        ctx->pc = 0x2BF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8E8u;
        // 0x2bf8ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8F0u;
        goto label_2bf8f0;
    }
    ctx->pc = 0x2BF8E8u;
    SET_GPR_U32(ctx, 31, 0x2BF8F0u);
    ctx->pc = 0x2BF8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF8E8u;
    // 0x2bf8ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF290u, 0x2BF8E8u, 0x2BF8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF8F0u;
label_2bf8f0:
    // 0x2bf8f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bf8f4:
    if (ctx->pc == 0x2BF8F4u) {
        ctx->pc = 0x2BF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F0u;
        // 0x2bf8f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8F8u;
        goto label_2bf8f8;
    }
    ctx->pc = 0x2BF8F0u;
    {
        const bool branch_taken_0x2bf8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F0u;
        // 0x2bf8f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8f0) {
            ctx->pc = 0x2BF8FCu;
            goto label_2bf8fc;
        }
    }
    ctx->pc = 0x2BF8F8u;
label_2bf8f8:
    // 0x2bf8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf8fc:
    // 0x2bf8fc: 0x3e00008  jr          $ra
label_2bf900:
    if (ctx->pc == 0x2BF900u) {
        ctx->pc = 0x2BF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8FCu;
        // 0x2bf900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF904u;
        goto label_2bf904;
    }
    ctx->pc = 0x2BF8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8FCu;
        // 0x2bf900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF904u;
label_2bf904:
    // 0x2bf904: 0x0  nop
    ctx->pc = 0x2bf904u;
    // NOP
label_2bf908:
    // 0x2bf908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2bf90c:
    // 0x2bf90c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bf910:
    // 0x2bf910: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2bf910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf914:
    // 0x2bf914: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bf914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2bf918:
    // 0x2bf918: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x2bf918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2bf91c:
    // 0x2bf91c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2bf920:
    if (ctx->pc == 0x2BF920u) {
        ctx->pc = 0x2BF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF91Cu;
        // 0x2bf920: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF924u;
        goto label_2bf924;
    }
    ctx->pc = 0x2BF91Cu;
    {
        const bool branch_taken_0x2bf91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF91Cu;
        // 0x2bf920: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf91c) {
            ctx->pc = 0x2BF944u;
            goto label_2bf944;
        }
    }
    ctx->pc = 0x2BF924u;
label_2bf924:
    // 0x2bf924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf928:
    // 0x2bf928: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
label_2bf92c:
    if (ctx->pc == 0x2BF92Cu) {
        ctx->pc = 0x2BF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF928u;
        // 0x2bf92c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF930u;
        goto label_2bf930;
    }
    ctx->pc = 0x2BF928u;
    {
        const bool branch_taken_0x2bf928 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF928u;
        // 0x2bf92c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf928) {
            ctx->pc = 0x2BF944u;
            goto label_2bf944;
        }
    }
    ctx->pc = 0x2BF930u;
label_2bf930:
    // 0x2bf930: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2bf934:
    // 0x2bf934: 0xc0afc3e  jal         func_2BF0F8
label_2bf938:
    if (ctx->pc == 0x2BF938u) {
        ctx->pc = 0x2BF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF934u;
        // 0x2bf938: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF93Cu;
        goto label_2bf93c;
    }
    ctx->pc = 0x2BF934u;
    SET_GPR_U32(ctx, 31, 0x2BF93Cu);
    ctx->pc = 0x2BF938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF934u;
    // 0x2bf938: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF0F8u, 0x2BF934u, 0x2BF93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF93Cu;
label_2bf93c:
    // 0x2bf93c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bf93cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf940:
    // 0x2bf940: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2bf940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bf944:
    // 0x2bf944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf948:
    // 0x2bf948: 0x3e00008  jr          $ra
label_2bf94c:
    if (ctx->pc == 0x2BF94Cu) {
        ctx->pc = 0x2BF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF948u;
        // 0x2bf94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF950u;
        goto label_2bf950;
    }
    ctx->pc = 0x2BF948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF948u;
        // 0x2bf94c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF950u;
label_2bf950:
    // 0x2bf950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bf950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bf954:
    // 0x2bf954: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2bf954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2bf958:
    // 0x2bf958: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bf958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2bf95c:
    // 0x2bf95c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bf95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2bf960:
    // 0x2bf960: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bf960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bf964:
    // 0x2bf964: 0xc0a8bf6  jal         func_2A2FD8
label_2bf968:
    if (ctx->pc == 0x2BF968u) {
        ctx->pc = 0x2BF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF964u;
        // 0x2bf968: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF96Cu;
        goto label_2bf96c;
    }
    ctx->pc = 0x2BF964u;
    SET_GPR_U32(ctx, 31, 0x2BF96Cu);
    ctx->pc = 0x2BF968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF964u;
    // 0x2bf968: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2BF964u, 0x2BF96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF96Cu;
label_2bf96c:
    // 0x2bf96c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bf96cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf970:
    // 0x2bf970: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2bf974:
    if (ctx->pc == 0x2BF974u) {
        ctx->pc = 0x2BF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF970u;
        // 0x2bf974: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF978u;
        goto label_2bf978;
    }
    ctx->pc = 0x2BF970u;
    {
        const bool branch_taken_0x2bf970 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF970u;
        // 0x2bf974: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf970) {
            ctx->pc = 0x2BF980u;
            goto label_2bf980;
        }
    }
    ctx->pc = 0x2BF978u;
label_2bf978:
    // 0x2bf978: 0x10000019  b           . + 4 + (0x19 << 2)
label_2bf97c:
    if (ctx->pc == 0x2BF97Cu) {
        ctx->pc = 0x2BF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF978u;
        // 0x2bf97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF980u;
        goto label_2bf980;
    }
    ctx->pc = 0x2BF978u;
    {
        const bool branch_taken_0x2bf978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF978u;
        // 0x2bf97c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf978) {
            ctx->pc = 0x2BF9E0u;
            goto label_2bf9e0;
        }
    }
    ctx->pc = 0x2BF980u;
label_2bf980:
    // 0x2bf980: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bf980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bf984:
    // 0x2bf984: 0x2484f8c8  addiu       $a0, $a0, -0x738
    ctx->pc = 0x2bf984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
label_2bf988:
    // 0x2bf988: 0xc0a6170  jal         func_2985C0
label_2bf98c:
    if (ctx->pc == 0x2BF98Cu) {
        ctx->pc = 0x2BF98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF988u;
        // 0x2bf98c: 0x24a5f908  addiu       $a1, $a1, -0x6F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF990u;
        goto label_2bf990;
    }
    ctx->pc = 0x2BF988u;
    SET_GPR_U32(ctx, 31, 0x2BF990u);
    ctx->pc = 0x2BF98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF988u;
    // 0x2bf98c: 0x24a5f908  addiu       $a1, $a1, -0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2985C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2985C0u, 0x2BF988u, 0x2BF990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF990u;
label_2bf990:
    // 0x2bf990: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2bf990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf994:
    // 0x2bf994: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2bf994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_2bf998:
    // 0x2bf998: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bf998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf99c:
    // 0x2bf99c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2bf99cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2bf9a0:
    // 0x2bf9a0: 0xc0af004  jal         func_2BC010
label_2bf9a4:
    if (ctx->pc == 0x2BF9A4u) {
        ctx->pc = 0x2BF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9A0u;
        // 0x2bf9a4: 0x26500014  addiu       $s0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9A8u;
        goto label_2bf9a8;
    }
    ctx->pc = 0x2BF9A0u;
    SET_GPR_U32(ctx, 31, 0x2BF9A8u);
    ctx->pc = 0x2BF9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9A0u;
    // 0x2bf9a4: 0x26500014  addiu       $s0, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2BF9A0u, 0x2BF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9A8u;
label_2bf9a8:
    // 0x2bf9a8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2bf9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_2bf9ac:
    // 0x2bf9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf9b0:
    // 0x2bf9b0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2bf9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2bf9b4:
    // 0x2bf9b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf9b8:
    // 0x2bf9b8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2bf9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2bf9bc:
    // 0x2bf9bc: 0xc049cb6  jal         func_1272D8
label_2bf9c0:
    if (ctx->pc == 0x2BF9C0u) {
        ctx->pc = 0x2BF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9BCu;
        // 0x2bf9c0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9C4u;
        goto label_2bf9c4;
    }
    ctx->pc = 0x2BF9BCu;
    SET_GPR_U32(ctx, 31, 0x2BF9C4u);
    ctx->pc = 0x2BF9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9BCu;
    // 0x2bf9c0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BF9BCu, 0x2BF9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9C4u;
label_2bf9c4:
    // 0x2bf9c4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2bf9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2bf9c8:
    // 0x2bf9c8: 0xae51001c  sw          $s1, 0x1C($s2)
    ctx->pc = 0x2bf9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 17));
label_2bf9cc:
    // 0x2bf9cc: 0x8c647e38  lw          $a0, 0x7E38($v1)
    ctx->pc = 0x2bf9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32312)));
label_2bf9d0:
    // 0x2bf9d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bf9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bf9d4:
    // 0x2bf9d4: 0xc0a5d8e  jal         func_297638
label_2bf9d8:
    if (ctx->pc == 0x2BF9D8u) {
        ctx->pc = 0x2BF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9D4u;
        // 0x2bf9d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9DCu;
        goto label_2bf9dc;
    }
    ctx->pc = 0x2BF9D4u;
    SET_GPR_U32(ctx, 31, 0x2BF9DCu);
    ctx->pc = 0x2BF9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9D4u;
    // 0x2bf9d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297638u, 0x2BF9D4u, 0x2BF9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9DCu;
label_2bf9dc:
    // 0x2bf9dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2bf9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bf9e0:
    // 0x2bf9e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bf9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bf9e4:
    // 0x2bf9e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bf9e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf9e8:
    // 0x2bf9e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bf9e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf9ec:
    // 0x2bf9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf9f0:
    // 0x2bf9f0: 0x3e00008  jr          $ra
label_2bf9f4:
    if (ctx->pc == 0x2BF9F4u) {
        ctx->pc = 0x2BF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9F0u;
        // 0x2bf9f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9F8u;
        goto label_2bf9f8;
    }
    ctx->pc = 0x2BF9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9F0u;
        // 0x2bf9f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF9F8u;
label_2bf9f8:
    // 0x2bf9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bf9fc:
    // 0x2bf9fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bf9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bfa00:
    // 0x2bfa00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bfa04:
    // 0x2bfa04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bfa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bfa08:
    // 0x2bfa08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bfa08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa0c:
    // 0x2bfa0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bfa10:
    // 0x2bfa10: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2bfa14:
    if (ctx->pc == 0x2BFA14u) {
        ctx->pc = 0x2BFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA10u;
        // 0x2bfa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA18u;
        goto label_2bfa18;
    }
    ctx->pc = 0x2BFA10u;
    {
        const bool branch_taken_0x2bfa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA10u;
        // 0x2bfa14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa10) {
            ctx->pc = 0x2BFA24u;
            goto label_2bfa24;
        }
    }
    ctx->pc = 0x2BFA18u;
label_2bfa18:
    // 0x2bfa18: 0xc0b1608  jal         func_2C5820
label_2bfa1c:
    if (ctx->pc == 0x2BFA1Cu) {
        ctx->pc = 0x2BFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA18u;
        // 0x2bfa1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA20u;
        goto label_2bfa20;
    }
    ctx->pc = 0x2BFA18u;
    SET_GPR_U32(ctx, 31, 0x2BFA20u);
    ctx->pc = 0x2BFA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA18u;
    // 0x2bfa1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5820u, 0x2BFA18u, 0x2BFA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA20u;
label_2bfa20:
    // 0x2bfa20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa24:
    // 0x2bfa24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bfa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bfa28:
    // 0x2bfa28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfa28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bfa2c:
    // 0x2bfa2c: 0x80a8c0a  j           func_2A3028
label_2bfa30:
    if (ctx->pc == 0x2BFA30u) {
        ctx->pc = 0x2BFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA2Cu;
        // 0x2bfa30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA34u;
        goto label_2bfa34;
    }
    ctx->pc = 0x2BFA2Cu;
    ctx->pc = 0x2BFA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA2Cu;
    // 0x2bfa30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2BFA34u;
label_2bfa34:
    // 0x2bfa34: 0x0  nop
    ctx->pc = 0x2bfa34u;
    // NOP
label_2bfa38:
    // 0x2bfa38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bfa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2bfa3c:
    // 0x2bfa3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bfa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2bfa40:
    // 0x2bfa40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bfa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2bfa44:
    // 0x2bfa44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bfa44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa48:
    // 0x2bfa48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bfa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2bfa4c:
    // 0x2bfa4c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2bfa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2bfa50:
    // 0x2bfa50: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2bfa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2bfa54:
    // 0x2bfa54: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bfa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2bfa58:
    // 0x2bfa58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bfa5c:
    // 0x2bfa5c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bfa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2bfa60:
    // 0x2bfa60: 0x8e530008  lw          $s3, 0x8($s2)
    ctx->pc = 0x2bfa60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2bfa64:
    // 0x2bfa64: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2bfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bfa68:
    // 0x2bfa68: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_2bfa6c:
    if (ctx->pc == 0x2BFA6Cu) {
        ctx->pc = 0x2BFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA68u;
        // 0x2bfa6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA70u;
        goto label_2bfa70;
    }
    ctx->pc = 0x2BFA68u;
    {
        const bool branch_taken_0x2bfa68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA68u;
        // 0x2bfa6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa68) {
            ctx->pc = 0x2BFAB8u;
            goto label_2bfab8;
        }
    }
    ctx->pc = 0x2BFA70u;
label_2bfa70:
    // 0x2bfa70: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x2bfa70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
label_2bfa74:
    // 0x2bfa74: 0x26540014  addiu       $s4, $s2, 0x14
    ctx->pc = 0x2bfa74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_2bfa78:
    // 0x2bfa78: 0x3c16002c  lui         $s6, 0x2C
    ctx->pc = 0x2bfa78u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)44 << 16));
label_2bfa7c:
    // 0x2bfa7c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2bfa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2bfa80:
    // 0x2bfa80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2bfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2bfa84:
    // 0x2bfa84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bfa84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bfa88:
    // 0x2bfa88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bfa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bfa8c:
    // 0x2bfa8c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2bfa8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bfa90:
    // 0x2bfa90: 0xc0afe02  jal         func_2BF808
label_2bfa94:
    if (ctx->pc == 0x2BFA94u) {
        ctx->pc = 0x2BFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA90u;
        // 0x2bfa94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA98u;
        goto label_2bfa98;
    }
    ctx->pc = 0x2BFA90u;
    SET_GPR_U32(ctx, 31, 0x2BFA98u);
    ctx->pc = 0x2BFA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA90u;
    // 0x2bfa94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF808u, 0x2BFA90u, 0x2BFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA98u;
label_2bfa98:
    // 0x2bfa98: 0xc0afdec  jal         func_2BF7B0
label_2bfa9c:
    if (ctx->pc == 0x2BFA9Cu) {
        ctx->pc = 0x2BFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA98u;
        // 0x2bfa9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAA0u;
        goto label_2bfaa0;
    }
    ctx->pc = 0x2BFA98u;
    SET_GPR_U32(ctx, 31, 0x2BFAA0u);
    ctx->pc = 0x2BFA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA98u;
    // 0x2bfa9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF7B0u, 0x2BFA98u, 0x2BFAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAA0u;
label_2bfaa0:
    // 0x2bfaa0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2bfaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2bfaa4:
    // 0x2bfaa4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2bfaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2bfaa8:
    // 0x2bfaa8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_2bfaac:
    if (ctx->pc == 0x2BFAACu) {
        ctx->pc = 0x2BFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAA8u;
        // 0x2bfaac: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAB0u;
        goto label_2bfab0;
    }
    ctx->pc = 0x2BFAA8u;
    {
        const bool branch_taken_0x2bfaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfaa8) {
            ctx->pc = 0x2BFAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFAA8u;
            // 0x2bfaac: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bfa80;
        }
    }
    ctx->pc = 0x2BFAB0u;
label_2bfab0:
    // 0x2bfab0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2bfab4:
    if (ctx->pc == 0x2BFAB4u) {
        ctx->pc = 0x2BFAB8u;
        goto label_2bfab8;
    }
    ctx->pc = 0x2BFAB0u;
    {
        const bool branch_taken_0x2bfab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfab0) {
            ctx->pc = 0x2BFAC4u;
            goto label_2bfac4;
        }
    }
    ctx->pc = 0x2BFAB8u;
label_2bfab8:
    // 0x2bfab8: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x2bfab8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
label_2bfabc:
    // 0x2bfabc: 0x26540014  addiu       $s4, $s2, 0x14
    ctx->pc = 0x2bfabcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_2bfac0:
    // 0x2bfac0: 0x3c16002c  lui         $s6, 0x2C
    ctx->pc = 0x2bfac0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)44 << 16));
label_2bfac4:
    // 0x2bfac4: 0xc0af176  jal         func_2BC5D8
label_2bfac8:
    if (ctx->pc == 0x2BFAC8u) {
        ctx->pc = 0x2BFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAC4u;
        // 0x2bfac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFACCu;
        goto label_2bfacc;
    }
    ctx->pc = 0x2BFAC4u;
    SET_GPR_U32(ctx, 31, 0x2BFACCu);
    ctx->pc = 0x2BFAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAC4u;
    // 0x2bfac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2BFAC4u, 0x2BFACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFACCu;
label_2bfacc:
    // 0x2bfacc: 0x8ea47e38  lw          $a0, 0x7E38($s5)
    ctx->pc = 0x2bfaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32312)));
label_2bfad0:
    // 0x2bfad0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bfad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bfad4:
    // 0x2bfad4: 0xc0a5d58  jal         func_297560
label_2bfad8:
    if (ctx->pc == 0x2BFAD8u) {
        ctx->pc = 0x2BFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAD4u;
        // 0x2bfad8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFADCu;
        goto label_2bfadc;
    }
    ctx->pc = 0x2BFAD4u;
    SET_GPR_U32(ctx, 31, 0x2BFADCu);
    ctx->pc = 0x2BFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAD4u;
    // 0x2bfad8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297560u, 0x2BFAD4u, 0x2BFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFADCu;
label_2bfadc:
    // 0x2bfadc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2bfadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2bfae0:
    // 0x2bfae0: 0xc0a625c  jal         func_298970
label_2bfae4:
    if (ctx->pc == 0x2BFAE4u) {
        ctx->pc = 0x2BFAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAE0u;
        // 0x2bfae4: 0x26c5f9f8  addiu       $a1, $s6, -0x608 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAE8u;
        goto label_2bfae8;
    }
    ctx->pc = 0x2BFAE0u;
    SET_GPR_U32(ctx, 31, 0x2BFAE8u);
    ctx->pc = 0x2BFAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAE0u;
    // 0x2bfae4: 0x26c5f9f8  addiu       $a1, $s6, -0x608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298970u, 0x2BFAE0u, 0x2BFAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAE8u;
label_2bfae8:
    // 0x2bfae8: 0xc0a61ba  jal         func_2986E8
label_2bfaec:
    if (ctx->pc == 0x2BFAECu) {
        ctx->pc = 0x2BFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAE8u;
        // 0x2bfaec: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAF0u;
        goto label_2bfaf0;
    }
    ctx->pc = 0x2BFAE8u;
    SET_GPR_U32(ctx, 31, 0x2BFAF0u);
    ctx->pc = 0x2BFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAE8u;
    // 0x2bfaec: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2986E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2986E8u, 0x2BFAE8u, 0x2BFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAF0u;
label_2bfaf0:
    // 0x2bfaf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bfaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bfaf4:
    // 0x2bfaf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2bfaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2bfaf8:
    // 0x2bfaf8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2bfaf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2bfafc:
    // 0x2bfafc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2bfafcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bfb00:
    // 0x2bfb00: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bfb00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bfb04:
    // 0x2bfb04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bfb04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bfb08:
    // 0x2bfb08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bfb08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bfb0c:
    // 0x2bfb0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bfb0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bfb10:
    // 0x2bfb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bfb14:
    // 0x2bfb14: 0x80a8c0a  j           func_2A3028
label_2bfb18:
    if (ctx->pc == 0x2BFB18u) {
        ctx->pc = 0x2BFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB14u;
        // 0x2bfb18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB1Cu;
        goto label_2bfb1c;
    }
    ctx->pc = 0x2BFB14u;
    ctx->pc = 0x2BFB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB14u;
    // 0x2bfb18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x2BFB1Cu;
label_2bfb1c:
    // 0x2bfb1c: 0x0  nop
    ctx->pc = 0x2bfb1cu;
    // NOP
}
