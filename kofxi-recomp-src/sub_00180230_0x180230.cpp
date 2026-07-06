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

// Function: sub_00180230
// Address: 0x180230 - 0x1802a0
void sub_00180230_0x180230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180230_0x180230");
#endif

    ctx->pc = 0x180230u;

    // 0x180230: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x180230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x180234: 0x2443ffe4  addiu       $v1, $v0, -0x1C
    ctx->pc = 0x180234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x180238: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x180238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18023c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180240: 0x10c30014  beq         $a2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x180240u;
    {
        const bool branch_taken_0x180240 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x180244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180240u;
        // 0x180244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180240) {
            ctx->pc = 0x180294u;
            goto label_180294;
        }
    }
    ctx->pc = 0x180248u;
    // 0x180248: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x180248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18024c: 0x50c4000b  beql        $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x18024Cu;
    {
        const bool branch_taken_0x18024c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x18024c) {
            ctx->pc = 0x180250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18024Cu;
            // 0x180250: 0x90a30280  lbu         $v1, 0x280($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18027Cu;
            goto label_18027c;
        }
    }
    ctx->pc = 0x180254u;
    // 0x180254: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x180254u;
    {
        const bool branch_taken_0x180254 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x180254) {
            ctx->pc = 0x180258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180254u;
            // 0x180258: 0x90a30280  lbu         $v1, 0x280($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180264u;
            goto label_180264;
        }
    }
    ctx->pc = 0x18025Cu;
    // 0x18025c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18025Cu;
    {
        const bool branch_taken_0x18025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18025c) {
            ctx->pc = 0x180298u;
            goto label_180298;
        }
    }
    ctx->pc = 0x180264u;
label_180264:
    // 0x180264: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x180264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x180268: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x180268u;
    {
        const bool branch_taken_0x180268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180268) {
            ctx->pc = 0x180298u;
            goto label_180298;
        }
    }
    ctx->pc = 0x180270u;
    // 0x180270: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x180270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x180274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x180274u;
    {
        const bool branch_taken_0x180274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180274u;
        // 0x180278: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180274) {
            ctx->pc = 0x180298u;
            goto label_180298;
        }
    }
    ctx->pc = 0x18027Cu;
label_18027c:
    // 0x18027c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x18027cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x180280: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x180280u;
    {
        const bool branch_taken_0x180280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180280) {
            ctx->pc = 0x180298u;
            goto label_180298;
        }
    }
    ctx->pc = 0x180288u;
    // 0x180288: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x180288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x18028c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18028Cu;
    {
        const bool branch_taken_0x18028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18028Cu;
        // 0x180290: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18028c) {
            ctx->pc = 0x180298u;
            goto label_180298;
        }
    }
    ctx->pc = 0x180294u;
label_180294:
    // 0x180294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180298:
    // 0x180298: 0x3e00008  jr          $ra
    ctx->pc = 0x180298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1802A0u;
}
