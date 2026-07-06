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

// Function: sub_002C4600
// Address: 0x2c4600 - 0x2c4690
void sub_002C4600_0x2c4600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4600_0x2c4600");
#endif

    switch (ctx->pc) {
        case 0x2c4614u: goto label_2c4614;
        case 0x2c463cu: goto label_2c463c;
        case 0x2c464cu: goto label_2c464c;
        case 0x2c4658u: goto label_2c4658;
        default: break;
    }

    ctx->pc = 0x2c4600u;

    // 0x2c4600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c4604: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c4604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c4608: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c4608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c460c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C460Cu;
    SET_GPR_U32(ctx, 31, 0x2C4614u);
    ctx->pc = 0x2C4610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C460Cu;
    // 0x2c4610: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2C460Cu, 0x2C4614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4614u;
label_2c4614:
    // 0x2c4614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4618: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C4618u;
    {
        const bool branch_taken_0x2c4618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4618u;
        // 0x2c461c: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4618) {
            ctx->pc = 0x2C4644u;
            goto label_2c4644;
        }
    }
    ctx->pc = 0x2C4620u;
    // 0x2c4620: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c4620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c4624: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c4624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c4628: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2c462c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c462cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c4630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4634: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C4634u;
    SET_GPR_U32(ctx, 31, 0x2C463Cu);
    ctx->pc = 0x2C4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4634u;
    // 0x2c4638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C4634u, 0x2C463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C463Cu;
label_2c463c:
    // 0x2c463c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C463Cu;
    {
        const bool branch_taken_0x2c463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C463Cu;
        // 0x2c4640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c463c) {
            ctx->pc = 0x2C4680u;
            goto label_2c4680;
        }
    }
    ctx->pc = 0x2C4644u;
label_2c4644:
    // 0x2c4644: 0xc0a69c2  jal         func_29A708
    ctx->pc = 0x2C4644u;
    SET_GPR_U32(ctx, 31, 0x2C464Cu);
    ctx->pc = 0x2C4648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4644u;
    // 0x2c4648: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A708u, 0x2C4644u, 0x2C464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C464Cu;
label_2c464c:
    // 0x2c464c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c464cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c4650: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C4650u;
    SET_GPR_U32(ctx, 31, 0x2C4658u);
    ctx->pc = 0x2C4654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4650u;
    // 0x2c4654: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281BC8u, 0x2C4650u, 0x2C4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4658u;
label_2c4658:
    // 0x2c4658: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4658u;
    {
        const bool branch_taken_0x2c4658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4658u;
        // 0x2c465c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4658) {
            ctx->pc = 0x2C4668u;
            goto label_2c4668;
        }
    }
    ctx->pc = 0x2C4660u;
    // 0x2c4660: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4660u;
    {
        const bool branch_taken_0x2c4660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4660u;
        // 0x2c4664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4660) {
            ctx->pc = 0x2C4680u;
            goto label_2c4680;
        }
    }
    ctx->pc = 0x2C4668u;
label_2c4668:
    // 0x2c4668: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x2c4668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c466c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c466cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4670: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x2c4670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4674: 0xfe000010  sd          $zero, 0x10($s0)
    ctx->pc = 0x2c4674u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
    // 0x2c4678: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2c4678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2c467c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2c467cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2c4680:
    // 0x2c4680: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c4680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4684: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c4684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4688: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4688u;
        // 0x2c468c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4690u;
}
