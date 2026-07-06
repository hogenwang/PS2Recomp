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

// Function: sub_0029D570
// Address: 0x29d570 - 0x29d730
void sub_0029D570_0x29d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D570_0x29d570");
#endif

    switch (ctx->pc) {
        case 0x29d570u: goto label_29d570;
        case 0x29d574u: goto label_29d574;
        case 0x29d578u: goto label_29d578;
        case 0x29d57cu: goto label_29d57c;
        case 0x29d580u: goto label_29d580;
        case 0x29d584u: goto label_29d584;
        case 0x29d588u: goto label_29d588;
        case 0x29d58cu: goto label_29d58c;
        case 0x29d590u: goto label_29d590;
        case 0x29d594u: goto label_29d594;
        case 0x29d598u: goto label_29d598;
        case 0x29d59cu: goto label_29d59c;
        case 0x29d5a0u: goto label_29d5a0;
        case 0x29d5a4u: goto label_29d5a4;
        case 0x29d5a8u: goto label_29d5a8;
        case 0x29d5acu: goto label_29d5ac;
        case 0x29d5b0u: goto label_29d5b0;
        case 0x29d5b4u: goto label_29d5b4;
        case 0x29d5b8u: goto label_29d5b8;
        case 0x29d5bcu: goto label_29d5bc;
        case 0x29d5c0u: goto label_29d5c0;
        case 0x29d5c4u: goto label_29d5c4;
        case 0x29d5c8u: goto label_29d5c8;
        case 0x29d5ccu: goto label_29d5cc;
        case 0x29d5d0u: goto label_29d5d0;
        case 0x29d5d4u: goto label_29d5d4;
        case 0x29d5d8u: goto label_29d5d8;
        case 0x29d5dcu: goto label_29d5dc;
        case 0x29d5e0u: goto label_29d5e0;
        case 0x29d5e4u: goto label_29d5e4;
        case 0x29d5e8u: goto label_29d5e8;
        case 0x29d5ecu: goto label_29d5ec;
        case 0x29d5f0u: goto label_29d5f0;
        case 0x29d5f4u: goto label_29d5f4;
        case 0x29d5f8u: goto label_29d5f8;
        case 0x29d5fcu: goto label_29d5fc;
        case 0x29d600u: goto label_29d600;
        case 0x29d604u: goto label_29d604;
        case 0x29d608u: goto label_29d608;
        case 0x29d60cu: goto label_29d60c;
        case 0x29d610u: goto label_29d610;
        case 0x29d614u: goto label_29d614;
        case 0x29d618u: goto label_29d618;
        case 0x29d61cu: goto label_29d61c;
        case 0x29d620u: goto label_29d620;
        case 0x29d624u: goto label_29d624;
        case 0x29d628u: goto label_29d628;
        case 0x29d62cu: goto label_29d62c;
        case 0x29d630u: goto label_29d630;
        case 0x29d634u: goto label_29d634;
        case 0x29d638u: goto label_29d638;
        case 0x29d63cu: goto label_29d63c;
        case 0x29d640u: goto label_29d640;
        case 0x29d644u: goto label_29d644;
        case 0x29d648u: goto label_29d648;
        case 0x29d64cu: goto label_29d64c;
        case 0x29d650u: goto label_29d650;
        case 0x29d654u: goto label_29d654;
        case 0x29d658u: goto label_29d658;
        case 0x29d65cu: goto label_29d65c;
        case 0x29d660u: goto label_29d660;
        case 0x29d664u: goto label_29d664;
        case 0x29d668u: goto label_29d668;
        case 0x29d66cu: goto label_29d66c;
        case 0x29d670u: goto label_29d670;
        case 0x29d674u: goto label_29d674;
        case 0x29d678u: goto label_29d678;
        case 0x29d67cu: goto label_29d67c;
        case 0x29d680u: goto label_29d680;
        case 0x29d684u: goto label_29d684;
        case 0x29d688u: goto label_29d688;
        case 0x29d68cu: goto label_29d68c;
        case 0x29d690u: goto label_29d690;
        case 0x29d694u: goto label_29d694;
        case 0x29d698u: goto label_29d698;
        case 0x29d69cu: goto label_29d69c;
        case 0x29d6a0u: goto label_29d6a0;
        case 0x29d6a4u: goto label_29d6a4;
        case 0x29d6a8u: goto label_29d6a8;
        case 0x29d6acu: goto label_29d6ac;
        case 0x29d6b0u: goto label_29d6b0;
        case 0x29d6b4u: goto label_29d6b4;
        case 0x29d6b8u: goto label_29d6b8;
        case 0x29d6bcu: goto label_29d6bc;
        case 0x29d6c0u: goto label_29d6c0;
        case 0x29d6c4u: goto label_29d6c4;
        case 0x29d6c8u: goto label_29d6c8;
        case 0x29d6ccu: goto label_29d6cc;
        case 0x29d6d0u: goto label_29d6d0;
        case 0x29d6d4u: goto label_29d6d4;
        case 0x29d6d8u: goto label_29d6d8;
        case 0x29d6dcu: goto label_29d6dc;
        case 0x29d6e0u: goto label_29d6e0;
        case 0x29d6e4u: goto label_29d6e4;
        case 0x29d6e8u: goto label_29d6e8;
        case 0x29d6ecu: goto label_29d6ec;
        case 0x29d6f0u: goto label_29d6f0;
        case 0x29d6f4u: goto label_29d6f4;
        case 0x29d6f8u: goto label_29d6f8;
        case 0x29d6fcu: goto label_29d6fc;
        case 0x29d700u: goto label_29d700;
        case 0x29d704u: goto label_29d704;
        case 0x29d708u: goto label_29d708;
        case 0x29d70cu: goto label_29d70c;
        case 0x29d710u: goto label_29d710;
        case 0x29d714u: goto label_29d714;
        case 0x29d718u: goto label_29d718;
        case 0x29d71cu: goto label_29d71c;
        case 0x29d720u: goto label_29d720;
        case 0x29d724u: goto label_29d724;
        case 0x29d728u: goto label_29d728;
        case 0x29d72cu: goto label_29d72c;
        default: break;
    }

    ctx->pc = 0x29d570u;

label_29d570:
    // 0x29d570: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x29d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_29d574:
    // 0x29d574: 0xffb704a0  sd          $s7, 0x4A0($sp)
    ctx->pc = 0x29d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 23));
label_29d578:
    // 0x29d578: 0xffb50480  sd          $s5, 0x480($sp)
    ctx->pc = 0x29d578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 21));
label_29d57c:
    // 0x29d57c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29d57cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29d580:
    // 0x29d580: 0xffb30460  sd          $s3, 0x460($sp)
    ctx->pc = 0x29d580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 19));
label_29d584:
    // 0x29d584: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29d584u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d588:
    // 0x29d588: 0xffb00430  sd          $s0, 0x430($sp)
    ctx->pc = 0x29d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 16));
label_29d58c:
    // 0x29d58c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29d58cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d590:
    // 0x29d590: 0xffbf04b0  sd          $ra, 0x4B0($sp)
    ctx->pc = 0x29d590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 31));
label_29d594:
    // 0x29d594: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x29d594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29d598:
    // 0x29d598: 0xffb40470  sd          $s4, 0x470($sp)
    ctx->pc = 0x29d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 20));
label_29d59c:
    // 0x29d59c: 0xffb20450  sd          $s2, 0x450($sp)
    ctx->pc = 0x29d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 18));
label_29d5a0:
    // 0x29d5a0: 0xffb10440  sd          $s1, 0x440($sp)
    ctx->pc = 0x29d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 17));
label_29d5a4:
    // 0x29d5a4: 0xffb60490  sd          $s6, 0x490($sp)
    ctx->pc = 0x29d5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 22));
label_29d5a8:
    // 0x29d5a8: 0xc0a5b06  jal         func_296C18
label_29d5ac:
    if (ctx->pc == 0x29D5ACu) {
        ctx->pc = 0x29D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5A8u;
        // 0x29d5ac: 0xdef60000  ld          $s6, 0x0($s7) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5B0u;
        goto label_29d5b0;
    }
    ctx->pc = 0x29D5A8u;
    SET_GPR_U32(ctx, 31, 0x29D5B0u);
    ctx->pc = 0x29D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D5A8u;
    // 0x29d5ac: 0xdef60000  ld          $s6, 0x0($s7) (Delay Slot)
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C18u, 0x29D5A8u, 0x29D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5B0u;
label_29d5b0:
    // 0x29d5b0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_29d5b4:
    if (ctx->pc == 0x29D5B4u) {
        ctx->pc = 0x29D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5B0u;
        // 0x29d5b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5B8u;
        goto label_29d5b8;
    }
    ctx->pc = 0x29D5B0u;
    {
        const bool branch_taken_0x29d5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5B0u;
        // 0x29d5b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5b0) {
            ctx->pc = 0x29D700u;
            goto label_29d700;
        }
    }
    ctx->pc = 0x29D5B8u;
label_29d5b8:
    // 0x29d5b8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_29d5bc:
    if (ctx->pc == 0x29D5BCu) {
        ctx->pc = 0x29D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5B8u;
        // 0x29d5bc: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5C0u;
        goto label_29d5c0;
    }
    ctx->pc = 0x29D5B8u;
    {
        const bool branch_taken_0x29d5b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5B8u;
        // 0x29d5bc: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5b8) {
            ctx->pc = 0x29D5D8u;
            goto label_29d5d8;
        }
    }
    ctx->pc = 0x29D5C0u;
label_29d5c0:
    // 0x29d5c0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x29d5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_29d5c4:
    // 0x29d5c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d5c8:
    // 0x29d5c8: 0xc0a7476  jal         func_29D1D8
label_29d5cc:
    if (ctx->pc == 0x29D5CCu) {
        ctx->pc = 0x29D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5C8u;
        // 0x29d5cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5D0u;
        goto label_29d5d0;
    }
    ctx->pc = 0x29D5C8u;
    SET_GPR_U32(ctx, 31, 0x29D5D0u);
    ctx->pc = 0x29D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D5C8u;
    // 0x29d5cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D1D8u, 0x29D5C8u, 0x29D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5D0u;
label_29d5d0:
    // 0x29d5d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_29d5d4:
    if (ctx->pc == 0x29D5D4u) {
        ctx->pc = 0x29D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5D0u;
        // 0x29d5d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5D8u;
        goto label_29d5d8;
    }
    ctx->pc = 0x29D5D0u;
    {
        const bool branch_taken_0x29d5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5D0u;
        // 0x29d5d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5d0) {
            ctx->pc = 0x29D5ECu;
            goto label_29d5ec;
        }
    }
    ctx->pc = 0x29D5D8u;
label_29d5d8:
    // 0x29d5d8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x29d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_29d5dc:
    // 0x29d5dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d5e0:
    // 0x29d5e0: 0x200f809  jalr        $s0
label_29d5e4:
    if (ctx->pc == 0x29D5E4u) {
        ctx->pc = 0x29D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5E0u;
        // 0x29d5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5E8u;
        goto label_29d5e8;
    }
    ctx->pc = 0x29D5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x29D5E8u);
        ctx->pc = 0x29D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5E0u;
        // 0x29d5e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D5E0u, 0x29D5E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D5E8u;
label_29d5e8:
    // 0x29d5e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29d5e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d5ec:
    // 0x29d5ec: 0x1e400004  bgtz        $s2, . + 4 + (0x4 << 2)
label_29d5f0:
    if (ctx->pc == 0x29D5F0u) {
        ctx->pc = 0x29D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5ECu;
        // 0x29d5f0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5F4u;
        goto label_29d5f4;
    }
    ctx->pc = 0x29D5ECu;
    {
        const bool branch_taken_0x29d5ec = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x29D5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5ECu;
        // 0x29d5f0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5ec) {
            ctx->pc = 0x29D600u;
            goto label_29d600;
        }
    }
    ctx->pc = 0x29D5F4u;
label_29d5f4:
    // 0x29d5f4: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x29d5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_29d5f8:
    // 0x29d5f8: 0x10000039  b           . + 4 + (0x39 << 2)
label_29d5fc:
    if (ctx->pc == 0x29D5FCu) {
        ctx->pc = 0x29D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5F8u;
        // 0x29d5fc: 0x24060068  addiu       $a2, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D600u;
        goto label_29d600;
    }
    ctx->pc = 0x29D5F8u;
    {
        const bool branch_taken_0x29d5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5F8u;
        // 0x29d5fc: 0x24060068  addiu       $a2, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5f8) {
            ctx->pc = 0x29D6E0u;
            goto label_29d6e0;
        }
    }
    ctx->pc = 0x29D600u;
label_29d600:
    // 0x29d600: 0xc0a5b06  jal         func_296C18
label_29d604:
    if (ctx->pc == 0x29D604u) {
        ctx->pc = 0x29D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D600u;
        // 0x29d604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D608u;
        goto label_29d608;
    }
    ctx->pc = 0x29D600u;
    SET_GPR_U32(ctx, 31, 0x29D608u);
    ctx->pc = 0x29D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D600u;
    // 0x29d604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C18u, 0x29D600u, 0x29D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D608u;
label_29d608:
    // 0x29d608: 0xc0a63ae  jal         func_298EB8
label_29d60c:
    if (ctx->pc == 0x29D60Cu) {
        ctx->pc = 0x29D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D608u;
        // 0x29d60c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D610u;
        goto label_29d610;
    }
    ctx->pc = 0x29D608u;
    SET_GPR_U32(ctx, 31, 0x29D610u);
    ctx->pc = 0x29D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D608u;
    // 0x29d60c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EB8u, 0x29D608u, 0x29D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D610u;
label_29d610:
    // 0x29d610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d614:
    // 0x29d614: 0xc0a5a46  jal         func_296918
label_29d618:
    if (ctx->pc == 0x29D618u) {
        ctx->pc = 0x29D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D614u;
        // 0x29d618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D61Cu;
        goto label_29d61c;
    }
    ctx->pc = 0x29D614u;
    SET_GPR_U32(ctx, 31, 0x29D61Cu);
    ctx->pc = 0x29D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D614u;
    // 0x29d618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296918u, 0x29D614u, 0x29D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D61Cu;
label_29d61c:
    // 0x29d61c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d620:
    // 0x29d620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29d620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d624:
    // 0x29d624: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29d624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d628:
    // 0x29d628: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x29d628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29d62c:
    // 0x29d62c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x29d62cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d630:
    // 0x29d630: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x29d630u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d634:
    // 0x29d634: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x29d634u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d638:
    // 0x29d638: 0xc0a5a64  jal         func_296990
label_29d63c:
    if (ctx->pc == 0x29D63Cu) {
        ctx->pc = 0x29D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D638u;
        // 0x29d63c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D640u;
        goto label_29d640;
    }
    ctx->pc = 0x29D638u;
    SET_GPR_U32(ctx, 31, 0x29D640u);
    ctx->pc = 0x29D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D638u;
    // 0x29d63c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296990u, 0x29D638u, 0x29D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D640u;
label_29d640:
    // 0x29d640: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_29d644:
    if (ctx->pc == 0x29D644u) {
        ctx->pc = 0x29D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D640u;
        // 0x29d644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D648u;
        goto label_29d648;
    }
    ctx->pc = 0x29D640u;
    {
        const bool branch_taken_0x29d640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D640u;
        // 0x29d644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d640) {
            ctx->pc = 0x29D6ECu;
            goto label_29d6ec;
        }
    }
    ctx->pc = 0x29D648u;
label_29d648:
    // 0x29d648: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x29d648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_29d64c:
    // 0x29d64c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29d64cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_29d650:
    // 0x29d650: 0xafa20424  sw          $v0, 0x424($sp)
    ctx->pc = 0x29d650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 2));
label_29d654:
    // 0x29d654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d658:
    // 0x29d658: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29d658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d65c:
    // 0x29d65c: 0xc0a5908  jal         func_296420
label_29d660:
    if (ctx->pc == 0x29D660u) {
        ctx->pc = 0x29D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D65Cu;
        // 0x29d660: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D664u;
        goto label_29d664;
    }
    ctx->pc = 0x29D65Cu;
    SET_GPR_U32(ctx, 31, 0x29D664u);
    ctx->pc = 0x29D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D65Cu;
    // 0x29d660: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296420u, 0x29D65Cu, 0x29D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D664u;
label_29d664:
    // 0x29d664: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_29d668:
    if (ctx->pc == 0x29D668u) {
        ctx->pc = 0x29D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D664u;
        // 0x29d668: 0x8fa80424  lw          $t0, 0x424($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D66Cu;
        goto label_29d66c;
    }
    ctx->pc = 0x29D664u;
    {
        const bool branch_taken_0x29d664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D664u;
        // 0x29d668: 0x8fa80424  lw          $t0, 0x424($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d664) {
            ctx->pc = 0x29D6ECu;
            goto label_29d6ec;
        }
    }
    ctx->pc = 0x29D66Cu;
label_29d66c:
    // 0x29d66c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29d66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29d670:
    // 0x29d670: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29d670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29d674:
    // 0x29d674: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x29d674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_29d678:
    // 0x29d678: 0xc0a597e  jal         func_2965F8
label_29d67c:
    if (ctx->pc == 0x29D67Cu) {
        ctx->pc = 0x29D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D678u;
        // 0x29d67c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D680u;
        goto label_29d680;
    }
    ctx->pc = 0x29D678u;
    SET_GPR_U32(ctx, 31, 0x29D680u);
    ctx->pc = 0x29D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D678u;
    // 0x29d67c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2965F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2965F8u, 0x29D678u, 0x29D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D680u;
label_29d680:
    // 0x29d680: 0x8fa50420  lw          $a1, 0x420($sp)
    ctx->pc = 0x29d680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_29d684:
    // 0x29d684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29d688:
    // 0x29d688: 0x27a60424  addiu       $a2, $sp, 0x424
    ctx->pc = 0x29d688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1060));
label_29d68c:
    // 0x29d68c: 0xc0a59ba  jal         func_2966E8
label_29d690:
    if (ctx->pc == 0x29D690u) {
        ctx->pc = 0x29D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D68Cu;
        // 0x29d690: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D694u;
        goto label_29d694;
    }
    ctx->pc = 0x29D68Cu;
    SET_GPR_U32(ctx, 31, 0x29D694u);
    ctx->pc = 0x29D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D68Cu;
    // 0x29d690: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2966E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2966E8u, 0x29D68Cu, 0x29D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D694u;
label_29d694:
    // 0x29d694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d698:
    // 0x29d698: 0xc0a5a28  jal         func_2968A0
label_29d69c:
    if (ctx->pc == 0x29D69Cu) {
        ctx->pc = 0x29D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D698u;
        // 0x29d69c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6A0u;
        goto label_29d6a0;
    }
    ctx->pc = 0x29D698u;
    SET_GPR_U32(ctx, 31, 0x29D6A0u);
    ctx->pc = 0x29D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D698u;
    // 0x29d69c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x29D698u, 0x29D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6A0u;
label_29d6a0:
    // 0x29d6a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d6a4:
    // 0x29d6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d6a8:
    // 0x29d6a8: 0xc049cb6  jal         func_1272D8
label_29d6ac:
    if (ctx->pc == 0x29D6ACu) {
        ctx->pc = 0x29D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6A8u;
        // 0x29d6ac: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6B0u;
        goto label_29d6b0;
    }
    ctx->pc = 0x29D6A8u;
    SET_GPR_U32(ctx, 31, 0x29D6B0u);
    ctx->pc = 0x29D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6A8u;
    // 0x29d6ac: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x29D6A8u, 0x29D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6B0u;
label_29d6b0:
    // 0x29d6b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29d6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d6b4:
    // 0x29d6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d6b8:
    // 0x29d6b8: 0xc049cb6  jal         func_1272D8
label_29d6bc:
    if (ctx->pc == 0x29D6BCu) {
        ctx->pc = 0x29D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6B8u;
        // 0x29d6bc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6C0u;
        goto label_29d6c0;
    }
    ctx->pc = 0x29D6B8u;
    SET_GPR_U32(ctx, 31, 0x29D6C0u);
    ctx->pc = 0x29D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6B8u;
    // 0x29d6bc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x29D6B8u, 0x29D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6C0u;
label_29d6c0:
    // 0x29d6c0: 0x8fa30424  lw          $v1, 0x424($sp)
    ctx->pc = 0x29d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
label_29d6c4:
    // 0x29d6c4: 0x8fa20420  lw          $v0, 0x420($sp)
    ctx->pc = 0x29d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_29d6c8:
    // 0x29d6c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29d6cc:
    // 0x29d6cc: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_29d6d0:
    if (ctx->pc == 0x29D6D0u) {
        ctx->pc = 0x29D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6CCu;
        // 0x29d6d0: 0xafa30424  sw          $v1, 0x424($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6D4u;
        goto label_29d6d4;
    }
    ctx->pc = 0x29D6CCu;
    {
        const bool branch_taken_0x29d6cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6CCu;
        // 0x29d6d0: 0xafa30424  sw          $v1, 0x424($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d6cc) {
            ctx->pc = 0x29D6F4u;
            goto label_29d6f4;
        }
    }
    ctx->pc = 0x29D6D4u;
label_29d6d4:
    // 0x29d6d4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_29d6d8:
    // 0x29d6d8: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x29d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_29d6dc:
    // 0x29d6dc: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x29d6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_29d6e0:
    // 0x29d6e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d6e4:
    // 0x29d6e4: 0xc0a5648  jal         func_295920
label_29d6e8:
    if (ctx->pc == 0x29D6E8u) {
        ctx->pc = 0x29D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6E4u;
        // 0x29d6e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6ECu;
        goto label_29d6ec;
    }
    ctx->pc = 0x29D6E4u;
    SET_GPR_U32(ctx, 31, 0x29D6ECu);
    ctx->pc = 0x29D6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6E4u;
    // 0x29d6e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29D6E4u, 0x29D6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6ECu;
label_29d6ec:
    // 0x29d6ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_29d6f0:
    if (ctx->pc == 0x29D6F0u) {
        ctx->pc = 0x29D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6ECu;
        // 0x29d6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D6F4u;
        goto label_29d6f4;
    }
    ctx->pc = 0x29D6ECu;
    {
        const bool branch_taken_0x29d6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D6ECu;
        // 0x29d6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d6ec) {
            ctx->pc = 0x29D700u;
            goto label_29d700;
        }
    }
    ctx->pc = 0x29D6F4u;
label_29d6f4:
    // 0x29d6f4: 0x8fa30424  lw          $v1, 0x424($sp)
    ctx->pc = 0x29d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
label_29d6f8:
    // 0x29d6f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d6fc:
    // 0x29d6fc: 0xfee30000  sd          $v1, 0x0($s7)
    ctx->pc = 0x29d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
label_29d700:
    // 0x29d700: 0xdfbf04b0  ld          $ra, 0x4B0($sp)
    ctx->pc = 0x29d700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
label_29d704:
    // 0x29d704: 0xdfb704a0  ld          $s7, 0x4A0($sp)
    ctx->pc = 0x29d704u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_29d708:
    // 0x29d708: 0xdfb60490  ld          $s6, 0x490($sp)
    ctx->pc = 0x29d708u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
label_29d70c:
    // 0x29d70c: 0xdfb50480  ld          $s5, 0x480($sp)
    ctx->pc = 0x29d70cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_29d710:
    // 0x29d710: 0xdfb40470  ld          $s4, 0x470($sp)
    ctx->pc = 0x29d710u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_29d714:
    // 0x29d714: 0xdfb30460  ld          $s3, 0x460($sp)
    ctx->pc = 0x29d714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_29d718:
    // 0x29d718: 0xdfb20450  ld          $s2, 0x450($sp)
    ctx->pc = 0x29d718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_29d71c:
    // 0x29d71c: 0xdfb10440  ld          $s1, 0x440($sp)
    ctx->pc = 0x29d71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_29d720:
    // 0x29d720: 0xdfb00430  ld          $s0, 0x430($sp)
    ctx->pc = 0x29d720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_29d724:
    // 0x29d724: 0x3e00008  jr          $ra
label_29d728:
    if (ctx->pc == 0x29D728u) {
        ctx->pc = 0x29D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D724u;
        // 0x29d728: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D72Cu;
        goto label_29d72c;
    }
    ctx->pc = 0x29D724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D724u;
        // 0x29d728: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D72Cu;
label_29d72c:
    // 0x29d72c: 0x0  nop
    ctx->pc = 0x29d72cu;
    // NOP
}
