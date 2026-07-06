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

// Function: sub_001FD2F0
// Address: 0x1fd2f0 - 0x1fd388
void sub_001FD2F0_0x1fd2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD2F0_0x1fd2f0");
#endif

    switch (ctx->pc) {
        case 0x1fd2f0u: goto label_1fd2f0;
        case 0x1fd2f4u: goto label_1fd2f4;
        case 0x1fd2f8u: goto label_1fd2f8;
        case 0x1fd2fcu: goto label_1fd2fc;
        case 0x1fd300u: goto label_1fd300;
        case 0x1fd304u: goto label_1fd304;
        case 0x1fd308u: goto label_1fd308;
        case 0x1fd30cu: goto label_1fd30c;
        case 0x1fd310u: goto label_1fd310;
        case 0x1fd314u: goto label_1fd314;
        case 0x1fd318u: goto label_1fd318;
        case 0x1fd31cu: goto label_1fd31c;
        case 0x1fd320u: goto label_1fd320;
        case 0x1fd324u: goto label_1fd324;
        case 0x1fd328u: goto label_1fd328;
        case 0x1fd32cu: goto label_1fd32c;
        case 0x1fd330u: goto label_1fd330;
        case 0x1fd334u: goto label_1fd334;
        case 0x1fd338u: goto label_1fd338;
        case 0x1fd33cu: goto label_1fd33c;
        case 0x1fd340u: goto label_1fd340;
        case 0x1fd344u: goto label_1fd344;
        case 0x1fd348u: goto label_1fd348;
        case 0x1fd34cu: goto label_1fd34c;
        case 0x1fd350u: goto label_1fd350;
        case 0x1fd354u: goto label_1fd354;
        case 0x1fd358u: goto label_1fd358;
        case 0x1fd35cu: goto label_1fd35c;
        case 0x1fd360u: goto label_1fd360;
        case 0x1fd364u: goto label_1fd364;
        case 0x1fd368u: goto label_1fd368;
        case 0x1fd36cu: goto label_1fd36c;
        case 0x1fd370u: goto label_1fd370;
        case 0x1fd374u: goto label_1fd374;
        case 0x1fd378u: goto label_1fd378;
        case 0x1fd37cu: goto label_1fd37c;
        case 0x1fd380u: goto label_1fd380;
        case 0x1fd384u: goto label_1fd384;
        default: break;
    }

    ctx->pc = 0x1fd2f0u;

label_1fd2f0:
    // 0x1fd2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd2f4:
    // 0x1fd2f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd2f8:
    // 0x1fd2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd2fc:
    // 0x1fd2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd300:
    // 0x1fd300: 0x807f4c2  j           func_1FD308
label_1fd304:
    if (ctx->pc == 0x1FD304u) {
        ctx->pc = 0x1FD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD300u;
        // 0x1fd304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD308u;
        goto label_1fd308;
    }
    ctx->pc = 0x1FD300u;
    ctx->pc = 0x1FD304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD300u;
    // 0x1fd304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    goto label_1fd308;
    ctx->pc = 0x1FD308u;
label_1fd308:
    // 0x1fd308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fd30c:
    // 0x1fd30c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fd30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1fd310:
    // 0x1fd310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fd314:
    // 0x1fd314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd318:
    // 0x1fd318: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fd31c:
    // 0x1fd31c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fd31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd320:
    // 0x1fd320: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fd320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fd324:
    // 0x1fd324: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x1fd324u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1fd328:
    // 0x1fd328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd32c:
    // 0x1fd32c: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x1fd32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
label_1fd330:
    // 0x1fd330: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1fd334:
    if (ctx->pc == 0x1FD334u) {
        ctx->pc = 0x1FD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD330u;
        // 0x1fd334: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD338u;
        goto label_1fd338;
    }
    ctx->pc = 0x1FD330u;
    {
        const bool branch_taken_0x1fd330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD330u;
        // 0x1fd334: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd330) {
            ctx->pc = 0x1FD36Cu;
            goto label_1fd36c;
        }
    }
    ctx->pc = 0x1FD338u;
label_1fd338:
    // 0x1fd338: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fd338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd33c:
    // 0x1fd33c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1fd33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1fd340:
    // 0x1fd340: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1fd344:
    if (ctx->pc == 0x1FD344u) {
        ctx->pc = 0x1FD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD340u;
        // 0x1fd344: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD348u;
        goto label_1fd348;
    }
    ctx->pc = 0x1FD340u;
    {
        const bool branch_taken_0x1fd340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD340u;
        // 0x1fd344: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd340) {
            ctx->pc = 0x1FD36Cu;
            goto label_1fd36c;
        }
    }
    ctx->pc = 0x1FD348u;
label_1fd348:
    // 0x1fd348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fd34c:
    // 0x1fd34c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd350:
    // 0x1fd350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd354:
    // 0x1fd354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd358:
    // 0x1fd358: 0x40f809  jalr        $v0
label_1fd35c:
    if (ctx->pc == 0x1FD35Cu) {
        ctx->pc = 0x1FD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD358u;
        // 0x1fd35c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD360u;
        goto label_1fd360;
    }
    ctx->pc = 0x1FD358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD360u);
        ctx->pc = 0x1FD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD358u;
        // 0x1fd35c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD358u, 0x1FD360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD360u;
label_1fd360:
    // 0x1fd360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fd364:
    // 0x1fd364: 0x1080fff2  beqz        $a0, . + 4 + (-0xE << 2)
label_1fd368:
    if (ctx->pc == 0x1FD368u) {
        ctx->pc = 0x1FD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD364u;
        // 0x1fd368: 0x2a22000f  slti        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD36Cu;
        goto label_1fd36c;
    }
    ctx->pc = 0x1FD364u;
    {
        const bool branch_taken_0x1fd364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD364u;
        // 0x1fd368: 0x2a22000f  slti        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd364) {
            ctx->pc = 0x1FD330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fd330;
        }
    }
    ctx->pc = 0x1FD36Cu;
label_1fd36c:
    // 0x1fd36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd370:
    // 0x1fd370: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fd370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd374:
    // 0x1fd374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fd378:
    // 0x1fd378: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd37c:
    // 0x1fd37c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fd37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fd380:
    // 0x1fd380: 0x3e00008  jr          $ra
label_1fd384:
    if (ctx->pc == 0x1FD384u) {
        ctx->pc = 0x1FD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD380u;
        // 0x1fd384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD388u;
        goto label_fallthrough_0x1fd380;
    }
    ctx->pc = 0x1FD380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD380u;
        // 0x1fd384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fd380:
    ctx->pc = 0x1FD388u;
}
