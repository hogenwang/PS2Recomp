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

// Function: sub_001B9128
// Address: 0x1b9128 - 0x1b91b0
void sub_001B9128_0x1b9128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9128_0x1b9128");
#endif

    switch (ctx->pc) {
        case 0x1b9170u: goto label_1b9170;
        case 0x1b9178u: goto label_1b9178;
        case 0x1b918cu: goto label_1b918c;
        case 0x1b9198u: goto label_1b9198;
        default: break;
    }

    ctx->pc = 0x1b9128u;

    // 0x1b9128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b912c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9138: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b913c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B913Cu;
    {
        const bool branch_taken_0x1b913c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B913Cu;
        // 0x1b9140: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b913c) {
            ctx->pc = 0x1B914Cu;
            goto label_1b914c;
        }
    }
    ctx->pc = 0x1B9144u;
    // 0x1b9144: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9144u;
    {
        const bool branch_taken_0x1b9144 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9144) {
            ctx->pc = 0x1B9168u;
            goto label_1b9168;
        }
    }
    ctx->pc = 0x1B914Cu;
label_1b914c:
    // 0x1b914c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b914cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b9150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9154: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9158: 0x248480a8  addiu       $a0, $a0, -0x7F58
    ctx->pc = 0x1b9158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934696));
    // 0x1b915c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b915cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9160: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B9160u;
    ctx->pc = 0x1B9164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9160u;
    // 0x1b9164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B9168u;
label_1b9168:
    // 0x1b9168: 0xc06e4ac  jal         func_1B92B0
    ctx->pc = 0x1B9168u;
    SET_GPR_U32(ctx, 31, 0x1B9170u);
    ctx->pc = 0x1B92B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B92B0u, 0x1B9168u, 0x1B9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9170u;
label_1b9170:
    // 0x1b9170: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B9170u;
    SET_GPR_U32(ctx, 31, 0x1B9178u);
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1B9170u, 0x1B9178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9178u;
label_1b9178:
    // 0x1b9178: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b9178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b917c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b917cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9180: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b9180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b9184: 0xc06e3c4  jal         func_1B8F10
    ctx->pc = 0x1B9184u;
    SET_GPR_U32(ctx, 31, 0x1B918Cu);
    ctx->pc = 0x1B9188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9184u;
    // 0x1b9188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F10u, 0x1B9184u, 0x1B918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B918Cu;
label_1b918c:
    // 0x1b918c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b918cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9190: 0xc06ed96  jal         func_1BB658
    ctx->pc = 0x1B9190u;
    SET_GPR_U32(ctx, 31, 0x1B9198u);
    ctx->pc = 0x1B9194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9190u;
    // 0x1b9194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB658u, 0x1B9190u, 0x1B9198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9198u;
label_1b9198:
    // 0x1b9198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b919c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b919cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b91a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b91a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b91a4: 0x806b494  j           func_1AD250
    ctx->pc = 0x1B91A4u;
    ctx->pc = 0x1B91A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91A4u;
    // 0x1b91a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    ctx->pc = 0x1B91ACu;
    // 0x1b91ac: 0x0  nop
    ctx->pc = 0x1b91acu;
    // NOP
}
