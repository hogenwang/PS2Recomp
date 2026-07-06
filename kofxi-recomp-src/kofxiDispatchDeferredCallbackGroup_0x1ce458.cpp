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

// Function: kofxiDispatchDeferredCallbackGroup
// Address: 0x1ce458 - 0x1ce5b8
void kofxiDispatchDeferredCallbackGroup_0x1ce458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiDispatchDeferredCallbackGroup_0x1ce458");
#endif

    switch (ctx->pc) {
        case 0x1ce458u: goto label_1ce458;
        case 0x1ce45cu: goto label_1ce45c;
        case 0x1ce460u: goto label_1ce460;
        case 0x1ce464u: goto label_1ce464;
        case 0x1ce468u: goto label_1ce468;
        case 0x1ce46cu: goto label_1ce46c;
        case 0x1ce470u: goto label_1ce470;
        case 0x1ce474u: goto label_1ce474;
        case 0x1ce478u: goto label_1ce478;
        case 0x1ce47cu: goto label_1ce47c;
        case 0x1ce480u: goto label_1ce480;
        case 0x1ce484u: goto label_1ce484;
        case 0x1ce488u: goto label_1ce488;
        case 0x1ce48cu: goto label_1ce48c;
        case 0x1ce490u: goto label_1ce490;
        case 0x1ce494u: goto label_1ce494;
        case 0x1ce498u: goto label_1ce498;
        case 0x1ce49cu: goto label_1ce49c;
        case 0x1ce4a0u: goto label_1ce4a0;
        case 0x1ce4a4u: goto label_1ce4a4;
        case 0x1ce4a8u: goto label_1ce4a8;
        case 0x1ce4acu: goto label_1ce4ac;
        case 0x1ce4b0u: goto label_1ce4b0;
        case 0x1ce4b4u: goto label_1ce4b4;
        case 0x1ce4b8u: goto label_1ce4b8;
        case 0x1ce4bcu: goto label_1ce4bc;
        case 0x1ce4c0u: goto label_1ce4c0;
        case 0x1ce4c4u: goto label_1ce4c4;
        case 0x1ce4c8u: goto label_1ce4c8;
        case 0x1ce4ccu: goto label_1ce4cc;
        case 0x1ce4d0u: goto label_1ce4d0;
        case 0x1ce4d4u: goto label_1ce4d4;
        case 0x1ce4d8u: goto label_1ce4d8;
        case 0x1ce4dcu: goto label_1ce4dc;
        case 0x1ce4e0u: goto label_1ce4e0;
        case 0x1ce4e4u: goto label_1ce4e4;
        case 0x1ce4e8u: goto label_1ce4e8;
        case 0x1ce4ecu: goto label_1ce4ec;
        case 0x1ce4f0u: goto label_1ce4f0;
        case 0x1ce4f4u: goto label_1ce4f4;
        case 0x1ce4f8u: goto label_1ce4f8;
        case 0x1ce4fcu: goto label_1ce4fc;
        case 0x1ce500u: goto label_1ce500;
        case 0x1ce504u: goto label_1ce504;
        case 0x1ce508u: goto label_1ce508;
        case 0x1ce50cu: goto label_1ce50c;
        case 0x1ce510u: goto label_1ce510;
        case 0x1ce514u: goto label_1ce514;
        case 0x1ce518u: goto label_1ce518;
        case 0x1ce51cu: goto label_1ce51c;
        case 0x1ce520u: goto label_1ce520;
        case 0x1ce524u: goto label_1ce524;
        case 0x1ce528u: goto label_1ce528;
        case 0x1ce52cu: goto label_1ce52c;
        case 0x1ce530u: goto label_1ce530;
        case 0x1ce534u: goto label_1ce534;
        case 0x1ce538u: goto label_1ce538;
        case 0x1ce53cu: goto label_1ce53c;
        case 0x1ce540u: goto label_1ce540;
        case 0x1ce544u: goto label_1ce544;
        case 0x1ce548u: goto label_1ce548;
        case 0x1ce54cu: goto label_1ce54c;
        case 0x1ce550u: goto label_1ce550;
        case 0x1ce554u: goto label_1ce554;
        case 0x1ce558u: goto label_1ce558;
        case 0x1ce55cu: goto label_1ce55c;
        case 0x1ce560u: goto label_1ce560;
        case 0x1ce564u: goto label_1ce564;
        case 0x1ce568u: goto label_1ce568;
        case 0x1ce56cu: goto label_1ce56c;
        case 0x1ce570u: goto label_1ce570;
        case 0x1ce574u: goto label_1ce574;
        case 0x1ce578u: goto label_1ce578;
        case 0x1ce57cu: goto label_1ce57c;
        case 0x1ce580u: goto label_1ce580;
        case 0x1ce584u: goto label_1ce584;
        case 0x1ce588u: goto label_1ce588;
        case 0x1ce58cu: goto label_1ce58c;
        case 0x1ce590u: goto label_1ce590;
        case 0x1ce594u: goto label_1ce594;
        case 0x1ce598u: goto label_1ce598;
        case 0x1ce59cu: goto label_1ce59c;
        case 0x1ce5a0u: goto label_1ce5a0;
        case 0x1ce5a4u: goto label_1ce5a4;
        case 0x1ce5a8u: goto label_1ce5a8;
        case 0x1ce5acu: goto label_1ce5ac;
        case 0x1ce5b0u: goto label_1ce5b0;
        case 0x1ce5b4u: goto label_1ce5b4;
        default: break;
    }

    ctx->pc = 0x1ce458u;

label_1ce458:
    // 0x1ce458: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1ce458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1ce45c:
    // 0x1ce45c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ce45cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ce460:
    // 0x1ce460: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ce460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ce464:
    // 0x1ce464: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ce464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1ce468:
    // 0x1ce468: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ce468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ce46c:
    // 0x1ce46c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ce46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ce470:
    // 0x1ce470: 0x4a080  sll         $s4, $a0, 2
    ctx->pc = 0x1ce470u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ce474:
    // 0x1ce474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ce478:
    // 0x1ce478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ce47c:
    // 0x1ce47c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1ce47cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
label_1ce480:
    // 0x1ce480: 0x2631e588  addiu       $s1, $s1, -0x1A78
    ctx->pc = 0x1ce480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960520));
label_1ce484:
    // 0x1ce484: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1ce484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1ce488:
    // 0x1ce488: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ce488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ce48c:
    // 0x1ce48c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1ce48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ce490:
    // 0x1ce490: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ce490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1ce494:
    // 0x1ce494: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ce494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce498:
    // 0x1ce498: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ce498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1ce49c:
    // 0x1ce49c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1ce49cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce4a0:
    // 0x1ce4a0: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1ce4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
label_1ce4a4:
    // 0x1ce4a4: 0x26107d60  addiu       $s0, $s0, 0x7D60
    ctx->pc = 0x1ce4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32096));
label_1ce4a8:
    // 0x1ce4a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ce4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ce4ac:
    // 0x1ce4ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ce4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce4b0:
    // 0x1ce4b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ce4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ce4b4:
    // 0x1ce4b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ce4b8:
    if (ctx->pc == 0x1CE4B8u) {
        ctx->pc = 0x1CE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4B4u;
        // 0x1ce4b8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4BCu;
        goto label_1ce4bc;
    }
    ctx->pc = 0x1CE4B4u;
    {
        const bool branch_taken_0x1ce4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4B4u;
        // 0x1ce4b8: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4b4) {
            ctx->pc = 0x1CE4D0u;
            goto label_1ce4d0;
        }
    }
    ctx->pc = 0x1CE4BCu;
label_1ce4bc:
    // 0x1ce4bc: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x1ce4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_1ce4c0:
    // 0x1ce4c0: 0x40f809  jalr        $v0
label_1ce4c4:
    if (ctx->pc == 0x1CE4C4u) {
        ctx->pc = 0x1CE4C8u;
        goto label_1ce4c8;
    }
    ctx->pc = 0x1CE4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE4C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE4C0u, 0x1CE4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE4C8u;
label_1ce4c8:
    // 0x1ce4c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ce4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1ce4cc:
    // 0x1ce4cc: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1ce4ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_1ce4d0:
    // 0x1ce4d0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ce4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1ce4d4:
    // 0x1ce4d4: 0x643fff6  bgezl       $s2, . + 4 + (-0xA << 2)
label_1ce4d8:
    if (ctx->pc == 0x1CE4D8u) {
        ctx->pc = 0x1CE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4D4u;
        // 0x1ce4d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4DCu;
        goto label_1ce4dc;
    }
    ctx->pc = 0x1CE4D4u;
    {
        const bool branch_taken_0x1ce4d4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1ce4d4) {
            ctx->pc = 0x1CE4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE4D4u;
            // 0x1ce4d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE4B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ce4b0;
        }
    }
    ctx->pc = 0x1CE4DCu;
label_1ce4dc:
    // 0x1ce4dc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ce4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1ce4e0:
    // 0x1ce4e0: 0x2484e568  addiu       $a0, $a0, -0x1A98
    ctx->pc = 0x1ce4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960488));
label_1ce4e4:
    // 0x1ce4e4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1ce4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1ce4e8:
    // 0x1ce4e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ce4e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce4ec:
    // 0x1ce4ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ce4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ce4f0:
    // 0x1ce4f0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ce4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ce4f4:
    // 0x1ce4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce4f8:
    // 0x1ce4f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce4f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ce4fc:
    // 0x1ce4fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ce4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ce500:
    // 0x1ce500: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce504:
    // 0x1ce504: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ce508:
    // 0x1ce508: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ce508u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ce50c:
    // 0x1ce50c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ce50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ce510:
    // 0x1ce510: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ce510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ce514:
    // 0x1ce514: 0x3e00008  jr          $ra
label_1ce518:
    if (ctx->pc == 0x1CE518u) {
        ctx->pc = 0x1CE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE514u;
        // 0x1ce518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE51Cu;
        goto label_1ce51c;
    }
    ctx->pc = 0x1CE514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE514u;
        // 0x1ce518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE51Cu;
label_1ce51c:
    // 0x1ce51c: 0x0  nop
    ctx->pc = 0x1ce51cu;
    // NOP
label_1ce520:
    // 0x1ce520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ce524:
    // 0x1ce524: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1ce524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1ce528:
    // 0x1ce528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ce52c:
    // 0x1ce52c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x1ce52cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1ce530:
    // 0x1ce530: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ce534:
    if (ctx->pc == 0x1CE534u) {
        ctx->pc = 0x1CE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE530u;
        // 0x1ce534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE538u;
        goto label_1ce538;
    }
    ctx->pc = 0x1CE530u;
    {
        const bool branch_taken_0x1ce530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE530u;
        // 0x1ce534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce530) {
            ctx->pc = 0x1CE548u;
            goto label_1ce548;
        }
    }
    ctx->pc = 0x1CE538u;
label_1ce538:
    // 0x1ce538: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ce538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ce53c:
    // 0x1ce53c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ce540:
    if (ctx->pc == 0x1CE540u) {
        ctx->pc = 0x1CE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE53Cu;
        // 0x1ce540: 0x2484bf90  addiu       $a0, $a0, -0x4070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE544u;
        goto label_1ce544;
    }
    ctx->pc = 0x1CE53Cu;
    {
        const bool branch_taken_0x1ce53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE53Cu;
        // 0x1ce540: 0x2484bf90  addiu       $a0, $a0, -0x4070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce53c) {
            ctx->pc = 0x1CE558u;
            goto label_1ce558;
        }
    }
    ctx->pc = 0x1CE544u;
label_1ce544:
    // 0x1ce544: 0x0  nop
    ctx->pc = 0x1ce544u;
    // NOP
label_1ce548:
    // 0x1ce548: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_1ce54c:
    if (ctx->pc == 0x1CE54Cu) {
        ctx->pc = 0x1CE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE548u;
        // 0x1ce54c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE550u;
        goto label_1ce550;
    }
    ctx->pc = 0x1CE548u;
    {
        const bool branch_taken_0x1ce548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce548) {
            ctx->pc = 0x1CE54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE548u;
            // 0x1ce54c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE568u;
            goto label_1ce568;
        }
    }
    ctx->pc = 0x1CE550u;
label_1ce550:
    // 0x1ce550: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ce550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ce554:
    // 0x1ce554: 0x2484bfb8  addiu       $a0, $a0, -0x4048
    ctx->pc = 0x1ce554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950840));
label_1ce558:
    // 0x1ce558: 0xc073748  jal         func_1CDD20
label_1ce55c:
    if (ctx->pc == 0x1CE55Cu) {
        ctx->pc = 0x1CE560u;
        goto label_1ce560;
    }
    ctx->pc = 0x1CE558u;
    SET_GPR_U32(ctx, 31, 0x1CE560u);
    ctx->pc = 0x1CDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD20u, 0x1CE558u, 0x1CE560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE560u;
label_1ce560:
    // 0x1ce560: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ce564:
    if (ctx->pc == 0x1CE564u) {
        ctx->pc = 0x1CE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE560u;
        // 0x1ce564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE568u;
        goto label_1ce568;
    }
    ctx->pc = 0x1CE560u;
    {
        const bool branch_taken_0x1ce560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE560u;
        // 0x1ce564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce560) {
            ctx->pc = 0x1CE5A8u;
            goto label_1ce5a8;
        }
    }
    ctx->pc = 0x1CE568u;
label_1ce568:
    // 0x1ce568: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1ce568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1ce56c:
    // 0x1ce56c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ce56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ce570:
    // 0x1ce570: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ce574:
    // 0x1ce574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ce574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ce578:
    // 0x1ce578: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ce578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ce57c:
    // 0x1ce57c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ce57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ce580:
    // 0x1ce580: 0x3c0101bf  lui         $at, 0x1BF
    ctx->pc = 0x1ce580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)447 << 16));
label_1ce584:
    // 0x1ce584: 0x24217d60  addiu       $at, $at, 0x7D60
    ctx->pc = 0x1ce584u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32096));
label_1ce588:
    // 0x1ce588: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1ce588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1ce58c:
    // 0x1ce58c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ce58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce590:
    // 0x1ce590: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1ce594:
    if (ctx->pc == 0x1CE594u) {
        ctx->pc = 0x1CE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE590u;
        // 0x1ce594: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE598u;
        goto label_1ce598;
    }
    ctx->pc = 0x1CE590u;
    {
        const bool branch_taken_0x1ce590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce590) {
            ctx->pc = 0x1CE594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE590u;
            // 0x1ce594: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE5A8u;
            goto label_1ce5a8;
        }
    }
    ctx->pc = 0x1CE598u;
label_1ce598:
    // 0x1ce598: 0x60f809  jalr        $v1
label_1ce59c:
    if (ctx->pc == 0x1CE59Cu) {
        ctx->pc = 0x1CE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE598u;
        // 0x1ce59c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE5A0u;
        goto label_1ce5a0;
    }
    ctx->pc = 0x1CE598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE5A0u);
        ctx->pc = 0x1CE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE598u;
        // 0x1ce59c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE598u, 0x1CE5A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE5A0u;
label_1ce5a0:
    // 0x1ce5a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ce5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce5a4:
    // 0x1ce5a4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1ce5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ce5a8:
    // 0x1ce5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce5ac:
    // 0x1ce5ac: 0x3e00008  jr          $ra
label_1ce5b0:
    if (ctx->pc == 0x1CE5B0u) {
        ctx->pc = 0x1CE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5ACu;
        // 0x1ce5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE5B4u;
        goto label_1ce5b4;
    }
    ctx->pc = 0x1CE5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5ACu;
        // 0x1ce5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE5B4u;
label_1ce5b4:
    // 0x1ce5b4: 0x0  nop
    ctx->pc = 0x1ce5b4u;
    // NOP
    if (ctx->pc == 0x1ce5b4u) { ctx->pc = 0x1ce5b8u; }
}
