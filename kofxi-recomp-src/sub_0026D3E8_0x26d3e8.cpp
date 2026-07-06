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

// Function: sub_0026D3E8
// Address: 0x26d3e8 - 0x26d4a8
void sub_0026D3E8_0x26d3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D3E8_0x26d3e8");
#endif

    switch (ctx->pc) {
        case 0x26d444u: goto label_26d444;
        case 0x26d454u: goto label_26d454;
        case 0x26d464u: goto label_26d464;
        case 0x26d474u: goto label_26d474;
        case 0x26d490u: goto label_26d490;
        default: break;
    }

    ctx->pc = 0x26d3e8u;

    // 0x26d3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26d3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26d3ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26d3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d3f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26d3f8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x26d3f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26d3fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26d400: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x26d400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x26d404: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x26d404u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x26d408: 0x2c83003b  sltiu       $v1, $a0, 0x3B
    ctx->pc = 0x26d408u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x26d40c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x26D40Cu;
    {
        const bool branch_taken_0x26d40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D40Cu;
        // 0x26d410: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d40c) {
            ctx->pc = 0x26D47Cu;
            goto label_26d47c;
        }
    }
    ctx->pc = 0x26D414u;
    // 0x26d414: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26d414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26d418: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26d418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26d41c: 0x24429280  addiu       $v0, $v0, -0x6D80
    ctx->pc = 0x26d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x26d420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d424: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26d424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d428: 0x800008  jr          $a0
    ctx->pc = 0x26D428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D430u: goto label_26d430;
            case 0x26D43Cu: goto label_26d43c;
            case 0x26D44Cu: goto label_26d44c;
            case 0x26D45Cu: goto label_26d45c;
            case 0x26D46Cu: goto label_26d46c;
            case 0x26D47Cu: goto label_26d47c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D428u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26D430u;
label_26d430:
    // 0x26d430: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x26d430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x26d434: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26D434u;
    {
        const bool branch_taken_0x26d434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D434u;
        // 0x26d438: 0xa0a20400  sb          $v0, 0x400($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1024), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d434) {
            ctx->pc = 0x26D490u;
            goto label_26d490;
        }
    }
    ctx->pc = 0x26D43Cu;
label_26d43c:
    // 0x26d43c: 0xc09b52a  jal         func_26D4A8
    ctx->pc = 0x26D43Cu;
    SET_GPR_U32(ctx, 31, 0x26D444u);
    ctx->pc = 0x26D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D43Cu;
    // 0x26d440: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D4A8u, 0x26D43Cu, 0x26D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D444u;
label_26d444:
    // 0x26d444: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26D444u;
    {
        const bool branch_taken_0x26d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D444u;
        // 0x26d448: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d444) {
            ctx->pc = 0x26D490u;
            goto label_26d490;
        }
    }
    ctx->pc = 0x26D44Cu;
label_26d44c:
    // 0x26d44c: 0xc09b57e  jal         func_26D5F8
    ctx->pc = 0x26D44Cu;
    SET_GPR_U32(ctx, 31, 0x26D454u);
    ctx->pc = 0x26D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D44Cu;
    // 0x26d450: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D5F8u, 0x26D44Cu, 0x26D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D454u;
label_26d454:
    // 0x26d454: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26D454u;
    {
        const bool branch_taken_0x26d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D454u;
        // 0x26d458: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d454) {
            ctx->pc = 0x26D490u;
            goto label_26d490;
        }
    }
    ctx->pc = 0x26D45Cu;
label_26d45c:
    // 0x26d45c: 0xc09b5c4  jal         func_26D710
    ctx->pc = 0x26D45Cu;
    SET_GPR_U32(ctx, 31, 0x26D464u);
    ctx->pc = 0x26D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D45Cu;
    // 0x26d460: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D710u, 0x26D45Cu, 0x26D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D464u;
label_26d464:
    // 0x26d464: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26D464u;
    {
        const bool branch_taken_0x26d464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D464u;
        // 0x26d468: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d464) {
            ctx->pc = 0x26D490u;
            goto label_26d490;
        }
    }
    ctx->pc = 0x26D46Cu;
label_26d46c:
    // 0x26d46c: 0xc09b628  jal         func_26D8A0
    ctx->pc = 0x26D46Cu;
    SET_GPR_U32(ctx, 31, 0x26D474u);
    ctx->pc = 0x26D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D46Cu;
    // 0x26d470: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D8A0u, 0x26D46Cu, 0x26D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D474u;
label_26d474:
    // 0x26d474: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26D474u;
    {
        const bool branch_taken_0x26d474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D474u;
        // 0x26d478: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d474) {
            ctx->pc = 0x26D490u;
            goto label_26d490;
        }
    }
    ctx->pc = 0x26D47Cu;
label_26d47c:
    // 0x26d47c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26d480: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x26d480u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26d484: 0x24a59260  addiu       $a1, $a1, -0x6DA0
    ctx->pc = 0x26d484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939232));
    // 0x26d488: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26D488u;
    SET_GPR_U32(ctx, 31, 0x26D490u);
    ctx->pc = 0x26D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D488u;
    // 0x26d48c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26D488u, 0x26D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D490u;
label_26d490:
    // 0x26d490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26d490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26d494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d49c: 0x3e00008  jr          $ra
    ctx->pc = 0x26D49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D49Cu;
        // 0x26d4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D4A4u;
    // 0x26d4a4: 0x0  nop
    ctx->pc = 0x26d4a4u;
    // NOP
    if (ctx->pc == 0x26d4a4u) { ctx->pc = 0x26d4a8u; }
}
