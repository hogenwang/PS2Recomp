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

// Function: sub_001C5770
// Address: 0x1c5770 - 0x1c5968
void sub_001C5770_0x1c5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5770_0x1c5770");
#endif

    switch (ctx->pc) {
        case 0x1c57d0u: goto label_1c57d0;
        case 0x1c57fcu: goto label_1c57fc;
        case 0x1c5810u: goto label_1c5810;
        case 0x1c5818u: goto label_1c5818;
        case 0x1c5824u: goto label_1c5824;
        case 0x1c5838u: goto label_1c5838;
        case 0x1c5848u: goto label_1c5848;
        case 0x1c5864u: goto label_1c5864;
        case 0x1c586cu: goto label_1c586c;
        case 0x1c58a0u: goto label_1c58a0;
        case 0x1c58e8u: goto label_1c58e8;
        case 0x1c5910u: goto label_1c5910;
        default: break;
    }

    ctx->pc = 0x1c5770u;

    // 0x1c5770: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1c5770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1c5774: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c5774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c5778: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x1c5778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x1c577c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c577cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5780: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1c5780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1c5784: 0x2443ef50  addiu       $v1, $v0, -0x10B0
    ctx->pc = 0x1c5784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
    // 0x1c5788: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x1c5788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x1c578c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x1c578cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x1c5790: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x1c5790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x1c5794: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x1c5794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x1c5798: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x1c5798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x1c579c: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x1c579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x1c57a0: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x1c57a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x1c57a4: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x1c57a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x1c57a8: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x1c57a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c57ac: 0x12600030  beqz        $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C57ACu;
    {
        const bool branch_taken_0x1c57ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57ACu;
        // 0x1c57b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57ac) {
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C57B4u;
    // 0x1c57b4: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x1c57b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c57b8: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C57B8u;
    {
        const bool branch_taken_0x1c57b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57B8u;
        // 0x1c57bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57b8) {
            ctx->pc = 0x1C5854u;
            goto label_1c5854;
        }
    }
    ctx->pc = 0x1C57C0u;
    // 0x1c57c0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1c57c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57c4: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x1c57c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
    // 0x1c57c8: 0x3c17003f  lui         $s7, 0x3F
    ctx->pc = 0x1c57c8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63 << 16));
    // 0x1c57cc: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1c57ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c57d0:
    // 0x1c57d0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1c57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c57d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c57d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57d8: 0x8eb00008  lw          $s0, 0x8($s5)
    ctx->pc = 0x1c57d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1c57dc: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1c57dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c57e0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1c57e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1c57e4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1c57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c57e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c57e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c57ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c57ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c57f0: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1c57f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c57f4: 0xc071426  jal         func_1C5098
    ctx->pc = 0x1C57F4u;
    SET_GPR_U32(ctx, 31, 0x1C57FCu);
    ctx->pc = 0x1C57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57F4u;
    // 0x1c57f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5098u, 0x1C57F4u, 0x1C57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57FCu;
label_1c57fc:
    // 0x1c57fc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c57fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5800: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C5800u;
    {
        const bool branch_taken_0x1c5800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5800u;
        // 0x1c5804: 0x24046900  addiu       $a0, $zero, 0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5800) {
            ctx->pc = 0x1C5848u;
            goto label_1c5848;
        }
    }
    ctx->pc = 0x1C5808u;
    // 0x1c5808: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5808u;
    SET_GPR_U32(ctx, 31, 0x1C5810u);
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C5808u, 0x1C5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5810u;
label_1c5810:
    // 0x1c5810: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1C5810u;
    SET_GPR_U32(ctx, 31, 0x1C5818u);
    ctx->pc = 0x1C5814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5810u;
    // 0x1c5814: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1C5810u, 0x1C5818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5818u;
label_1c5818:
    // 0x1c5818: 0x24046901  addiu       $a0, $zero, 0x6901
    ctx->pc = 0x1c5818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26881));
    // 0x1c581c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C581Cu;
    SET_GPR_U32(ctx, 31, 0x1C5824u);
    ctx->pc = 0x1C5820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C581Cu;
    // 0x1c5820: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C581Cu, 0x1C5824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5824u;
label_1c5824:
    // 0x1c5824: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c5824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5828: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5828u;
    {
        const bool branch_taken_0x1c5828 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5828u;
        // 0x1c582c: 0x26e4a4e0  addiu       $a0, $s7, -0x5B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5828) {
            ctx->pc = 0x1C5840u;
            goto label_1c5840;
        }
    }
    ctx->pc = 0x1C5830u;
    // 0x1c5830: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C5830u;
    SET_GPR_U32(ctx, 31, 0x1C5838u);
    ctx->pc = 0x1C5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5830u;
    // 0x1c5834: 0x27c4a4b8  addiu       $a0, $fp, -0x5B48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294943928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C5830u, 0x1C5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5838u;
label_1c5838:
    // 0x1c5838: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5838u;
    {
        const bool branch_taken_0x1c5838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5838u;
        // 0x1c583c: 0x234102b  sltu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5838) {
            ctx->pc = 0x1C584Cu;
            goto label_1c584c;
        }
    }
    ctx->pc = 0x1C5840u;
label_1c5840:
    // 0x1c5840: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C5840u;
    SET_GPR_U32(ctx, 31, 0x1C5848u);
    ctx->pc = 0x1C5844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5840u;
    // 0x1c5844: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C5840u, 0x1C5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5848u;
label_1c5848:
    // 0x1c5848: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x1c5848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1c584c:
    // 0x1c584c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1C584Cu;
    {
        const bool branch_taken_0x1c584c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C584Cu;
        // 0x1c5850: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c584c) {
            ctx->pc = 0x1C57D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c57d0;
        }
    }
    ctx->pc = 0x1C5854u;
label_1c5854:
    // 0x1c5854: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c5854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c5858: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c5858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c585c: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C585Cu;
    SET_GPR_U32(ctx, 31, 0x1C5864u);
    ctx->pc = 0x1C5860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C585Cu;
    // 0x1c5860: 0x2484a500  addiu       $a0, $a0, -0x5B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C585Cu, 0x1C5864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5864u;
label_1c5864:
    // 0x1c5864: 0xc07165a  jal         func_1C5968
    ctx->pc = 0x1C5864u;
    SET_GPR_U32(ctx, 31, 0x1C586Cu);
    ctx->pc = 0x1C5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5968u, 0x1C5864u, 0x1C586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C586Cu;
label_1c586c:
    // 0x1c586c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5870:
    // 0x1c5870: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1c5870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c5874: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x1c5874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1c5878: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x1c5878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c587c: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x1c587cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c5880: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x1c5880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c5884: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x1c5884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1c5888: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x1c5888u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c588c: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x1c588cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1c5890: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x1c5890u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c5894: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x1c5894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1c5898: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5898u;
        // 0x1c589c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C58A0u;
label_1c58a0:
    // 0x1c58a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c58a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c58a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c58a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c58a8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c58a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c58acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c58b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c58b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c58b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c58b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c58b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c58bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c58c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c58c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c58c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1c58c8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c58c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c58ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c58d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c58d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c58d4: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C58D4u;
    {
        const bool branch_taken_0x1c58d4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1C58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58D4u;
        // 0x1c58d8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58d4) {
            ctx->pc = 0x1C5938u;
            goto label_1c5938;
        }
    }
    ctx->pc = 0x1C58DCu;
    // 0x1c58dc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c58e0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1c58e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58e4: 0x2455ef50  addiu       $s5, $v0, -0x10B0
    ctx->pc = 0x1c58e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
label_1c58e8:
    // 0x1c58e8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1c58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c58ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c58ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58f0: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x1c58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1c58f4: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1c58f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c58f8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1c58f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1c58fc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1c58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c5900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c5900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c5904: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c5904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c5908: 0xc071488  jal         func_1C5220
    ctx->pc = 0x1C5908u;
    SET_GPR_U32(ctx, 31, 0x1C5910u);
    ctx->pc = 0x1C590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5908u;
    // 0x1c590c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5220u, 0x1C5908u, 0x1C5910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5910u;
label_1c5910:
    // 0x1c5910: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5910u;
    {
        const bool branch_taken_0x1c5910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5910u;
        // 0x1c5914: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5910) {
            ctx->pc = 0x1C5930u;
            goto label_1c5930;
        }
    }
    ctx->pc = 0x1C5918u;
    // 0x1c5918: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c5918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c591c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c591cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1c5920: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c5920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c5924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5924u;
    {
        const bool branch_taken_0x1c5924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5924u;
        // 0x1c5928: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5924) {
            ctx->pc = 0x1C5940u;
            goto label_1c5940;
        }
    }
    ctx->pc = 0x1C592Cu;
    // 0x1c592c: 0x0  nop
    ctx->pc = 0x1c592cu;
    // NOP
label_1c5930:
    // 0x1c5930: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C5930u;
    {
        const bool branch_taken_0x1c5930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5930u;
        // 0x1c5934: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5930) {
            ctx->pc = 0x1C58E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c58e8;
        }
    }
    ctx->pc = 0x1C5938u;
label_1c5938:
    // 0x1c5938: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1c5938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1c593c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1c593cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1c5940:
    // 0x1c5940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c5948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c594c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c594cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c5950: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c5950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5954: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c5954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5958: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c5958u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c595c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c595cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5960: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5960u;
        // 0x1c5964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5968u;
}
