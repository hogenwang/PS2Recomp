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

// Function: sub_001D8510
// Address: 0x1d8510 - 0x1d85a0
void sub_001D8510_0x1d8510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8510_0x1d8510");
#endif

    switch (ctx->pc) {
        case 0x1d852cu: goto label_1d852c;
        default: break;
    }

    ctx->pc = 0x1d8510u;

    // 0x1d8510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d851c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8524: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D8524u;
    SET_GPR_U32(ctx, 31, 0x1D852Cu);
    ctx->pc = 0x1D8528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8524u;
    // 0x1d8528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E8u, 0x1D8524u, 0x1D852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D852Cu;
label_1d852c:
    // 0x1d852c: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1d852cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1d8530: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8530u;
    {
        const bool branch_taken_0x1d8530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8530u;
        // 0x1d8534: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8530) {
            ctx->pc = 0x1D8550u;
            goto label_1d8550;
        }
    }
    ctx->pc = 0x1D8538u;
    // 0x1d8538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d853c: 0x34a50203  ori         $a1, $a1, 0x203
    ctx->pc = 0x1d853cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
    // 0x1d8540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8548: 0x80761c6  j           func_1D8718
    ctx->pc = 0x1D8548u;
    ctx->pc = 0x1D854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8548u;
    // 0x1d854c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8718u, 0x1D8548u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D8550u;
label_1d8550:
    // 0x1d8550: 0xde0300a8  ld          $v1, 0xA8($s0)
    ctx->pc = 0x1d8550u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1d8554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8558: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1d8558u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x1d855c: 0xde0400b0  ld          $a0, 0xB0($s0)
    ctx->pc = 0x1d855cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1d8560: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1d8560u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1d8564: 0xde0300b8  ld          $v1, 0xB8($s0)
    ctx->pc = 0x1d8564u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1d8568: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x1d8568u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x1d856c: 0xde0400c0  ld          $a0, 0xC0($s0)
    ctx->pc = 0x1d856cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1d8570: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x1d8570u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x1d8574: 0xde0300c8  ld          $v1, 0xC8($s0)
    ctx->pc = 0x1d8574u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1d8578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d857c: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x1d857cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x1d8580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8584: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8584u;
        // 0x1d8588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D858Cu;
    // 0x1d858c: 0x0  nop
    ctx->pc = 0x1d858cu;
    // NOP
    // 0x1d8590: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1d8590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1d8594: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8594u;
        // 0x1d8598: 0x2442c1c8  addiu       $v0, $v0, -0x3E38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D859Cu;
    // 0x1d859c: 0x0  nop
    ctx->pc = 0x1d859cu;
    // NOP
    if (ctx->pc == 0x1d859cu) { ctx->pc = 0x1d85a0u; }
}
