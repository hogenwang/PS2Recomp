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

// Function: sub_001E64C8
// Address: 0x1e64c8 - 0x1e6678
void sub_001E64C8_0x1e64c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E64C8_0x1e64c8");
#endif

    switch (ctx->pc) {
        case 0x1e64c8u: goto label_1e64c8;
        case 0x1e64ccu: goto label_1e64cc;
        case 0x1e64d0u: goto label_1e64d0;
        case 0x1e64d4u: goto label_1e64d4;
        case 0x1e64d8u: goto label_1e64d8;
        case 0x1e64dcu: goto label_1e64dc;
        case 0x1e64e0u: goto label_1e64e0;
        case 0x1e64e4u: goto label_1e64e4;
        case 0x1e64e8u: goto label_1e64e8;
        case 0x1e64ecu: goto label_1e64ec;
        case 0x1e64f0u: goto label_1e64f0;
        case 0x1e64f4u: goto label_1e64f4;
        case 0x1e64f8u: goto label_1e64f8;
        case 0x1e64fcu: goto label_1e64fc;
        case 0x1e6500u: goto label_1e6500;
        case 0x1e6504u: goto label_1e6504;
        case 0x1e6508u: goto label_1e6508;
        case 0x1e650cu: goto label_1e650c;
        case 0x1e6510u: goto label_1e6510;
        case 0x1e6514u: goto label_1e6514;
        case 0x1e6518u: goto label_1e6518;
        case 0x1e651cu: goto label_1e651c;
        case 0x1e6520u: goto label_1e6520;
        case 0x1e6524u: goto label_1e6524;
        case 0x1e6528u: goto label_1e6528;
        case 0x1e652cu: goto label_1e652c;
        case 0x1e6530u: goto label_1e6530;
        case 0x1e6534u: goto label_1e6534;
        case 0x1e6538u: goto label_1e6538;
        case 0x1e653cu: goto label_1e653c;
        case 0x1e6540u: goto label_1e6540;
        case 0x1e6544u: goto label_1e6544;
        case 0x1e6548u: goto label_1e6548;
        case 0x1e654cu: goto label_1e654c;
        case 0x1e6550u: goto label_1e6550;
        case 0x1e6554u: goto label_1e6554;
        case 0x1e6558u: goto label_1e6558;
        case 0x1e655cu: goto label_1e655c;
        case 0x1e6560u: goto label_1e6560;
        case 0x1e6564u: goto label_1e6564;
        case 0x1e6568u: goto label_1e6568;
        case 0x1e656cu: goto label_1e656c;
        case 0x1e6570u: goto label_1e6570;
        case 0x1e6574u: goto label_1e6574;
        case 0x1e6578u: goto label_1e6578;
        case 0x1e657cu: goto label_1e657c;
        case 0x1e6580u: goto label_1e6580;
        case 0x1e6584u: goto label_1e6584;
        case 0x1e6588u: goto label_1e6588;
        case 0x1e658cu: goto label_1e658c;
        case 0x1e6590u: goto label_1e6590;
        case 0x1e6594u: goto label_1e6594;
        case 0x1e6598u: goto label_1e6598;
        case 0x1e659cu: goto label_1e659c;
        case 0x1e65a0u: goto label_1e65a0;
        case 0x1e65a4u: goto label_1e65a4;
        case 0x1e65a8u: goto label_1e65a8;
        case 0x1e65acu: goto label_1e65ac;
        case 0x1e65b0u: goto label_1e65b0;
        case 0x1e65b4u: goto label_1e65b4;
        case 0x1e65b8u: goto label_1e65b8;
        case 0x1e65bcu: goto label_1e65bc;
        case 0x1e65c0u: goto label_1e65c0;
        case 0x1e65c4u: goto label_1e65c4;
        case 0x1e65c8u: goto label_1e65c8;
        case 0x1e65ccu: goto label_1e65cc;
        case 0x1e65d0u: goto label_1e65d0;
        case 0x1e65d4u: goto label_1e65d4;
        case 0x1e65d8u: goto label_1e65d8;
        case 0x1e65dcu: goto label_1e65dc;
        case 0x1e65e0u: goto label_1e65e0;
        case 0x1e65e4u: goto label_1e65e4;
        case 0x1e65e8u: goto label_1e65e8;
        case 0x1e65ecu: goto label_1e65ec;
        case 0x1e65f0u: goto label_1e65f0;
        case 0x1e65f4u: goto label_1e65f4;
        case 0x1e65f8u: goto label_1e65f8;
        case 0x1e65fcu: goto label_1e65fc;
        case 0x1e6600u: goto label_1e6600;
        case 0x1e6604u: goto label_1e6604;
        case 0x1e6608u: goto label_1e6608;
        case 0x1e660cu: goto label_1e660c;
        case 0x1e6610u: goto label_1e6610;
        case 0x1e6614u: goto label_1e6614;
        case 0x1e6618u: goto label_1e6618;
        case 0x1e661cu: goto label_1e661c;
        case 0x1e6620u: goto label_1e6620;
        case 0x1e6624u: goto label_1e6624;
        case 0x1e6628u: goto label_1e6628;
        case 0x1e662cu: goto label_1e662c;
        case 0x1e6630u: goto label_1e6630;
        case 0x1e6634u: goto label_1e6634;
        case 0x1e6638u: goto label_1e6638;
        case 0x1e663cu: goto label_1e663c;
        case 0x1e6640u: goto label_1e6640;
        case 0x1e6644u: goto label_1e6644;
        case 0x1e6648u: goto label_1e6648;
        case 0x1e664cu: goto label_1e664c;
        case 0x1e6650u: goto label_1e6650;
        case 0x1e6654u: goto label_1e6654;
        case 0x1e6658u: goto label_1e6658;
        case 0x1e665cu: goto label_1e665c;
        case 0x1e6660u: goto label_1e6660;
        case 0x1e6664u: goto label_1e6664;
        case 0x1e6668u: goto label_1e6668;
        case 0x1e666cu: goto label_1e666c;
        case 0x1e6670u: goto label_1e6670;
        case 0x1e6674u: goto label_1e6674;
        default: break;
    }

    ctx->pc = 0x1e64c8u;

label_1e64c8:
    // 0x1e64c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e64c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e64cc:
    // 0x1e64cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e64ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e64d0:
    // 0x1e64d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e64d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e64d4:
    // 0x1e64d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e64d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e64d8:
    // 0x1e64d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e64d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e64dc:
    // 0x1e64dc: 0xc079a08  jal         func_1E6820
label_1e64e0:
    if (ctx->pc == 0x1E64E0u) {
        ctx->pc = 0x1E64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64DCu;
        // 0x1e64e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64E4u;
        goto label_1e64e4;
    }
    ctx->pc = 0x1E64DCu;
    SET_GPR_U32(ctx, 31, 0x1E64E4u);
    ctx->pc = 0x1E64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E64DCu;
    // 0x1e64e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6820u, 0x1E64DCu, 0x1E64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E64E4u;
label_1e64e4:
    // 0x1e64e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e64e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e64e8:
    // 0x1e64e8: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1e64ec:
    if (ctx->pc == 0x1E64ECu) {
        ctx->pc = 0x1E64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64E8u;
        // 0x1e64ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64F0u;
        goto label_1e64f0;
    }
    ctx->pc = 0x1E64E8u;
    {
        const bool branch_taken_0x1e64e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e64e8) {
            ctx->pc = 0x1E64ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E64E8u;
            // 0x1e64ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6514u;
            goto label_1e6514;
        }
    }
    ctx->pc = 0x1E64F0u;
label_1e64f0:
    // 0x1e64f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e64f4:
    // 0x1e64f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e64f8:
    if (ctx->pc == 0x1E64F8u) {
        ctx->pc = 0x1E64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64F4u;
        // 0x1e64f8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E64FCu;
        goto label_1e64fc;
    }
    ctx->pc = 0x1E64F4u;
    {
        const bool branch_taken_0x1e64f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E64F4u;
        // 0x1e64f8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64f4) {
            ctx->pc = 0x1E6510u;
            goto label_1e6510;
        }
    }
    ctx->pc = 0x1E64FCu;
label_1e64fc:
    // 0x1e64fc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1e64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1e6500:
    // 0x1e6500: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e6504:
    if (ctx->pc == 0x1E6504u) {
        ctx->pc = 0x1E6504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6500u;
        // 0x1e6504: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6508u;
        goto label_1e6508;
    }
    ctx->pc = 0x1E6500u;
    {
        const bool branch_taken_0x1e6500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6500) {
            ctx->pc = 0x1E6504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6500u;
            // 0x1e6504: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6514u;
            goto label_1e6514;
        }
    }
    ctx->pc = 0x1E6508u;
label_1e6508:
    // 0x1e6508: 0x40f809  jalr        $v0
label_1e650c:
    if (ctx->pc == 0x1E650Cu) {
        ctx->pc = 0x1E650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6508u;
        // 0x1e650c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6510u;
        goto label_1e6510;
    }
    ctx->pc = 0x1E6508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6510u);
        ctx->pc = 0x1E650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6508u;
        // 0x1e650c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6508u, 0x1E6510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6510u;
label_1e6510:
    // 0x1e6510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6514:
    // 0x1e6514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e6518:
    // 0x1e6518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e651c:
    // 0x1e651c: 0x3e00008  jr          $ra
label_1e6520:
    if (ctx->pc == 0x1E6520u) {
        ctx->pc = 0x1E6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E651Cu;
        // 0x1e6520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6524u;
        goto label_1e6524;
    }
    ctx->pc = 0x1E651Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E651Cu;
        // 0x1e6520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E651Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6524u;
label_1e6524:
    // 0x1e6524: 0x0  nop
    ctx->pc = 0x1e6524u;
    // NOP
label_1e6528:
    // 0x1e6528: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e6528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e652c:
    // 0x1e652c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1e6530:
    // 0x1e6530: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e6530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6534:
    // 0x1e6534: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e6534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1e6538:
    // 0x1e6538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e653c:
    // 0x1e653c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6540:
    // 0x1e6540: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e6540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1e6544:
    // 0x1e6544: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e6544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1e6548:
    // 0x1e6548: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e6548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e654c:
    // 0x1e654c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1e6550:
    // 0x1e6550: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e6550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e6554:
    // 0x1e6554: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1e6558:
    // 0x1e6558: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1e6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1e655c:
    // 0x1e655c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1e655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1e6560:
    // 0x1e6560: 0xc0799fc  jal         func_1E67F0
label_1e6564:
    if (ctx->pc == 0x1E6564u) {
        ctx->pc = 0x1E6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6560u;
        // 0x1e6564: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6568u;
        goto label_1e6568;
    }
    ctx->pc = 0x1E6560u;
    SET_GPR_U32(ctx, 31, 0x1E6568u);
    ctx->pc = 0x1E6564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6560u;
    // 0x1e6564: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E67F0u, 0x1E6560u, 0x1E6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6568u;
label_1e6568:
    // 0x1e6568: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e6568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e656c:
    // 0x1e656c: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
label_1e6570:
    if (ctx->pc == 0x1E6570u) {
        ctx->pc = 0x1E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E656Cu;
        // 0x1e6570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6574u;
        goto label_1e6574;
    }
    ctx->pc = 0x1E656Cu;
    {
        const bool branch_taken_0x1e656c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E656Cu;
        // 0x1e6570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e656c) {
            ctx->pc = 0x1E664Cu;
            goto label_1e664c;
        }
    }
    ctx->pc = 0x1E6574u;
label_1e6574:
    // 0x1e6574: 0xc079812  jal         func_1E6048
label_1e6578:
    if (ctx->pc == 0x1E6578u) {
        ctx->pc = 0x1E657Cu;
        goto label_1e657c;
    }
    ctx->pc = 0x1E6574u;
    SET_GPR_U32(ctx, 31, 0x1E657Cu);
    ctx->pc = 0x1E6048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6048u, 0x1E6574u, 0x1E657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E657Cu;
label_1e657c:
    // 0x1e657c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x1e657cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_1e6580:
    // 0x1e6580: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e6580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e6584:
    // 0x1e6584: 0x8e16003c  lw          $s6, 0x3C($s0)
    ctx->pc = 0x1e6584u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1e6588:
    // 0x1e6588: 0x24500488  addiu       $s0, $v0, 0x488
    ctx->pc = 0x1e6588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1160));
label_1e658c:
    // 0x1e658c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6590:
    // 0x1e6590: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1e6590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_1e6594:
    // 0x1e6594: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e6594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e6598:
    // 0x1e6598: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1e6598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_1e659c:
    // 0x1e659c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1e659cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1e65a0:
    // 0x1e65a0: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x1e65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_1e65a4:
    // 0x1e65a4: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1e65a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1e65a8:
    // 0x1e65a8: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1e65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_1e65ac:
    // 0x1e65ac: 0xc07984a  jal         func_1E6128
label_1e65b0:
    if (ctx->pc == 0x1E65B0u) {
        ctx->pc = 0x1E65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65ACu;
        // 0x1e65b0: 0xae150018  sw          $s5, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65B4u;
        goto label_1e65b4;
    }
    ctx->pc = 0x1E65ACu;
    SET_GPR_U32(ctx, 31, 0x1E65B4u);
    ctx->pc = 0x1E65B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65ACu;
    // 0x1e65b0: 0xae150018  sw          $s5, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6128u, 0x1E65ACu, 0x1E65B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E65B4u;
label_1e65b4:
    // 0x1e65b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e65b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e65b8:
    // 0x1e65b8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e65b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e65bc:
    // 0x1e65bc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1e65c0:
    if (ctx->pc == 0x1E65C0u) {
        ctx->pc = 0x1E65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65BCu;
        // 0x1e65c0: 0x2484e468  addiu       $a0, $a0, -0x1B98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65C4u;
        goto label_1e65c4;
    }
    ctx->pc = 0x1E65BCu;
    {
        const bool branch_taken_0x1e65bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65BCu;
        // 0x1e65c0: 0x2484e468  addiu       $a0, $a0, -0x1B98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65bc) {
            ctx->pc = 0x1E6628u;
            goto label_1e6628;
        }
    }
    ctx->pc = 0x1E65C4u;
label_1e65c4:
    // 0x1e65c4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e65c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e65c8:
    // 0x1e65c8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1e65c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e65cc:
    // 0x1e65cc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1e65ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1e65d0:
    // 0x1e65d0: 0xc072cec  jal         func_1CB3B0
label_1e65d4:
    if (ctx->pc == 0x1E65D4u) {
        ctx->pc = 0x1E65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65D0u;
        // 0x1e65d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65D8u;
        goto label_1e65d8;
    }
    ctx->pc = 0x1E65D0u;
    SET_GPR_U32(ctx, 31, 0x1E65D8u);
    ctx->pc = 0x1E65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65D0u;
    // 0x1e65d4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB3B0u, 0x1E65D0u, 0x1E65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E65D8u;
label_1e65d8:
    // 0x1e65d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e65d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e65dc:
    // 0x1e65dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e65dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e65e0:
    // 0x1e65e0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_1e65e4:
    if (ctx->pc == 0x1E65E4u) {
        ctx->pc = 0x1E65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65E0u;
        // 0x1e65e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65E8u;
        goto label_1e65e8;
    }
    ctx->pc = 0x1E65E0u;
    {
        const bool branch_taken_0x1e65e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65E0u;
        // 0x1e65e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65e0) {
            ctx->pc = 0x1E65F8u;
            goto label_1e65f8;
        }
    }
    ctx->pc = 0x1E65E8u;
label_1e65e8:
    // 0x1e65e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e65e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e65ec:
    // 0x1e65ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_1e65f0:
    if (ctx->pc == 0x1E65F0u) {
        ctx->pc = 0x1E65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65ECu;
        // 0x1e65f0: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E65F4u;
        goto label_1e65f4;
    }
    ctx->pc = 0x1E65ECu;
    {
        const bool branch_taken_0x1e65ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65ECu;
        // 0x1e65f0: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65ec) {
            ctx->pc = 0x1E6628u;
            goto label_1e6628;
        }
    }
    ctx->pc = 0x1E65F4u;
label_1e65f4:
    // 0x1e65f4: 0x0  nop
    ctx->pc = 0x1e65f4u;
    // NOP
label_1e65f8:
    // 0x1e65f8: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x1e65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
label_1e65fc:
    // 0x1e65fc: 0xc079864  jal         func_1E6190
label_1e6600:
    if (ctx->pc == 0x1E6600u) {
        ctx->pc = 0x1E6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65FCu;
        // 0x1e6600: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6604u;
        goto label_1e6604;
    }
    ctx->pc = 0x1E65FCu;
    SET_GPR_U32(ctx, 31, 0x1E6604u);
    ctx->pc = 0x1E6600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E65FCu;
    // 0x1e6600: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6190u, 0x1E65FCu, 0x1E6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6604u;
label_1e6604:
    // 0x1e6604: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e6604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e6608:
    // 0x1e6608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e6608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e660c:
    // 0x1e660c: 0x26a500c0  addiu       $a1, $s5, 0xC0
    ctx->pc = 0x1e660cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
label_1e6610:
    // 0x1e6610: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e6610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e6614:
    // 0x1e6614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6618:
    // 0x1e6618: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_1e661c:
    if (ctx->pc == 0x1E661Cu) {
        ctx->pc = 0x1E661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6618u;
        // 0x1e661c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6620u;
        goto label_1e6620;
    }
    ctx->pc = 0x1E6618u;
    {
        const bool branch_taken_0x1e6618 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6618u;
        // 0x1e661c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6618) {
            ctx->pc = 0x1E6638u;
            goto label_1e6638;
        }
    }
    ctx->pc = 0x1E6620u;
label_1e6620:
    // 0x1e6620: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e6620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e6624:
    // 0x1e6624: 0x2484e4c0  addiu       $a0, $a0, -0x1B40
    ctx->pc = 0x1e6624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960320));
label_1e6628:
    // 0x1e6628: 0xc079afa  jal         func_1E6BE8
label_1e662c:
    if (ctx->pc == 0x1E662Cu) {
        ctx->pc = 0x1E6630u;
        goto label_1e6630;
    }
    ctx->pc = 0x1E6628u;
    SET_GPR_U32(ctx, 31, 0x1E6630u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E6628u, 0x1E6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6630u;
label_1e6630:
    // 0x1e6630: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e6634:
    if (ctx->pc == 0x1E6634u) {
        ctx->pc = 0x1E6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6630u;
        // 0x1e6634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6638u;
        goto label_1e6638;
    }
    ctx->pc = 0x1E6630u;
    {
        const bool branch_taken_0x1e6630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6630u;
        // 0x1e6634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6630) {
            ctx->pc = 0x1E664Cu;
            goto label_1e664c;
        }
    }
    ctx->pc = 0x1E6638u;
label_1e6638:
    // 0x1e6638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e663c:
    // 0x1e663c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1e663cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
label_1e6640:
    // 0x1e6640: 0xc07b6ba  jal         func_1EDAE8
label_1e6644:
    if (ctx->pc == 0x1E6644u) {
        ctx->pc = 0x1E6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6640u;
        // 0x1e6644: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6648u;
        goto label_1e6648;
    }
    ctx->pc = 0x1E6640u;
    SET_GPR_U32(ctx, 31, 0x1E6648u);
    ctx->pc = 0x1E6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6640u;
    // 0x1e6644: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDAE8u, 0x1E6640u, 0x1E6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6648u;
label_1e6648:
    // 0x1e6648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e6648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e664c:
    // 0x1e664c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e664cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6650:
    // 0x1e6650: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e6650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e6654:
    // 0x1e6654: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e6654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6658:
    // 0x1e6658: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e6658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1e665c:
    // 0x1e665c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e665cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6660:
    // 0x1e6660: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e6660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1e6664:
    // 0x1e6664: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1e6664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e6668:
    // 0x1e6668: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1e6668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1e666c:
    // 0x1e666c: 0x3e00008  jr          $ra
label_1e6670:
    if (ctx->pc == 0x1E6670u) {
        ctx->pc = 0x1E6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E666Cu;
        // 0x1e6670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6674u;
        goto label_1e6674;
    }
    ctx->pc = 0x1E666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E666Cu;
        // 0x1e6670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E666Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6674u;
label_1e6674:
    // 0x1e6674: 0x0  nop
    ctx->pc = 0x1e6674u;
    // NOP
    if (ctx->pc == 0x1e6674u) { ctx->pc = 0x1e6678u; }
}
