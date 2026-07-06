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

// Function: sub_002AD5D0
// Address: 0x2ad5d0 - 0x2ad6a0
void sub_002AD5D0_0x2ad5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD5D0_0x2ad5d0");
#endif

    switch (ctx->pc) {
        case 0x2ad5fcu: goto label_2ad5fc;
        case 0x2ad640u: goto label_2ad640;
        case 0x2ad684u: goto label_2ad684;
        default: break;
    }

    ctx->pc = 0x2ad5d0u;

    // 0x2ad5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ad5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ad5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ad5d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ad5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ad5dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad5e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ad5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ad5e4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ad5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad5e8: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2ad5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2ad5ec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD5ECu;
    {
        const bool branch_taken_0x2ad5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad5ec) {
            ctx->pc = 0x2AD5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD5ECu;
            // 0x2ad5f0: 0x8c6200ac  lw          $v0, 0xAC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD60Cu;
            goto label_2ad60c;
        }
    }
    ctx->pc = 0x2AD5F4u;
    // 0x2ad5f4: 0xc0ab5a8  jal         func_2AD6A0
    ctx->pc = 0x2AD5F4u;
    SET_GPR_U32(ctx, 31, 0x2AD5FCu);
    ctx->pc = 0x2AD5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD5F4u;
    // 0x2ad5f8: 0x8e050114  lw          $a1, 0x114($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD6A0u, 0x2AD5F4u, 0x2AD5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD5FCu;
label_2ad5fc:
    // 0x2ad5fc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AD5FCu;
    {
        const bool branch_taken_0x2ad5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD5FCu;
        // 0x2ad600: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad5fc) {
            ctx->pc = 0x2AD670u;
            goto label_2ad670;
        }
    }
    ctx->pc = 0x2AD604u;
    // 0x2ad604: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ad604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad608: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2ad608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2ad60c:
    // 0x2ad60c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AD60Cu;
    {
        const bool branch_taken_0x2ad60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad60c) {
            ctx->pc = 0x2AD610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD60Cu;
            // 0x2ad610: 0x8c630094  lw          $v1, 0x94($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD664u;
            goto label_2ad664;
        }
    }
    ctx->pc = 0x2AD614u;
    // 0x2ad614: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2ad614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2ad618: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2ad618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ad61c: 0x2c424000  sltiu       $v0, $v0, 0x4000
    ctx->pc = 0x2ad61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x2ad620: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD620u;
    {
        const bool branch_taken_0x2ad620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD620u;
        // 0x2ad624: 0x24910039  addiu       $s1, $a0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad620) {
            ctx->pc = 0x2AD638u;
            goto label_2ad638;
        }
    }
    ctx->pc = 0x2AD628u;
    // 0x2ad628: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2ad628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ad62c: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x2ad62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2ad630: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x2ad630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x2ad634: 0x24910039  addiu       $s1, $a0, 0x39
    ctx->pc = 0x2ad634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 57));
label_2ad638:
    // 0x2ad638: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2AD638u;
    SET_GPR_U32(ctx, 31, 0x2AD640u);
    ctx->pc = 0x2AD63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD638u;
    // 0x2ad63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2AD638u, 0x2AD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD640u;
label_2ad640:
    // 0x2ad640: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ad640u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad644: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD644u;
    {
        const bool branch_taken_0x2ad644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD644u;
        // 0x2ad648: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad644) {
            ctx->pc = 0x2AD670u;
            goto label_2ad670;
        }
    }
    ctx->pc = 0x2AD64Cu;
    // 0x2ad64c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ad64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad650: 0xac4300ac  sw          $v1, 0xAC($v0)
    ctx->pc = 0x2ad650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 3));
    // 0x2ad654: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ad654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad658: 0xac7100b0  sw          $s1, 0xB0($v1)
    ctx->pc = 0x2ad658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 17));
    // 0x2ad65c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ad65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad660: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2ad660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2ad664:
    // 0x2ad664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD668u;
    {
        const bool branch_taken_0x2ad668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD668u;
        // 0x2ad66c: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad668) {
            ctx->pc = 0x2AD688u;
            goto label_2ad688;
        }
    }
    ctx->pc = 0x2AD670u;
label_2ad670:
    // 0x2ad670: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x2ad670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x2ad674: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2ad674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2ad678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ad678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad67c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AD67Cu;
    SET_GPR_U32(ctx, 31, 0x2AD684u);
    ctx->pc = 0x2AD680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD67Cu;
    // 0x2ad680: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AD67Cu, 0x2AD684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD684u;
label_2ad684:
    // 0x2ad684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ad684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad688:
    // 0x2ad688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ad688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad68c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ad68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ad690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad694: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD694u;
        // 0x2ad698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD69Cu;
    // 0x2ad69c: 0x0  nop
    ctx->pc = 0x2ad69cu;
    // NOP
}
