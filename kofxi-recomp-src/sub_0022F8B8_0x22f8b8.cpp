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

// Function: sub_0022F8B8
// Address: 0x22f8b8 - 0x22f950
void sub_0022F8B8_0x22f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F8B8_0x22f8b8");
#endif

    switch (ctx->pc) {
        case 0x22f8b8u: goto label_22f8b8;
        case 0x22f8bcu: goto label_22f8bc;
        case 0x22f8c0u: goto label_22f8c0;
        case 0x22f8c4u: goto label_22f8c4;
        case 0x22f8c8u: goto label_22f8c8;
        case 0x22f8ccu: goto label_22f8cc;
        case 0x22f8d0u: goto label_22f8d0;
        case 0x22f8d4u: goto label_22f8d4;
        case 0x22f8d8u: goto label_22f8d8;
        case 0x22f8dcu: goto label_22f8dc;
        case 0x22f8e0u: goto label_22f8e0;
        case 0x22f8e4u: goto label_22f8e4;
        case 0x22f8e8u: goto label_22f8e8;
        case 0x22f8ecu: goto label_22f8ec;
        case 0x22f8f0u: goto label_22f8f0;
        case 0x22f8f4u: goto label_22f8f4;
        case 0x22f8f8u: goto label_22f8f8;
        case 0x22f8fcu: goto label_22f8fc;
        case 0x22f900u: goto label_22f900;
        case 0x22f904u: goto label_22f904;
        case 0x22f908u: goto label_22f908;
        case 0x22f90cu: goto label_22f90c;
        case 0x22f910u: goto label_22f910;
        case 0x22f914u: goto label_22f914;
        case 0x22f918u: goto label_22f918;
        case 0x22f91cu: goto label_22f91c;
        case 0x22f920u: goto label_22f920;
        case 0x22f924u: goto label_22f924;
        case 0x22f928u: goto label_22f928;
        case 0x22f92cu: goto label_22f92c;
        case 0x22f930u: goto label_22f930;
        case 0x22f934u: goto label_22f934;
        case 0x22f938u: goto label_22f938;
        case 0x22f93cu: goto label_22f93c;
        case 0x22f940u: goto label_22f940;
        case 0x22f944u: goto label_22f944;
        case 0x22f948u: goto label_22f948;
        case 0x22f94cu: goto label_22f94c;
        default: break;
    }

    ctx->pc = 0x22f8b8u;

label_22f8b8:
    // 0x22f8b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22f8bc:
    // 0x22f8bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22f8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22f8c0:
    // 0x22f8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22f8c4:
    // 0x22f8c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22f8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f8c8:
    // 0x22f8c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22f8cc:
    // 0x22f8cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22f8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22f8d0:
    // 0x22f8d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22f8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22f8d4:
    // 0x22f8d4: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x22f8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_22f8d8:
    // 0x22f8d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22f8dc:
    if (ctx->pc == 0x22F8DCu) {
        ctx->pc = 0x22F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8D8u;
        // 0x22f8dc: 0x8e32000c  lw          $s2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F8E0u;
        goto label_22f8e0;
    }
    ctx->pc = 0x22F8D8u;
    {
        const bool branch_taken_0x22f8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8D8u;
        // 0x22f8dc: 0x8e32000c  lw          $s2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8d8) {
            ctx->pc = 0x22F8E8u;
            goto label_22f8e8;
        }
    }
    ctx->pc = 0x22F8E0u;
label_22f8e0:
    // 0x22f8e0: 0x10000014  b           . + 4 + (0x14 << 2)
label_22f8e4:
    if (ctx->pc == 0x22F8E4u) {
        ctx->pc = 0x22F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8E0u;
        // 0x22f8e4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F8E8u;
        goto label_22f8e8;
    }
    ctx->pc = 0x22F8E0u;
    {
        const bool branch_taken_0x22f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8E0u;
        // 0x22f8e4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8e0) {
            ctx->pc = 0x22F934u;
            goto label_22f934;
        }
    }
    ctx->pc = 0x22F8E8u;
label_22f8e8:
    // 0x22f8e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_22f8ec:
    if (ctx->pc == 0x22F8ECu) {
        ctx->pc = 0x22F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8E8u;
        // 0x22f8ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F8F0u;
        goto label_22f8f0;
    }
    ctx->pc = 0x22F8E8u;
    {
        const bool branch_taken_0x22f8e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8E8u;
        // 0x22f8ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8e8) {
            ctx->pc = 0x22F8F8u;
            goto label_22f8f8;
        }
    }
    ctx->pc = 0x22F8F0u;
label_22f8f0:
    // 0x22f8f0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_22f8f4:
    if (ctx->pc == 0x22F8F4u) {
        ctx->pc = 0x22F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8F0u;
        // 0x22f8f4: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F8F8u;
        goto label_22f8f8;
    }
    ctx->pc = 0x22F8F0u;
    {
        const bool branch_taken_0x22f8f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8F0u;
        // 0x22f8f4: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8f0) {
            ctx->pc = 0x22F904u;
            goto label_22f904;
        }
    }
    ctx->pc = 0x22F8F8u;
label_22f8f8:
    // 0x22f8f8: 0xc08be54  jal         func_22F950
label_22f8fc:
    if (ctx->pc == 0x22F8FCu) {
        ctx->pc = 0x22F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8F8u;
        // 0x22f8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F900u;
        goto label_22f900;
    }
    ctx->pc = 0x22F8F8u;
    SET_GPR_U32(ctx, 31, 0x22F900u);
    ctx->pc = 0x22F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F8F8u;
    // 0x22f8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F950u, 0x22F8F8u, 0x22F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F900u;
label_22f900:
    // 0x22f900: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x22f900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_22f904:
    // 0x22f904: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22f908:
    // 0x22f908: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22f90c:
    if (ctx->pc == 0x22F90Cu) {
        ctx->pc = 0x22F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F908u;
        // 0x22f90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F910u;
        goto label_22f910;
    }
    ctx->pc = 0x22F908u;
    {
        const bool branch_taken_0x22f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F908u;
        // 0x22f90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f908) {
            ctx->pc = 0x22F930u;
            goto label_22f930;
        }
    }
    ctx->pc = 0x22F910u;
label_22f910:
    // 0x22f910: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x22f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_22f914:
    // 0x22f914: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22f914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22f918:
    // 0x22f918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f91c:
    // 0x22f91c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f920:
    // 0x22f920: 0x40f809  jalr        $v0
label_22f924:
    if (ctx->pc == 0x22F924u) {
        ctx->pc = 0x22F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F920u;
        // 0x22f924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F928u;
        goto label_22f928;
    }
    ctx->pc = 0x22F920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22F928u);
        ctx->pc = 0x22F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F920u;
        // 0x22f924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F920u, 0x22F928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F928u;
label_22f928:
    // 0x22f928: 0x10000003  b           . + 4 + (0x3 << 2)
label_22f92c:
    if (ctx->pc == 0x22F92Cu) {
        ctx->pc = 0x22F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F928u;
        // 0x22f92c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F930u;
        goto label_22f930;
    }
    ctx->pc = 0x22F928u;
    {
        const bool branch_taken_0x22f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F928u;
        // 0x22f92c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f928) {
            ctx->pc = 0x22F938u;
            goto label_22f938;
        }
    }
    ctx->pc = 0x22F930u;
label_22f930:
    // 0x22f930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22f930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f934:
    // 0x22f934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22f934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22f938:
    // 0x22f938: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22f938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22f93c:
    // 0x22f93c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22f93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22f940:
    // 0x22f940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f944:
    // 0x22f944: 0x3e00008  jr          $ra
label_22f948:
    if (ctx->pc == 0x22F948u) {
        ctx->pc = 0x22F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F944u;
        // 0x22f948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F94Cu;
        goto label_22f94c;
    }
    ctx->pc = 0x22F944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F944u;
        // 0x22f948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F94Cu;
label_22f94c:
    // 0x22f94c: 0x0  nop
    ctx->pc = 0x22f94cu;
    // NOP
}
