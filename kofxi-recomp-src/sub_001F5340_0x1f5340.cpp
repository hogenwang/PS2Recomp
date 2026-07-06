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

// Function: sub_001F5340
// Address: 0x1f5340 - 0x1f53c8
void sub_001F5340_0x1f5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5340_0x1f5340");
#endif

    switch (ctx->pc) {
        case 0x1f5358u: goto label_1f5358;
        case 0x1f5378u: goto label_1f5378;
        case 0x1f53b4u: goto label_1f53b4;
        default: break;
    }

    ctx->pc = 0x1f5340u;

    // 0x1f5340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5344: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f5344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f5348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f534c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f5350: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1F5350u;
    SET_GPR_U32(ctx, 31, 0x1F5358u);
    ctx->pc = 0x1F5354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5350u;
    // 0x1f5354: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9C0u, 0x1F5350u, 0x1F5358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5358u;
label_1f5358:
    // 0x1f5358: 0x8e022018  lw          $v0, 0x2018($s0)
    ctx->pc = 0x1f5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
    // 0x1f535c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f535cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5360: 0x8c440178  lw          $a0, 0x178($v0)
    ctx->pc = 0x1f5360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1f5364: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F5364u;
    {
        const bool branch_taken_0x1f5364 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1F5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5364u;
        // 0x1f5368: 0x24500180  addiu       $s0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5364) {
            ctx->pc = 0x1F53A4u;
            goto label_1f53a4;
        }
    }
    ctx->pc = 0x1F536Cu;
    // 0x1f536c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F536Cu;
    {
        const bool branch_taken_0x1f536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F536Cu;
        // 0x1f5370: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f536c) {
            ctx->pc = 0x1F5388u;
            goto label_1f5388;
        }
    }
    ctx->pc = 0x1F5374u;
    // 0x1f5374: 0x0  nop
    ctx->pc = 0x1f5374u;
    // NOP
label_1f5378:
    // 0x1f5378: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1f5378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f537c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F537Cu;
    {
        const bool branch_taken_0x1f537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F537Cu;
        // 0x1f5380: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f537c) {
            ctx->pc = 0x1F53A4u;
            goto label_1f53a4;
        }
    }
    ctx->pc = 0x1F5384u;
    // 0x1f5384: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1f5384u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_1f5388:
    // 0x1f5388: 0x0  nop
    ctx->pc = 0x1f5388u;
    // NOP
    // 0x1f538c: 0x0  nop
    ctx->pc = 0x1f538cu;
    // NOP
    // 0x1f5390: 0x0  nop
    ctx->pc = 0x1f5390u;
    // NOP
    // 0x1f5394: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F5394u;
    {
        const bool branch_taken_0x1f5394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5394) {
            ctx->pc = 0x1F5398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5394u;
            // 0x1f5398: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5378;
        }
    }
    ctx->pc = 0x1F539Cu;
    // 0x1f539c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f53a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f53a4:
    // 0x1f53a4: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x1f53a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x1f53a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f53a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53ac: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1F53ACu;
    SET_GPR_U32(ctx, 31, 0x1F53B4u);
    ctx->pc = 0x1F53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F53ACu;
    // 0x1f53b0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9D8u, 0x1F53ACu, 0x1F53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F53B4u;
label_1f53b4:
    // 0x1f53b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f53b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f53b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f53b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f53bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f53c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F53C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53C0u;
        // 0x1f53c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F53C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F53C8u;
}
