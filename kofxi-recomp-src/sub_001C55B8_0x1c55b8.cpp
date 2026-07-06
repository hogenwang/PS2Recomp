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

// Function: sub_001C55B8
// Address: 0x1c55b8 - 0x1c5770
void sub_001C55B8_0x1c55b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C55B8_0x1c55b8");
#endif

    switch (ctx->pc) {
        case 0x1c5608u: goto label_1c5608;
        case 0x1c5628u: goto label_1c5628;
        case 0x1c5654u: goto label_1c5654;
        case 0x1c5668u: goto label_1c5668;
        case 0x1c5674u: goto label_1c5674;
        case 0x1c5680u: goto label_1c5680;
        case 0x1c569cu: goto label_1c569c;
        case 0x1c56b4u: goto label_1c56b4;
        case 0x1c56d0u: goto label_1c56d0;
        case 0x1c56d8u: goto label_1c56d8;
        case 0x1c56e0u: goto label_1c56e0;
        case 0x1c56e8u: goto label_1c56e8;
        case 0x1c56f0u: goto label_1c56f0;
        case 0x1c5700u: goto label_1c5700;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c5724u: goto label_1c5724;
        case 0x1c573cu: goto label_1c573c;
        default: break;
    }

    ctx->pc = 0x1c55b8u;

    // 0x1c55b8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1c55b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1c55bc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c55bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c55c0: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x1c55c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x1c55c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c55c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55c8: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x1c55c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x1c55cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c55ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c55d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c55d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55d8: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x1c55d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x1c55dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c55dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55e0: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x1c55e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x1c55e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c55e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55e8: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x1c55e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x1c55ec: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1c55ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1c55f0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x1c55f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x1c55f4: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x1c55f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x1c55f8: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x1c55f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x1c55fc: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x1c55fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x1c5600: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C5600u;
    SET_GPR_U32(ctx, 31, 0x1C5608u);
    ctx->pc = 0x1C5604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5600u;
    // 0x1c5604: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C5600u, 0x1C5608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5608u;
label_1c5608:
    // 0x1c5608: 0x2a83000e  slti        $v1, $s4, 0xE
    ctx->pc = 0x1c5608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1c560c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1c560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c5610: 0x43a00a  movz        $s4, $v0, $v1
    ctx->pc = 0x1c5610u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x1c5614: 0x5a800040  blezl       $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C5614u;
    {
        const bool branch_taken_0x1c5614 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1c5614) {
            ctx->pc = 0x1C5618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5614u;
            // 0x1c5618: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5718u;
            goto label_1c5718;
        }
    }
    ctx->pc = 0x1C561Cu;
    // 0x1c561c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c5620: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1c5620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5624: 0x2457ef50  addiu       $s7, $v0, -0x10B0
    ctx->pc = 0x1c5624u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
label_1c5628:
    // 0x1c5628: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x1c5628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x1c562c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c562cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5630: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x1c5630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1c5634: 0x732018  mult        $a0, $v1, $s3
    ctx->pc = 0x1c5634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c5638: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c5638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c563c: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x1c563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1c5640: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c5640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c5644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c5644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5648: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x1c5648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1c564c: 0xc071426  jal         func_1C5098
    ctx->pc = 0x1C564Cu;
    SET_GPR_U32(ctx, 31, 0x1C5654u);
    ctx->pc = 0x1C5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C564Cu;
    // 0x1c5650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5098u, 0x1C564Cu, 0x1C5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5654u;
label_1c5654:
    // 0x1c5654: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1c5654u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c5658: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C5658u;
    {
        const bool branch_taken_0x1c5658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5658u;
        // 0x1c565c: 0x24046600  addiu       $a0, $zero, 0x6600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5658) {
            ctx->pc = 0x1C5708u;
            goto label_1c5708;
        }
    }
    ctx->pc = 0x1C5660u;
    // 0x1c5660: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5660u;
    SET_GPR_U32(ctx, 31, 0x1C5668u);
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C5660u, 0x1C5668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5668u;
label_1c5668:
    // 0x1c5668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c5668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c566c: 0xc070590  jal         func_1C1640
    ctx->pc = 0x1C566Cu;
    SET_GPR_U32(ctx, 31, 0x1C5674u);
    ctx->pc = 0x1C5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C566Cu;
    // 0x1c5670: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1640u, 0x1C566Cu, 0x1C5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5674u;
label_1c5674:
    // 0x1c5674: 0x24046601  addiu       $a0, $zero, 0x6601
    ctx->pc = 0x1c5674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26113));
    // 0x1c5678: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5678u;
    SET_GPR_U32(ctx, 31, 0x1C5680u);
    ctx->pc = 0x1C567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5678u;
    // 0x1c567c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C5678u, 0x1C5680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5680u;
label_1c5680:
    // 0x1c5680: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c5680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5684: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5684u;
    {
        const bool branch_taken_0x1c5684 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5684u;
        // 0x1c5688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5684) {
            ctx->pc = 0x1C56A8u;
            goto label_1c56a8;
        }
    }
    ctx->pc = 0x1C568Cu;
    // 0x1c568c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1c5690: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1c5690u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1c5694: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C5694u;
    SET_GPR_U32(ctx, 31, 0x1C569Cu);
    ctx->pc = 0x1C5698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5694u;
    // 0x1c5698: 0x2444a428  addiu       $a0, $v0, -0x5BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47D0u, 0x1C5694u, 0x1C569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C569Cu;
label_1c569c:
    // 0x1c569c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C569Cu;
    {
        const bool branch_taken_0x1c569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C569Cu;
        // 0x1c56a0: 0x274102a  slt         $v0, $s3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c569c) {
            ctx->pc = 0x1C570Cu;
            goto label_1c570c;
        }
    }
    ctx->pc = 0x1C56A4u;
    // 0x1c56a4: 0x0  nop
    ctx->pc = 0x1c56a4u;
    // NOP
label_1c56a8:
    // 0x1c56a8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x1c56a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x1c56ac: 0xc0711be  jal         func_1C46F8
    ctx->pc = 0x1C56ACu;
    SET_GPR_U32(ctx, 31, 0x1C56B4u);
    ctx->pc = 0x1C56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56ACu;
    // 0x1c56b0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F8u, 0x1C56ACu, 0x1C56B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56B4u;
label_1c56b4:
    // 0x1c56b4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1c56b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c56b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c56bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c56bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c56c0: 0x2464a450  addiu       $a0, $v1, -0x5BB0
    ctx->pc = 0x1c56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943824));
    // 0x1c56c4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1c56c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1c56c8: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C56C8u;
    SET_GPR_U32(ctx, 31, 0x1C56D0u);
    ctx->pc = 0x1C56CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56C8u;
    // 0x1c56cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47D0u, 0x1C56C8u, 0x1C56D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56D0u;
label_1c56d0:
    // 0x1c56d0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C56D0u;
    SET_GPR_U32(ctx, 31, 0x1C56D8u);
    ctx->pc = 0x1C56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56D0u;
    // 0x1c56d4: 0x24046800  addiu       $a0, $zero, 0x6800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C56D0u, 0x1C56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56D8u;
label_1c56d8:
    // 0x1c56d8: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1C56D8u;
    SET_GPR_U32(ctx, 31, 0x1C56E0u);
    ctx->pc = 0x1C56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56D8u;
    // 0x1c56dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1C56D8u, 0x1C56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56E0u;
label_1c56e0:
    // 0x1c56e0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C56E0u;
    SET_GPR_U32(ctx, 31, 0x1C56E8u);
    ctx->pc = 0x1C56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56E0u;
    // 0x1c56e4: 0x24046801  addiu       $a0, $zero, 0x6801 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C56E0u, 0x1C56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56E8u;
label_1c56e8:
    // 0x1c56e8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C56E8u;
    SET_GPR_U32(ctx, 31, 0x1C56F0u);
    ctx->pc = 0x1C56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56E8u;
    // 0x1c56ec: 0x24046700  addiu       $a0, $zero, 0x6700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C56E8u, 0x1C56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56F0u;
label_1c56f0:
    // 0x1c56f0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c56f4: 0x8c45ef60  lw          $a1, -0x10A0($v0)
    ctx->pc = 0x1c56f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963040)));
    // 0x1c56f8: 0xc070590  jal         func_1C1640
    ctx->pc = 0x1C56F8u;
    SET_GPR_U32(ctx, 31, 0x1C5700u);
    ctx->pc = 0x1C56FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56F8u;
    // 0x1c56fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1640u, 0x1C56F8u, 0x1C5700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5700u;
label_1c5700:
    // 0x1c5700: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5700u;
    SET_GPR_U32(ctx, 31, 0x1C5708u);
    ctx->pc = 0x1C5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5700u;
    // 0x1c5704: 0x24046701  addiu       $a0, $zero, 0x6701 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26369));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C5700u, 0x1C5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5708u;
label_1c5708:
    // 0x1c5708: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x1c5708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1c570c:
    // 0x1c570c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1C570Cu;
    {
        const bool branch_taken_0x1c570c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C570Cu;
        // 0x1c5710: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c570c) {
            ctx->pc = 0x1C5628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5628;
        }
    }
    ctx->pc = 0x1C5714u;
    // 0x1c5714: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c5714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c5718:
    // 0x1c5718: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c5718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c571c: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C571Cu;
    SET_GPR_U32(ctx, 31, 0x1C5724u);
    ctx->pc = 0x1C5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C571Cu;
    // 0x1c5720: 0x2484a470  addiu       $a0, $a0, -0x5B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47D0u, 0x1C571Cu, 0x1C5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5724u;
label_1c5724:
    // 0x1c5724: 0x1bc00006  blez        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5724u;
    {
        const bool branch_taken_0x1c5724 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x1C5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5724u;
        // 0x1c5728: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5724) {
            ctx->pc = 0x1C5740u;
            goto label_1c5740;
        }
    }
    ctx->pc = 0x1C572Cu;
    // 0x1c572c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c572cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c5730: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c5730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5734: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C5734u;
    SET_GPR_U32(ctx, 31, 0x1C573Cu);
    ctx->pc = 0x1C5738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5734u;
    // 0x1c5738: 0x2484a488  addiu       $a0, $a0, -0x5B78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C5734u, 0x1C573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C573Cu;
label_1c573c:
    // 0x1c573c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1c573cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c5740:
    // 0x1c5740: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1c5740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c5744: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x1c5744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1c5748: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x1c5748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c574c: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x1c574cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c5750: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x1c5750u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c5754: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x1c5754u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1c5758: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x1c5758u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1c575c: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x1c575cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1c5760: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x1c5760u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1c5764: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x1c5764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1c5768: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5768u;
        // 0x1c576c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5770u;
}
