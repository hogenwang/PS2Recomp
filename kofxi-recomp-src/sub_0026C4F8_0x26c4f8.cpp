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

// Function: sub_0026C4F8
// Address: 0x26c4f8 - 0x26c860
void sub_0026C4F8_0x26c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C4F8_0x26c4f8");
#endif

    switch (ctx->pc) {
        case 0x26c554u: goto label_26c554;
        case 0x26c564u: goto label_26c564;
        case 0x26c570u: goto label_26c570;
        case 0x26c590u: goto label_26c590;
        case 0x26c5a8u: goto label_26c5a8;
        case 0x26c5b8u: goto label_26c5b8;
        case 0x26c60cu: goto label_26c60c;
        case 0x26c630u: goto label_26c630;
        case 0x26c644u: goto label_26c644;
        case 0x26c654u: goto label_26c654;
        case 0x26c660u: goto label_26c660;
        case 0x26c678u: goto label_26c678;
        case 0x26c688u: goto label_26c688;
        case 0x26c6a4u: goto label_26c6a4;
        case 0x26c6bcu: goto label_26c6bc;
        case 0x26c6ccu: goto label_26c6cc;
        case 0x26c6d4u: goto label_26c6d4;
        case 0x26c6f8u: goto label_26c6f8;
        case 0x26c710u: goto label_26c710;
        case 0x26c730u: goto label_26c730;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c760u: goto label_26c760;
        case 0x26c77cu: goto label_26c77c;
        case 0x26c794u: goto label_26c794;
        case 0x26c7a4u: goto label_26c7a4;
        case 0x26c7acu: goto label_26c7ac;
        case 0x26c7ccu: goto label_26c7cc;
        case 0x26c7e0u: goto label_26c7e0;
        case 0x26c800u: goto label_26c800;
        case 0x26c82cu: goto label_26c82c;
        default: break;
    }

    ctx->pc = 0x26c4f8u;

    // 0x26c4f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26c4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26c4fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c500: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26c500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c504: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x26c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x26c508: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x26c508u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c50c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c510: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x26c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x26c514: 0x2606ff14  addiu       $a2, $s0, -0xEC
    ctx->pc = 0x26c514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967060));
    // 0x26c518: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x26c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x26c51c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c520: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x26c524: 0x24a58c50  addiu       $a1, $a1, -0x73B0
    ctx->pc = 0x26c524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937680));
    // 0x26c528: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x26c52c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26c52cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c530: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26c534: 0x3d0a021  addu        $s4, $fp, $s0
    ctx->pc = 0x26c534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x26c538: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26c538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26c53c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26c53cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c540: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26c540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26c544: 0x27d000f0  addiu       $s0, $fp, 0xF0
    ctx->pc = 0x26c544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 240));
    // 0x26c548: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26c54c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C54Cu;
    SET_GPR_U32(ctx, 31, 0x26C554u);
    ctx->pc = 0x26C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C54Cu;
    // 0x26c550: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C54Cu, 0x26C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C554u;
label_26c554:
    // 0x26c554: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c558: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c55c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C55Cu;
    SET_GPR_U32(ctx, 31, 0x26C564u);
    ctx->pc = 0x26C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C55Cu;
    // 0x26c560: 0x24a58c88  addiu       $a1, $a1, -0x7378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C55Cu, 0x26C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C564u;
label_26c564:
    // 0x26c564: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x26C564u;
    {
        const bool branch_taken_0x26c564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C564u;
        // 0x26c568: 0x214102b  sltu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c564) {
            ctx->pc = 0x26C610u;
            goto label_26c610;
        }
    }
    ctx->pc = 0x26C56Cu;
    // 0x26c56c: 0x0  nop
    ctx->pc = 0x26c56cu;
    // NOP
label_26c570:
    // 0x26c570: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26C570u;
    {
        const bool branch_taken_0x26c570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C570u;
        // 0x26c574: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c570) {
            ctx->pc = 0x26C808u;
            goto label_26c808;
        }
    }
    ctx->pc = 0x26C578u;
    // 0x26c578: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26c578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26c57c: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x26c57cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c580: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c584: 0x24458cb8  addiu       $a1, $v0, -0x7348
    ctx->pc = 0x26c584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937784));
    // 0x26c588: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C588u;
    SET_GPR_U32(ctx, 31, 0x26C590u);
    ctx->pc = 0x26C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C588u;
    // 0x26c58c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C588u, 0x26C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C590u;
label_26c590:
    // 0x26c590: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x26c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x26c594: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x26c594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26c598: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x26C598u;
    {
        const bool branch_taken_0x26c598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C598u;
        // 0x26c59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c598) {
            ctx->pc = 0x26C808u;
            goto label_26c808;
        }
    }
    ctx->pc = 0x26C5A0u;
    // 0x26c5a0: 0xc09b4d2  jal         func_26D348
    ctx->pc = 0x26C5A0u;
    SET_GPR_U32(ctx, 31, 0x26C5A8u);
    ctx->pc = 0x26C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5A0u;
    // 0x26c5a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D348u, 0x26C5A0u, 0x26C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5A8u;
label_26c5a8:
    // 0x26c5a8: 0x440009b  bltz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x26C5A8u;
    {
        const bool branch_taken_0x26c5a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5A8u;
        // 0x26c5ac: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5a8) {
            ctx->pc = 0x26C818u;
            goto label_26c818;
        }
    }
    ctx->pc = 0x26C5B0u;
    // 0x26c5b0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C5B0u;
    SET_GPR_U32(ctx, 31, 0x26C5B8u);
    ctx->pc = 0x26C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C5B0u;
    // 0x26c5b4: 0x26e58cb0  addiu       $a1, $s7, -0x7350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294937776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C5B0u, 0x26C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C5B8u;
label_26c5b8:
    // 0x26c5b8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x26c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x26c5bc: 0x56220012  bnel        $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26C5BCu;
    {
        const bool branch_taken_0x26c5bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x26c5bc) {
            ctx->pc = 0x26C5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C5BCu;
            // 0x26c5c0: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C608u;
            goto label_26c608;
        }
    }
    ctx->pc = 0x26C5C4u;
    // 0x26c5c4: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x26c5c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x26c5c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c5cc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26C5CCu;
    {
        const bool branch_taken_0x26c5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5CCu;
        // 0x26c5d0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5cc) {
            ctx->pc = 0x26C600u;
            goto label_26c600;
        }
    }
    ctx->pc = 0x26C5D4u;
    // 0x26c5d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C5D4u;
    {
        const bool branch_taken_0x26c5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5D4u;
        // 0x26c5d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5d4) {
            ctx->pc = 0x26C5ECu;
            goto label_26c5ec;
        }
    }
    ctx->pc = 0x26C5DCu;
    // 0x26c5dc: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C5DCu;
    {
        const bool branch_taken_0x26c5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c5dc) {
            ctx->pc = 0x26C5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C5DCu;
            // 0x26c5e0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C604u;
            goto label_26c604;
        }
    }
    ctx->pc = 0x26C5E4u;
    // 0x26c5e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26C5E4u;
    {
        const bool branch_taken_0x26c5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5E4u;
        // 0x26c5e8: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5e4) {
            ctx->pc = 0x26C608u;
            goto label_26c608;
        }
    }
    ctx->pc = 0x26C5ECu;
label_26c5ec:
    // 0x26c5ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26c5f0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C5F0u;
    {
        const bool branch_taken_0x26c5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26c5f0) {
            ctx->pc = 0x26C5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C5F0u;
            // 0x26c5f4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C600u;
            goto label_26c600;
        }
    }
    ctx->pc = 0x26C5F8u;
    // 0x26c5f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26C5F8u;
    {
        const bool branch_taken_0x26c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C5F8u;
        // 0x26c5fc: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c5f8) {
            ctx->pc = 0x26C608u;
            goto label_26c608;
        }
    }
    ctx->pc = 0x26C600u;
label_26c600:
    // 0x26c600: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x26c600u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_26c604:
    // 0x26c604: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x26c604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_26c608:
    // 0x26c608: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26c608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26c60c:
    // 0x26c60c: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x26c60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_26c610:
    // 0x26c610: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26C610u;
    {
        const bool branch_taken_0x26c610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C610u;
        // 0x26c614: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c610) {
            ctx->pc = 0x26C660u;
            goto label_26c660;
        }
    }
    ctx->pc = 0x26C618u;
    // 0x26c618: 0x82110000  lb          $s1, 0x0($s0)
    ctx->pc = 0x26c618u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c61c: 0x2909823  subu        $s3, $s4, $s0
    ctx->pc = 0x26c61cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x26c620: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c624: 0x24458ca0  addiu       $a1, $v0, -0x7360
    ctx->pc = 0x26c624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937760));
    // 0x26c628: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C628u;
    SET_GPR_U32(ctx, 31, 0x26C630u);
    ctx->pc = 0x26C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C628u;
    // 0x26c62c: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C628u, 0x26C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C630u;
label_26c630:
    // 0x26c630: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C630u;
    {
        const bool branch_taken_0x26c630 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C630u;
        // 0x26c634: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c630) {
            ctx->pc = 0x26C64Cu;
            goto label_26c64c;
        }
    }
    ctx->pc = 0x26C638u;
    // 0x26c638: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c63c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C63Cu;
    SET_GPR_U32(ctx, 31, 0x26C644u);
    ctx->pc = 0x26C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C63Cu;
    // 0x26c640: 0x26e58cb0  addiu       $a1, $s7, -0x7350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294937776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C63Cu, 0x26C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C644u;
label_26c644:
    // 0x26c644: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x26C644u;
    {
        const bool branch_taken_0x26c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C644u;
        // 0x26c648: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c644) {
            ctx->pc = 0x26C60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c60c;
        }
    }
    ctx->pc = 0x26C64Cu;
label_26c64c:
    // 0x26c64c: 0x1622ffc8  bne         $s1, $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x26C64Cu;
    {
        const bool branch_taken_0x26c64c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C64Cu;
        // 0x26c650: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c64c) {
            ctx->pc = 0x26C570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c570;
        }
    }
    ctx->pc = 0x26C654u;
label_26c654:
    // 0x26c654: 0x26e58cb0  addiu       $a1, $s7, -0x7350
    ctx->pc = 0x26c654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294937776));
    // 0x26c658: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C658u;
    SET_GPR_U32(ctx, 31, 0x26C660u);
    ctx->pc = 0x26C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C658u;
    // 0x26c65c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C658u, 0x26C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C660u;
label_26c660:
    // 0x26c660: 0x12a00033  beqz        $s5, . + 4 + (0x33 << 2)
    ctx->pc = 0x26C660u;
    {
        const bool branch_taken_0x26c660 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C660u;
        // 0x26c664: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c660) {
            ctx->pc = 0x26C730u;
            goto label_26c730;
        }
    }
    ctx->pc = 0x26C668u;
    // 0x26c668: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c66c: 0x24a58cc8  addiu       $a1, $a1, -0x7338
    ctx->pc = 0x26c66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937800));
    // 0x26c670: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C670u;
    SET_GPR_U32(ctx, 31, 0x26C678u);
    ctx->pc = 0x26C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C670u;
    // 0x26c674: 0x27d400ec  addiu       $s4, $fp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C670u, 0x26C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C678u;
label_26c678:
    // 0x26c678: 0x27d0006c  addiu       $s0, $fp, 0x6C
    ctx->pc = 0x26c678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 108));
    // 0x26c67c: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x26c67cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x26c680: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26C680u;
    {
        const bool branch_taken_0x26c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C680u;
        // 0x26c684: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c680) {
            ctx->pc = 0x26C6D4u;
            goto label_26c6d4;
        }
    }
    ctx->pc = 0x26C688u;
label_26c688:
    // 0x26c688: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x26C688u;
    {
        const bool branch_taken_0x26c688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C688u;
        // 0x26c68c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c688) {
            ctx->pc = 0x26C808u;
            goto label_26c808;
        }
    }
    ctx->pc = 0x26C690u;
    // 0x26c690: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c694: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x26c694u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c698: 0x26e58cb8  addiu       $a1, $s7, -0x7348
    ctx->pc = 0x26c698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294937784));
    // 0x26c69c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C69Cu;
    SET_GPR_U32(ctx, 31, 0x26C6A4u);
    ctx->pc = 0x26C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C69Cu;
    // 0x26c6a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C69Cu, 0x26C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6A4u;
label_26c6a4:
    // 0x26c6a4: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x26c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x26c6a8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x26c6a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26c6ac: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x26C6ACu;
    {
        const bool branch_taken_0x26c6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6ACu;
        // 0x26c6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6ac) {
            ctx->pc = 0x26C808u;
            goto label_26c808;
        }
    }
    ctx->pc = 0x26C6B4u;
    // 0x26c6b4: 0xc09b4d2  jal         func_26D348
    ctx->pc = 0x26C6B4u;
    SET_GPR_U32(ctx, 31, 0x26C6BCu);
    ctx->pc = 0x26C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6B4u;
    // 0x26c6b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D348u, 0x26C6B4u, 0x26C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6BCu;
label_26c6bc:
    // 0x26c6bc: 0x4400056  bltz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x26C6BCu;
    {
        const bool branch_taken_0x26c6bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6BCu;
        // 0x26c6c0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6bc) {
            ctx->pc = 0x26C818u;
            goto label_26c818;
        }
    }
    ctx->pc = 0x26C6C4u;
    // 0x26c6c4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C6C4u;
    SET_GPR_U32(ctx, 31, 0x26C6CCu);
    ctx->pc = 0x26C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6C4u;
    // 0x26c6c8: 0x26a58cb0  addiu       $a1, $s5, -0x7350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294937776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C6C4u, 0x26C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6CCu;
label_26c6cc:
    // 0x26c6cc: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x26c6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x26c6d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26c6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26c6d4:
    // 0x26c6d4: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x26c6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x26c6d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26C6D8u;
    {
        const bool branch_taken_0x26c6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6D8u;
        // 0x26c6dc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6d8) {
            ctx->pc = 0x26C730u;
            goto label_26c730;
        }
    }
    ctx->pc = 0x26C6E0u;
    // 0x26c6e0: 0x82110000  lb          $s1, 0x0($s0)
    ctx->pc = 0x26c6e0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c6e4: 0x2909823  subu        $s3, $s4, $s0
    ctx->pc = 0x26c6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x26c6e8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c6ec: 0x24458ca0  addiu       $a1, $v0, -0x7360
    ctx->pc = 0x26c6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937760));
    // 0x26c6f0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C6F0u;
    SET_GPR_U32(ctx, 31, 0x26C6F8u);
    ctx->pc = 0x26C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6F0u;
    // 0x26c6f4: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C6F0u, 0x26C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6F8u;
label_26c6f8:
    // 0x26c6f8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C6F8u;
    {
        const bool branch_taken_0x26c6f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6F8u;
        // 0x26c6fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6f8) {
            ctx->pc = 0x26C718u;
            goto label_26c718;
        }
    }
    ctx->pc = 0x26C700u;
    // 0x26c700: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c704: 0x26a58cb0  addiu       $a1, $s5, -0x7350
    ctx->pc = 0x26c704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294937776));
    // 0x26c708: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C708u;
    SET_GPR_U32(ctx, 31, 0x26C710u);
    ctx->pc = 0x26C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C708u;
    // 0x26c70c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C708u, 0x26C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C710u;
label_26c710:
    // 0x26c710: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x26C710u;
    {
        const bool branch_taken_0x26c710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C710u;
        // 0x26c714: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c710) {
            ctx->pc = 0x26C6D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c6d4;
        }
    }
    ctx->pc = 0x26C718u;
label_26c718:
    // 0x26c718: 0x1622ffdb  bne         $s1, $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x26C718u;
    {
        const bool branch_taken_0x26c718 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C718u;
        // 0x26c71c: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c718) {
            ctx->pc = 0x26C688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c688;
        }
    }
    ctx->pc = 0x26C720u;
    // 0x26c720: 0x26a58cb0  addiu       $a1, $s5, -0x7350
    ctx->pc = 0x26c720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294937776));
    // 0x26c724: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c728: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C728u;
    SET_GPR_U32(ctx, 31, 0x26C730u);
    ctx->pc = 0x26C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C728u;
    // 0x26c72c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C728u, 0x26C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C730u;
label_26c730:
    // 0x26c730: 0x12c00033  beqz        $s6, . + 4 + (0x33 << 2)
    ctx->pc = 0x26C730u;
    {
        const bool branch_taken_0x26c730 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C730u;
        // 0x26c734: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c730) {
            ctx->pc = 0x26C800u;
            goto label_26c800;
        }
    }
    ctx->pc = 0x26C738u;
    // 0x26c738: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c73c: 0x24a58cd8  addiu       $a1, $a1, -0x7328
    ctx->pc = 0x26c73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937816));
    // 0x26c740: 0x27d0002c  addiu       $s0, $fp, 0x2C
    ctx->pc = 0x26c740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 44));
    // 0x26c744: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C744u;
    SET_GPR_U32(ctx, 31, 0x26C74Cu);
    ctx->pc = 0x26C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C744u;
    // 0x26c748: 0x27d4006c  addiu       $s4, $fp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C744u, 0x26C74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C74Cu;
label_26c74c:
    // 0x26c74c: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x26c74cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
    // 0x26c750: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x26c750u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x26c754: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x26c754u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c758: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26C758u;
    {
        const bool branch_taken_0x26c758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C758u;
        // 0x26c75c: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c758) {
            ctx->pc = 0x26C7ACu;
            goto label_26c7ac;
        }
    }
    ctx->pc = 0x26C760u;
label_26c760:
    // 0x26c760: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26C760u;
    {
        const bool branch_taken_0x26c760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C760u;
        // 0x26c764: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c760) {
            ctx->pc = 0x26C808u;
            goto label_26c808;
        }
    }
    ctx->pc = 0x26C768u;
    // 0x26c768: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c76c: 0x92120000  lbu         $s2, 0x0($s0)
    ctx->pc = 0x26c76cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c770: 0x26c58cb8  addiu       $a1, $s6, -0x7348
    ctx->pc = 0x26c770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294937784));
    // 0x26c774: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C774u;
    SET_GPR_U32(ctx, 31, 0x26C77Cu);
    ctx->pc = 0x26C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C774u;
    // 0x26c778: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C774u, 0x26C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C77Cu;
label_26c77c:
    // 0x26c77c: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x26c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x26c780: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x26c780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26c784: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x26C784u;
    {
        const bool branch_taken_0x26c784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C784u;
        // 0x26c788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c784) {
            ctx->pc = 0x26C808u;
            goto label_26c808;
        }
    }
    ctx->pc = 0x26C78Cu;
    // 0x26c78c: 0xc09b4d2  jal         func_26D348
    ctx->pc = 0x26C78Cu;
    SET_GPR_U32(ctx, 31, 0x26C794u);
    ctx->pc = 0x26C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C78Cu;
    // 0x26c790: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D348u, 0x26C78Cu, 0x26C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C794u;
label_26c794:
    // 0x26c794: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x26C794u;
    {
        const bool branch_taken_0x26c794 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C794u;
        // 0x26c798: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c794) {
            ctx->pc = 0x26C818u;
            goto label_26c818;
        }
    }
    ctx->pc = 0x26C79Cu;
    // 0x26c79c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C79Cu;
    SET_GPR_U32(ctx, 31, 0x26C7A4u);
    ctx->pc = 0x26C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C79Cu;
    // 0x26c7a0: 0x26a58cb0  addiu       $a1, $s5, -0x7350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294937776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C79Cu, 0x26C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7A4u;
label_26c7a4:
    // 0x26c7a4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x26c7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x26c7a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26c7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26c7ac:
    // 0x26c7ac: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x26c7acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x26c7b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26C7B0u;
    {
        const bool branch_taken_0x26c7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7B0u;
        // 0x26c7b4: 0x2909823  subu        $s3, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7b0) {
            ctx->pc = 0x26C800u;
            goto label_26c800;
        }
    }
    ctx->pc = 0x26C7B8u;
    // 0x26c7b8: 0x82110000  lb          $s1, 0x0($s0)
    ctx->pc = 0x26c7b8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c7bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c7c0: 0x27c58ca0  addiu       $a1, $fp, -0x7360
    ctx->pc = 0x26c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294937760));
    // 0x26c7c4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C7C4u;
    SET_GPR_U32(ctx, 31, 0x26C7CCu);
    ctx->pc = 0x26C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7C4u;
    // 0x26c7c8: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C7C4u, 0x26C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7CCu;
label_26c7cc:
    // 0x26c7cc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C7CCu;
    {
        const bool branch_taken_0x26c7cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7CCu;
        // 0x26c7d0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7cc) {
            ctx->pc = 0x26C7E8u;
            goto label_26c7e8;
        }
    }
    ctx->pc = 0x26C7D4u;
    // 0x26c7d4: 0x26a58cb0  addiu       $a1, $s5, -0x7350
    ctx->pc = 0x26c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294937776));
    // 0x26c7d8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C7D8u;
    SET_GPR_U32(ctx, 31, 0x26C7E0u);
    ctx->pc = 0x26C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7D8u;
    // 0x26c7dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C7D8u, 0x26C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C7E0u;
label_26c7e0:
    // 0x26c7e0: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x26C7E0u;
    {
        const bool branch_taken_0x26c7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7E0u;
        // 0x26c7e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7e0) {
            ctx->pc = 0x26C7ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c7ac;
        }
    }
    ctx->pc = 0x26C7E8u;
label_26c7e8:
    // 0x26c7e8: 0x1637ffdd  bne         $s1, $s7, . + 4 + (-0x23 << 2)
    ctx->pc = 0x26C7E8u;
    {
        const bool branch_taken_0x26c7e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        ctx->pc = 0x26C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C7E8u;
        // 0x26c7ec: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7e8) {
            ctx->pc = 0x26C760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26c760;
        }
    }
    ctx->pc = 0x26C7F0u;
    // 0x26c7f0: 0x26a58cb0  addiu       $a1, $s5, -0x7350
    ctx->pc = 0x26c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294937776));
    // 0x26c7f4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c7f8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C7F8u;
    SET_GPR_U32(ctx, 31, 0x26C800u);
    ctx->pc = 0x26C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C7F8u;
    // 0x26c7fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C7F8u, 0x26C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C800u;
label_26c800:
    // 0x26c800: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26C800u;
    {
        const bool branch_taken_0x26c800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C800u;
        // 0x26c804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c800) {
            ctx->pc = 0x26C830u;
            goto label_26c830;
        }
    }
    ctx->pc = 0x26C808u;
label_26c808:
    // 0x26c808: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c80c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26C810u;
    {
        const bool branch_taken_0x26c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C810u;
        // 0x26c814: 0x24a58ce8  addiu       $a1, $a1, -0x7318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c810) {
            ctx->pc = 0x26C824u;
            goto label_26c824;
        }
    }
    ctx->pc = 0x26C818u;
label_26c818:
    // 0x26c818: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26c818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26c81c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c820: 0x24a58d18  addiu       $a1, $a1, -0x72E8
    ctx->pc = 0x26c820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937880));
label_26c824:
    // 0x26c824: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26C824u;
    SET_GPR_U32(ctx, 31, 0x26C82Cu);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26C824u, 0x26C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C82Cu;
label_26c82c:
    // 0x26c82c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26c830:
    // 0x26c830: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26c830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26c834: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x26c834u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26c838: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x26c838u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c83c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x26c83cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c840: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26c840u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c844: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26c844u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c848: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26c848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c84c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26c84cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c850: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26c850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c858: 0x3e00008  jr          $ra
    ctx->pc = 0x26C858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C858u;
        // 0x26c85c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C860u;
}
