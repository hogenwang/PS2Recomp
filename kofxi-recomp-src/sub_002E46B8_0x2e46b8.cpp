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

// Function: sub_002E46B8
// Address: 0x2e46b8 - 0x2e4870
void sub_002E46B8_0x2e46b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E46B8_0x2e46b8");
#endif

    switch (ctx->pc) {
        case 0x2e4704u: goto label_2e4704;
        case 0x2e4708u: goto label_2e4708;
        case 0x2e4718u: goto label_2e4718;
        case 0x2e4754u: goto label_2e4754;
        case 0x2e4764u: goto label_2e4764;
        case 0x2e476cu: goto label_2e476c;
        case 0x2e477cu: goto label_2e477c;
        case 0x2e4780u: goto label_2e4780;
        case 0x2e4784u: goto label_2e4784;
        case 0x2e478cu: goto label_2e478c;
        case 0x2e4798u: goto label_2e4798;
        case 0x2e47b0u: goto label_2e47b0;
        case 0x2e47c4u: goto label_2e47c4;
        case 0x2e47d4u: goto label_2e47d4;
        case 0x2e47d8u: goto label_2e47d8;
        case 0x2e47e4u: goto label_2e47e4;
        case 0x2e47f4u: goto label_2e47f4;
        case 0x2e47f8u: goto label_2e47f8;
        case 0x2e4848u: goto label_2e4848;
        default: break;
    }

    ctx->pc = 0x2e46b8u;

    // 0x2e46b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e46b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e46bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e46bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e46c0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2e46c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e46c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e46c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e46c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e46c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e46ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e46d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e46d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e46d8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e46d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e46dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e46e0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2e46e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e46e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e46e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e46e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e46e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e46ec: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e46f0: 0x24634738  addiu       $v1, $v1, 0x4738
    ctx->pc = 0x2e46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18232));
    // 0x2e46f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e46f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E46F8u;
    {
        const bool branch_taken_0x2e46f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e46f8) {
            ctx->pc = 0x2E4718u;
            goto label_2e4718;
        }
    }
    ctx->pc = 0x2E4700u;
    // 0x2e4700: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e4700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
label_2e4704:
    // 0x2e4704: 0x2484474c  addiu       $a0, $a0, 0x474C
    ctx->pc = 0x2e4704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18252));
label_2e4708:
    // 0x2e4708: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e4708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e470c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e470cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e4710: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E4710u;
    SET_GPR_U32(ctx, 31, 0x2E4718u);
    ctx->pc = 0x2E4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4710u;
    // 0x2e4714: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E4710u, 0x2E4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4718u;
label_2e4718:
    // 0x2e4718: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E4718u;
    {
        const bool branch_taken_0x2e4718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4718) {
            ctx->pc = 0x2E474Cu;
            goto label_2e474c;
        }
    }
    ctx->pc = 0x2E4720u;
    // 0x2e4720: 0xa1a24c41  sb          $v0, 0x4C41($t5)
    ctx->pc = 0x2e4720u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 19521), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e4724: 0xa08a55d9  sb          $t2, 0x55D9($a0)
    ctx->pc = 0x2e4724u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21977), (uint8_t)GPR_U32(ctx, 10));
    // 0x2e4728: 0xfd72d9e2  sd          $s2, -0x261E($t3)
    ctx->pc = 0x2e4728u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 4294957538), GPR_U64(ctx, 18));
    // 0x2e472c: 0x8f351595  lw          $s5, 0x1595($t9)
    ctx->pc = 0x2e472cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 5525)));
    // 0x2e4730: 0xa1851ef1  sb          $a1, 0x1EF1($t4)
    ctx->pc = 0x2e4730u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 7921), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e4734: 0xfdb0a562  sd          $s0, -0x5A9E($t5)
    ctx->pc = 0x2e4734u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294944098), GPR_U64(ctx, 16));
    // 0x2e4738: 0x0  nop
    ctx->pc = 0x2e4738u;
    // NOP
    // 0x2e473c: 0xd668f466  ldc1        $f8, -0xB9A($s3)
    ctx->pc = 0x2e473cu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2E473C raw=0xD668F466");
    // 0x2e4740: 0xcb1ca7f0  lwc2        $28, -0x5810($t8)
    ctx->pc = 0x2e4740u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E4740 raw=0xCB1CA7F0");
    // 0x2e4744: 0xd668f4ca  ldc1        $f8, -0xB36($s3)
    ctx->pc = 0x2e4744u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2E4744 raw=0xD668F4CA");
    // 0x2e4748: 0x0  nop
    ctx->pc = 0x2e4748u;
    // NOP
label_2e474c:
    // 0x2e474c: 0xc0b8ff4  jal         func_2E3FD0
    ctx->pc = 0x2E474Cu;
    SET_GPR_U32(ctx, 31, 0x2E4754u);
    ctx->pc = 0x2E4750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E474Cu;
    // 0x2e4750: 0xaee225ea  sw          $v0, 0x25EA($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 9706), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3FD0u, 0x2E474Cu, 0x2E4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4754u;
label_2e4754:
    // 0x2e4754: 0xaeb625ea  sw          $s6, 0x25EA($s5)
    ctx->pc = 0x2e4754u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 9706), GPR_U32(ctx, 22));
    // 0x2e4758: 0x6e662deb  ldr         $a2, 0x2DEB($s3)
    ctx->pc = 0x2e4758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 11755); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2e475c: 0xea62def  jal         func_A98B7BC
    ctx->pc = 0x2E475Cu;
    SET_GPR_U32(ctx, 31, 0x2E4764u);
    ctx->pc = 0x2E4760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E475Cu;
    // 0x2e4760: 0xaee225ea  sw          $v0, 0x25EA($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 9706), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA98B7BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA98B7BCu, 0x2E475Cu, 0x2E4764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4764u;
label_2e4764:
    // 0x2e4764: 0xc04485c  jal         func_112170
    ctx->pc = 0x2E4764u;
    SET_GPR_U32(ctx, 31, 0x2E476Cu);
    ctx->pc = 0x2E4768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4764u;
    // 0x2e4768: 0x2a262d4f  slti        $a2, $s1, 0x2D4F (Delay Slot)
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11599) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x2E4764u, 0x2E476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E476Cu;
label_2e476c:
    // 0x2e476c: 0xaeb725ea  sw          $s7, 0x25EA($s5)
    ctx->pc = 0x2e476cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 9706), GPR_U32(ctx, 23));
    // 0x2e4770: 0x2e6629eb  sltiu       $a2, $s3, 0x29EB
    ctx->pc = 0x2e4770u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10731) ? 1 : 0);
    // 0x2e4774: 0xaee229ea  sw          $v0, 0x29EA($s7)
    ctx->pc = 0x2e4774u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 10730), GPR_U32(ctx, 2));
    // 0x2e4778: 0xa79cd43  j           func_9E7350C
label_2e477c:
    if (ctx->pc == 0x2E477Cu) {
        ctx->pc = 0x2E477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4778u;
        // 0x2e477c: 0xc04495e  jal         func_112578 (Delay Slot)
        // JAL 0x112578 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4780u;
        goto label_2e4780;
    }
    ctx->pc = 0x2E4778u;
    ctx->pc = 0x2E477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4778u;
    // 0x2e477c: 0xc04495e  jal         func_112578 (Delay Slot)
    // JAL 0x112578 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x9E7350Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9E7350Cu, 0x2E4778u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2E4780u;
label_2e4780:
    // 0x2e4780: 0xaea02dea  sw          $zero, 0x2DEA($s5)
    ctx->pc = 0x2e4780u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 11754), GPR_U32(ctx, 0));
label_2e4784:
    // 0x2e4784: 0xe2625ec  jal         func_89897B0
    ctx->pc = 0x2E4784u;
    SET_GPR_U32(ctx, 31, 0x2E478Cu);
    ctx->pc = 0x2E4788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4784u;
    // 0x2e4788: 0xaee321ea  sw          $v1, 0x21EA($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 8682), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89897B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89897B0u, 0x2E4784u, 0x2E478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E478Cu;
label_2e478c:
    // 0x2e478c: 0xaee229ea  sw          $v0, 0x29EA($s7)
    ctx->pc = 0x2e478cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 10730), GPR_U32(ctx, 2));
    // 0x2e4790: 0xc0449ee  jal         func_1127B8
    ctx->pc = 0x2E4790u;
    SET_GPR_U32(ctx, 31, 0x2E4798u);
    ctx->pc = 0x2E4794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4790u;
    // 0x2e4794: 0xa262d2b  j           func_898B4AC (Delay Slot)
    // J 0x898B4AC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127B8u, 0x2E4790u, 0x2E4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4798u;
label_2e4798:
    // 0x2e4798: 0xa262d8b  j           func_898B62C
    ctx->pc = 0x2E4798u;
    ctx->pc = 0x2E479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4798u;
    // 0x2e479c: 0x4c26258d  .word       0x4C26258D                   # INVALID     $at, $a2, 0x258D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2E479C raw=0x4C26258D");
    ctx->in_delay_slot = false;
    ctx->pc = 0x898B62Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x898B62Cu, 0x2E4798u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2E47A0u;
    // 0x2e47a0: 0xa79cd5f  j           func_9E7357C
    ctx->pc = 0x2E47A0u;
    ctx->pc = 0x2E47A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47A0u;
    // 0x2e47a4: 0xaee229ea  sw          $v0, 0x29EA($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 10730), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9E7357Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9E7357Cu, 0x2E47A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2E47A8u;
    // 0x2e47a8: 0xc04495e  jal         func_112578
    ctx->pc = 0x2E47A8u;
    SET_GPR_U32(ctx, 31, 0x2E47B0u);
    ctx->pc = 0x2E47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47A8u;
    // 0x2e47ac: 0xaea02dea  sw          $zero, 0x2DEA($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 11754), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112578u, 0x2E47A8u, 0x2E47B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47B0u;
label_2e47b0:
    // 0x2e47b0: 0xae2625ee  sw          $a2, 0x25EE($s1)
    ctx->pc = 0x2e47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9710), GPR_U32(ctx, 6));
    // 0x2e47b4: 0xaee33dea  sw          $v1, 0x3DEA($s7)
    ctx->pc = 0x2e47b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 15850), GPR_U32(ctx, 3));
    // 0x2e47b8: 0xaee229ea  sw          $v0, 0x29EA($s7)
    ctx->pc = 0x2e47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 10730), GPR_U32(ctx, 2));
    // 0x2e47bc: 0xc0449ee  jal         func_1127B8
    ctx->pc = 0x2E47BCu;
    SET_GPR_U32(ctx, 31, 0x2E47C4u);
    ctx->pc = 0x2E47C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47BCu;
    // 0x2e47c0: 0xa262d3f  j           func_898B4FC (Delay Slot)
    // J 0x898B4FC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127B8u, 0x2E47BCu, 0x2E47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47C4u;
label_2e47c4:
    // 0x2e47c4: 0xa262d9f  j           func_898B67C
    ctx->pc = 0x2E47C4u;
    ctx->pc = 0x2E47C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47C4u;
    // 0x2e47c8: 0xec26258f  .word       0xEC26258F                   # INVALID     $at, $a2, 0x258F # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2E47C8 raw=0xEC26258F");
    ctx->in_delay_slot = false;
    ctx->pc = 0x898B67Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x898B67Cu, 0x2E47C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2E47CCu;
    // 0x2e47cc: 0xea62def  jal         func_A98B7BC
    ctx->pc = 0x2E47CCu;
    SET_GPR_U32(ctx, 31, 0x2E47D4u);
    ctx->pc = 0x2E47D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47CCu;
    // 0x2e47d0: 0xc044900  jal         func_112400 (Delay Slot)
    // JAL 0x112400 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA98B7BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA98B7BCu, 0x2E47CCu, 0x2E47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47D4u;
label_2e47d4:
    // 0x2e47d4: 0xaee229ea  sw          $v0, 0x29EA($s7)
    ctx->pc = 0x2e47d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 10730), GPR_U32(ctx, 2));
label_2e47d8:
    // 0x2e47d8: 0x6e2625ef  ldr         $a2, 0x25EF($s1)
    ctx->pc = 0x2e47d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 9711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2e47dc: 0xea62def  jal         func_A98B7BC
    ctx->pc = 0x2E47DCu;
    SET_GPR_U32(ctx, 31, 0x2E47E4u);
    ctx->pc = 0x2E47E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47DCu;
    // 0x2e47e0: 0xea39cfd0  swc2        $25, -0x3030($s1) (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x2E47E0 raw=0xEA39CFD0");
    ctx->in_delay_slot = false;
    ctx->pc = 0xA98B7BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA98B7BCu, 0x2E47DCu, 0x2E47E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47E4u;
label_2e47e4:
    // 0x2e47e4: 0xaeb32dea  sw          $s3, 0x2DEA($s5)
    ctx->pc = 0x2e47e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 11754), GPR_U32(ctx, 19));
    // 0x2e47e8: 0x6e6629ef  ldr         $a2, 0x29EF($s3)
    ctx->pc = 0x2e47e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 10735); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2e47ec: 0xea62def  jal         func_A98B7BC
    ctx->pc = 0x2E47ECu;
    SET_GPR_U32(ctx, 31, 0x2E47F4u);
    ctx->pc = 0x2E47F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47ECu;
    // 0x2e47f0: 0xc044900  jal         func_112400 (Delay Slot)
    // JAL 0x112400 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA98B7BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA98B7BCu, 0x2E47ECu, 0x2E47F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47F4u;
label_2e47f4:
    // 0x2e47f4: 0xaee229ea  sw          $v0, 0x29EA($s7)
    ctx->pc = 0x2e47f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 10730), GPR_U32(ctx, 2));
label_2e47f8:
    // 0x2e47f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E47F8u;
    {
        const bool branch_taken_0x2e47f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e47f8) {
            ctx->pc = 0x2E4828u;
            goto label_2e4828;
        }
    }
    ctx->pc = 0x2E4800u;
    // 0x2e4800: 0xa31bc9e1  sb          $k1, -0x361F($t8)
    ctx->pc = 0x2e4800u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 4294953441), (uint8_t)GPR_U32(ctx, 27));
    // 0x2e4804: 0x8d5aafa5  lw          $k0, -0x505B($t2)
    ctx->pc = 0x2e4804u;
    SET_GPR_S32(ctx, 26, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294946725)));
    // 0x2e4808: 0xff9fe6c2  sd          $ra, -0x193E($gp)
    ctx->pc = 0x2e4808u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294960834), GPR_U64(ctx, 31));
    // 0x2e480c: 0x25439c78  addiu       $v1, $t2, -0x6388
    ctx->pc = 0x2e480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294941816));
    // 0x2e4810: 0x22f0820  add         $at, $s1, $t7
    ctx->pc = 0x2e4810u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x2e4814: 0x8ed414f5  lw          $s4, 0x14F5($s6)
    ctx->pc = 0x2e4814u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 5365)));
    // 0x2e4818: 0xd66664f8  ldc1        $f6, 0x64F8($s3)
    ctx->pc = 0x2e4818u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2E4818 raw=0xD66664F8");
    // 0x2e481c: 0xcb1ca7f1  lwc2        $28, -0x580F($t8)
    ctx->pc = 0x2e481cu;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E481C raw=0xCB1CA7F1");
    // 0x2e4820: 0xd6666454  ldc1        $f6, 0x6454($s3)
    ctx->pc = 0x2e4820u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2E4820 raw=0xD6666454");
    // 0x2e4824: 0x0  nop
    ctx->pc = 0x2e4824u;
    // NOP
label_2e4828:
    // 0x2e4828: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e4828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e482c: 0x24424818  addiu       $v0, $v0, 0x4818
    ctx->pc = 0x2e482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18456));
    // 0x2e4830: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e4830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e4834: 0x248447f8  addiu       $a0, $a0, 0x47F8
    ctx->pc = 0x2e4834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18424));
    // 0x2e4838: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e4838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e483c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e483cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4840: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E4840u;
    SET_GPR_U32(ctx, 31, 0x2E4848u);
    ctx->pc = 0x2E4844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4840u;
    // 0x2e4844: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E4840u, 0x2E4848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4848u;
label_2e4848:
    // 0x2e4848: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2e4848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e484c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e484cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e4850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e4854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4858: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e4858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e485c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e485cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4860: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e4860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e4864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4868: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4868u;
        // 0x2e486c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4870u;
}
