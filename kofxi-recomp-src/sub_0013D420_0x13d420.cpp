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

// Function: sub_0013D420
// Address: 0x13d420 - 0x13d4c0
void sub_0013D420_0x13d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D420_0x13d420");
#endif

    switch (ctx->pc) {
        case 0x13d43cu: goto label_13d43c;
        case 0x13d474u: goto label_13d474;
        case 0x13d494u: goto label_13d494;
        case 0x13d4acu: goto label_13d4ac;
        default: break;
    }

    ctx->pc = 0x13d420u;

    // 0x13d420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13d428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d42c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d430: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d434: 0xc04f8a0  jal         func_13E280
    ctx->pc = 0x13D434u;
    SET_GPR_U32(ctx, 31, 0x13D43Cu);
    ctx->pc = 0x13D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D434u;
    // 0x13d438: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E280u, 0x13D434u, 0x13D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D43Cu;
label_13d43c:
    // 0x13d43c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d440: 0x50440016  beql        $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13D440u;
    {
        const bool branch_taken_0x13d440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13d440) {
            ctx->pc = 0x13D444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D440u;
            // 0x13d444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D49Cu;
            goto label_13d49c;
        }
    }
    ctx->pc = 0x13D448u;
    // 0x13d448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d44c: 0x5043000e  beql        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x13D44Cu;
    {
        const bool branch_taken_0x13d44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13d44c) {
            ctx->pc = 0x13D450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D44Cu;
            // 0x13d450: 0xae030214  sw          $v1, 0x214($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D488u;
            goto label_13d488;
        }
    }
    ctx->pc = 0x13D454u;
    // 0x13d454: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D454u;
    {
        const bool branch_taken_0x13d454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d454) {
            ctx->pc = 0x13D458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D454u;
            // 0x13d458: 0x8e02023c  lw          $v0, 0x23C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D464u;
            goto label_13d464;
        }
    }
    ctx->pc = 0x13D45Cu;
    // 0x13d45c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13D45Cu;
    {
        const bool branch_taken_0x13d45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D45Cu;
        // 0x13d460: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d45c) {
            ctx->pc = 0x13D4B0u;
            goto label_13d4b0;
        }
    }
    ctx->pc = 0x13D464u;
label_13d464:
    // 0x13d464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d468: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x13d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x13d46c: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x13D46Cu;
    SET_GPR_U32(ctx, 31, 0x13D474u);
    ctx->pc = 0x13D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D46Cu;
    // 0x13d470: 0xae02023c  sw          $v0, 0x23C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x13D46Cu, 0x13D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D474u;
label_13d474:
    // 0x13d474: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x13d474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x13d478: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x13d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13d47c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d480: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13D480u;
    {
        const bool branch_taken_0x13d480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D480u;
        // 0x13d484: 0xae030238  sw          $v1, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d480) {
            ctx->pc = 0x13D4ACu;
            goto label_13d4ac;
        }
    }
    ctx->pc = 0x13D488u;
label_13d488:
    // 0x13d488: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d48c: 0xc0501d0  jal         func_140740
    ctx->pc = 0x13D48Cu;
    SET_GPR_U32(ctx, 31, 0x13D494u);
    ctx->pc = 0x13D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D48Cu;
    // 0x13d490: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x13D48Cu, 0x13D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D494u;
label_13d494:
    // 0x13d494: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D494u;
    {
        const bool branch_taken_0x13d494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d494) {
            ctx->pc = 0x13D4ACu;
            goto label_13d4ac;
        }
    }
    ctx->pc = 0x13D49Cu;
label_13d49c:
    // 0x13d49c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13d4a0: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x13d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x13d4a4: 0xc0501d0  jal         func_140740
    ctx->pc = 0x13D4A4u;
    SET_GPR_U32(ctx, 31, 0x13D4ACu);
    ctx->pc = 0x13D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4A4u;
    // 0x13d4a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x13D4A4u, 0x13D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4ACu;
label_13d4ac:
    // 0x13d4ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13d4b0:
    // 0x13d4b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4B4u;
        // 0x13d4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D4BCu;
    // 0x13d4bc: 0x0  nop
    ctx->pc = 0x13d4bcu;
    // NOP
    if (ctx->pc == 0x13d4bcu) { ctx->pc = 0x13d4c0u; }
}
