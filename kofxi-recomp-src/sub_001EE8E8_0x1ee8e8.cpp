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

// Function: sub_001EE8E8
// Address: 0x1ee8e8 - 0x1eea10
void sub_001EE8E8_0x1ee8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE8E8_0x1ee8e8");
#endif

    switch (ctx->pc) {
        case 0x1ee90cu: goto label_1ee90c;
        case 0x1ee944u: goto label_1ee944;
        case 0x1ee9a0u: goto label_1ee9a0;
        case 0x1ee9bcu: goto label_1ee9bc;
        case 0x1ee9dcu: goto label_1ee9dc;
        case 0x1ee9f0u: goto label_1ee9f0;
        default: break;
    }

    ctx->pc = 0x1ee8e8u;

    // 0x1ee8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee8ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ee8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ee8f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ee8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee8f4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1ee8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1ee8f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ee8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ee8fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ee8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ee900: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ee900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ee904: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1EE904u;
    SET_GPR_U32(ctx, 31, 0x1EE90Cu);
    ctx->pc = 0x1EE908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE904u;
    // 0x1ee908: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1EE904u, 0x1EE90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE90Cu;
label_1ee90c:
    // 0x1ee90c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee910: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ee910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee914: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee918: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE918u;
    {
        const bool branch_taken_0x1ee918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE918u;
        // 0x1ee91c: 0x2a040002  slti        $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee918) {
            ctx->pc = 0x1EE954u;
            goto label_1ee954;
        }
    }
    ctx->pc = 0x1EE920u;
    // 0x1ee920: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1EE920u;
    {
        const bool branch_taken_0x1ee920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee920) {
            ctx->pc = 0x1EE924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE920u;
            // 0x1ee924: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE958u;
            goto label_1ee958;
        }
    }
    ctx->pc = 0x1EE928u;
    // 0x1ee928: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ee928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee92c: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE92Cu;
    {
        const bool branch_taken_0x1ee92c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ee92c) {
            ctx->pc = 0x1EE930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE92Cu;
            // 0x1ee930: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE954u;
            goto label_1ee954;
        }
    }
    ctx->pc = 0x1EE934u;
    // 0x1ee934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ee934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ee938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee93c: 0xc07bd0c  jal         func_1EF430
    ctx->pc = 0x1EE93Cu;
    SET_GPR_U32(ctx, 31, 0x1EE944u);
    ctx->pc = 0x1EE940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE93Cu;
    // 0x1ee940: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF430u, 0x1EE93Cu, 0x1EE944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE944u;
label_1ee944:
    // 0x1ee944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ee944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee948: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ee948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ee94c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1ee94cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ee950: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x1ee950u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_1ee954:
    // 0x1ee954: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ee954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee958:
    // 0x1ee958: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ee958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ee95c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ee95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee960: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ee960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee964: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE964u;
        // 0x1ee968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE96Cu;
    // 0x1ee96c: 0x0  nop
    ctx->pc = 0x1ee96cu;
    // NOP
    // 0x1ee970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ee970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ee974: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1ee974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee978: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ee978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ee97c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ee97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ee980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee984: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ee984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ee988: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ee988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee98c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ee98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ee990: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1ee990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee994: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ee994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ee998: 0xc07b292  jal         func_1ECA48
    ctx->pc = 0x1EE998u;
    SET_GPR_U32(ctx, 31, 0x1EE9A0u);
    ctx->pc = 0x1EE99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE998u;
    // 0x1ee99c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECA48u, 0x1EE998u, 0x1EE9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9A0u;
label_1ee9a0:
    // 0x1ee9a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ee9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE9ACu;
    {
        const bool branch_taken_0x1ee9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9ACu;
        // 0x1ee9b0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9ac) {
            ctx->pc = 0x1EE9E8u;
            goto label_1ee9e8;
        }
    }
    ctx->pc = 0x1EE9B4u;
    // 0x1ee9b4: 0xc07be92  jal         func_1EFA48
    ctx->pc = 0x1EE9B4u;
    SET_GPR_U32(ctx, 31, 0x1EE9BCu);
    ctx->pc = 0x1EFA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA48u, 0x1EE9B4u, 0x1EE9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9BCu;
label_1ee9bc:
    // 0x1ee9bc: 0x2646ffee  addiu       $a2, $s2, -0x12
    ctx->pc = 0x1ee9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967278));
    // 0x1ee9c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ee9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ee9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee9cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE9CCu;
    {
        const bool branch_taken_0x1ee9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9CCu;
        // 0x1ee9d0: 0x26670012  addiu       $a3, $s3, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9cc) {
            ctx->pc = 0x1EE9DCu;
            goto label_1ee9dc;
        }
    }
    ctx->pc = 0x1EE9D4u;
    // 0x1ee9d4: 0xc07ba84  jal         func_1EEA10
    ctx->pc = 0x1EE9D4u;
    SET_GPR_U32(ctx, 31, 0x1EE9DCu);
    ctx->pc = 0x1EEA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEA10u, 0x1EE9D4u, 0x1EE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9DCu;
label_1ee9dc:
    // 0x1ee9dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE9DCu;
    {
        const bool branch_taken_0x1ee9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE9DCu;
        // 0x1ee9e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee9dc) {
            ctx->pc = 0x1EE9F0u;
            goto label_1ee9f0;
        }
    }
    ctx->pc = 0x1EE9E4u;
    // 0x1ee9e4: 0x0  nop
    ctx->pc = 0x1ee9e4u;
    // NOP
label_1ee9e8:
    // 0x1ee9e8: 0xc07ba84  jal         func_1EEA10
    ctx->pc = 0x1EE9E8u;
    SET_GPR_U32(ctx, 31, 0x1EE9F0u);
    ctx->pc = 0x1EE9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE9E8u;
    // 0x1ee9ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEA10u, 0x1EE9E8u, 0x1EE9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9F0u;
label_1ee9f0:
    // 0x1ee9f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ee9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee9f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ee9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ee9f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ee9f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee9fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ee9fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eea00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eea04: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEA04u;
        // 0x1eea08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEA0Cu;
    // 0x1eea0c: 0x0  nop
    ctx->pc = 0x1eea0cu;
    // NOP
    if (ctx->pc == 0x1eea0cu) { ctx->pc = 0x1eea10u; }
}
