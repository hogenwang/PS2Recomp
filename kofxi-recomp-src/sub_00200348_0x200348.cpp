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

// Function: sub_00200348
// Address: 0x200348 - 0x2003d8
void sub_00200348_0x200348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200348_0x200348");
#endif

    switch (ctx->pc) {
        case 0x20037cu: goto label_20037c;
        case 0x200394u: goto label_200394;
        default: break;
    }

    ctx->pc = 0x200348u;

    // 0x200348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20034c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200350: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x200350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x200354: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x200354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20035c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x20035cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x200360: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x200360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x200364: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200368: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20036c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x200370: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x200370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x200374: 0xc07fef4  jal         func_1FFBD0
    ctx->pc = 0x200374u;
    SET_GPR_U32(ctx, 31, 0x20037Cu);
    ctx->pc = 0x200378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200374u;
    // 0x200378: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFBD0u, 0x200374u, 0x20037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20037Cu;
label_20037c:
    // 0x20037c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20037cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200384: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x200384u;
    {
        const bool branch_taken_0x200384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x200388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200384u;
        // 0x200388: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200384) {
            ctx->pc = 0x2003B8u;
            goto label_2003b8;
        }
    }
    ctx->pc = 0x20038Cu;
    // 0x20038c: 0xc080122  jal         func_200488
    ctx->pc = 0x20038Cu;
    SET_GPR_U32(ctx, 31, 0x200394u);
    ctx->pc = 0x200488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200488u, 0x20038Cu, 0x200394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200394u;
label_200394:
    // 0x200394: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200394u;
    {
        const bool branch_taken_0x200394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200394u;
        // 0x200398: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200394) {
            ctx->pc = 0x2003BCu;
            goto label_2003bc;
        }
    }
    ctx->pc = 0x20039Cu;
    // 0x20039c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x20039cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2003a0: 0x286300d2  slti        $v1, $v1, 0xD2
    ctx->pc = 0x2003a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)210) ? 1 : 0);
    // 0x2003a4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2003A4u;
    {
        const bool branch_taken_0x2003a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2003A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003A4u;
        // 0x2003a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003a4) {
            ctx->pc = 0x2003BCu;
            goto label_2003bc;
        }
    }
    ctx->pc = 0x2003ACu;
    // 0x2003ac: 0x92230027  lbu         $v1, 0x27($s1)
    ctx->pc = 0x2003acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x2003b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2003b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2003b4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2003b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2003b8:
    // 0x2003b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2003b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2003bc:
    // 0x2003bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2003bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2003c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2003c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2003c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2003c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2003c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2003c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2003cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2003CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2003D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003CCu;
        // 0x2003d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2003CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2003D4u;
    // 0x2003d4: 0x0  nop
    ctx->pc = 0x2003d4u;
    // NOP
    if (ctx->pc == 0x2003d4u) { ctx->pc = 0x2003d8u; }
}
