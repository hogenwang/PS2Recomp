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

// Function: sub_001A1600
// Address: 0x1a1600 - 0x1a1ab0
void sub_001A1600_0x1a1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1600_0x1a1600");
#endif

    switch (ctx->pc) {
        case 0x1a162cu: goto label_1a162c;
        case 0x1a1634u: goto label_1a1634;
        case 0x1a163cu: goto label_1a163c;
        case 0x1a1658u: goto label_1a1658;
        case 0x1a1660u: goto label_1a1660;
        case 0x1a167cu: goto label_1a167c;
        case 0x1a1688u: goto label_1a1688;
        case 0x1a169cu: goto label_1a169c;
        case 0x1a16d0u: goto label_1a16d0;
        case 0x1a16f4u: goto label_1a16f4;
        case 0x1a1710u: goto label_1a1710;
        case 0x1a1718u: goto label_1a1718;
        case 0x1a1720u: goto label_1a1720;
        case 0x1a173cu: goto label_1a173c;
        case 0x1a1760u: goto label_1a1760;
        case 0x1a17f4u: goto label_1a17f4;
        case 0x1a17fcu: goto label_1a17fc;
        case 0x1a1804u: goto label_1a1804;
        case 0x1a1810u: goto label_1a1810;
        case 0x1a1818u: goto label_1a1818;
        case 0x1a1820u: goto label_1a1820;
        case 0x1a1854u: goto label_1a1854;
        case 0x1a1864u: goto label_1a1864;
        case 0x1a1874u: goto label_1a1874;
        case 0x1a187cu: goto label_1a187c;
        case 0x1a1884u: goto label_1a1884;
        case 0x1a188cu: goto label_1a188c;
        case 0x1a1898u: goto label_1a1898;
        case 0x1a18a0u: goto label_1a18a0;
        case 0x1a18b0u: goto label_1a18b0;
        case 0x1a18b8u: goto label_1a18b8;
        case 0x1a18c0u: goto label_1a18c0;
        case 0x1a18d4u: goto label_1a18d4;
        case 0x1a18dcu: goto label_1a18dc;
        case 0x1a18e4u: goto label_1a18e4;
        case 0x1a18ecu: goto label_1a18ec;
        case 0x1a18f4u: goto label_1a18f4;
        case 0x1a18fcu: goto label_1a18fc;
        case 0x1a1910u: goto label_1a1910;
        case 0x1a1918u: goto label_1a1918;
        case 0x1a1920u: goto label_1a1920;
        case 0x1a1928u: goto label_1a1928;
        case 0x1a1948u: goto label_1a1948;
        case 0x1a1954u: goto label_1a1954;
        case 0x1a1968u: goto label_1a1968;
        case 0x1a1970u: goto label_1a1970;
        case 0x1a1978u: goto label_1a1978;
        case 0x1a1998u: goto label_1a1998;
        case 0x1a19a0u: goto label_1a19a0;
        case 0x1a19a8u: goto label_1a19a8;
        case 0x1a19b0u: goto label_1a19b0;
        case 0x1a19bcu: goto label_1a19bc;
        case 0x1a19d0u: goto label_1a19d0;
        case 0x1a19e4u: goto label_1a19e4;
        case 0x1a19f4u: goto label_1a19f4;
        case 0x1a19fcu: goto label_1a19fc;
        case 0x1a1a14u: goto label_1a1a14;
        case 0x1a1a1cu: goto label_1a1a1c;
        case 0x1a1a34u: goto label_1a1a34;
        case 0x1a1a3cu: goto label_1a1a3c;
        case 0x1a1a44u: goto label_1a1a44;
        case 0x1a1a4cu: goto label_1a1a4c;
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a5cu: goto label_1a1a5c;
        case 0x1a1a64u: goto label_1a1a64;
        case 0x1a1a74u: goto label_1a1a74;
        default: break;
    }

    ctx->pc = 0x1a1600u;

    // 0x1a1600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a1604: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a1604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a1608: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a1608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a160c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a1614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a161c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a161cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a1620: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a1620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1624: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A1624u;
    SET_GPR_U32(ctx, 31, 0x1A162Cu);
    ctx->pc = 0x1A1628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1624u;
    // 0x1a1628: 0x2484f3b8  addiu       $a0, $a0, -0xC48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A1624u, 0x1A162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A162Cu;
label_1a162c:
    // 0x1a162c: 0xc0683e4  jal         func_1A0F90
    ctx->pc = 0x1A162Cu;
    SET_GPR_U32(ctx, 31, 0x1A1634u);
    ctx->pc = 0x1A0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F90u, 0x1A162Cu, 0x1A1634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1634u;
label_1a1634:
    // 0x1a1634: 0xc047284  jal         func_11CA10
    ctx->pc = 0x1A1634u;
    SET_GPR_U32(ctx, 31, 0x1A163Cu);
    ctx->pc = 0x1A1638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1634u;
    // 0x1a1638: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CA10u, 0x1A1634u, 0x1A163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A163Cu;
label_1a163c:
    // 0x1a163c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a1640: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1640u;
    {
        const bool branch_taken_0x1a1640 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A1644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1640u;
        // 0x1a1644: 0x22203  sra         $a0, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1640) {
            ctx->pc = 0x1A1650u;
            goto label_1a1650;
        }
    }
    ctx->pc = 0x1A1648u;
    // 0x1a1648: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x1a1648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x1a164c: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x1a164cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
label_1a1650:
    // 0x1a1650: 0xc04a3b8  jal         func_128EE0
    ctx->pc = 0x1A1650u;
    SET_GPR_U32(ctx, 31, 0x1A1658u);
    ctx->pc = 0x128EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EE0u, 0x1A1650u, 0x1A1658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1658u;
label_1a1658:
    // 0x1a1658: 0xc069642  jal         func_1A5908
    ctx->pc = 0x1A1658u;
    SET_GPR_U32(ctx, 31, 0x1A1660u);
    ctx->pc = 0x1A165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1658u;
    // 0x1a165c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5908u, 0x1A1658u, 0x1A1660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1660u;
label_1a1660:
    // 0x1a1660: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x1a1660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x1a1664: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1668: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1a1668u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3)); // MMIO: 0x10000010
    // 0x1a166c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a166cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a1670: 0x2484f3c8  addiu       $a0, $a0, -0xC38
    ctx->pc = 0x1a1670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964168));
    // 0x1a1674: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A1674u;
    SET_GPR_U32(ctx, 31, 0x1A167Cu);
    ctx->pc = 0x1A1678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1674u;
    // 0x1a1678: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A1674u, 0x1A167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A167Cu;
label_1a167c:
    // 0x1a167c: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A167Cu;
    {
        const bool branch_taken_0x1a167c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1A1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A167Cu;
        // 0x1a1680: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a167c) {
            ctx->pc = 0x1A16B0u;
            goto label_1a16b0;
        }
    }
    ctx->pc = 0x1A1684u;
    // 0x1a1684: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1a1684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1688:
    // 0x1a1688: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1a1688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a168c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a168cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a1690: 0x2484f3d8  addiu       $a0, $a0, -0xC28
    ctx->pc = 0x1a1690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964184));
    // 0x1a1694: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A1694u;
    SET_GPR_U32(ctx, 31, 0x1A169Cu);
    ctx->pc = 0x1A1698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1694u;
    // 0x1a1698: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A1694u, 0x1A169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A169Cu;
label_1a169c:
    // 0x1a169c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a169cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a16a0: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x1a16a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a16a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A16A4u;
    {
        const bool branch_taken_0x1a16a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A16A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16A4u;
        // 0x1a16a8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16a4) {
            ctx->pc = 0x1A1688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1688;
        }
    }
    ctx->pc = 0x1A16ACu;
    // 0x1a16ac: 0x0  nop
    ctx->pc = 0x1a16acu;
    // NOP
label_1a16b0:
    // 0x1a16b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a16b4: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1a16b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a16b8: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A16B8u;
    {
        const bool branch_taken_0x1a16b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16B8u;
        // 0x1a16bc: 0xac40e470  sw          $zero, -0x1B90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16b8) {
            ctx->pc = 0x1A1708u;
            goto label_1a1708;
        }
    }
    ctx->pc = 0x1A16C0u;
    // 0x1a16c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a16c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a16c4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a16c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a16c8: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A16C8u;
    SET_GPR_U32(ctx, 31, 0x1A16D0u);
    ctx->pc = 0x1A16CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16C8u;
    // 0x1a16cc: 0x24a5f3e0  addiu       $a1, $a1, -0xC20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1A16C8u, 0x1A16D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16D0u;
label_1a16d0:
    // 0x1a16d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A16D0u;
    {
        const bool branch_taken_0x1a16d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a16d0) {
            ctx->pc = 0x1A16D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A16D0u;
            // 0x1a16d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A16E8u;
            goto label_1a16e8;
        }
    }
    ctx->pc = 0x1A16D8u;
    // 0x1a16d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a16dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a16e0: 0xac43e470  sw          $v1, -0x1B90($v0)
    ctx->pc = 0x1a16e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960240), GPR_U32(ctx, 3));
    // 0x1a16e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a16e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a16e8:
    // 0x1a16e8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a16e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a16ec: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A16ECu;
    SET_GPR_U32(ctx, 31, 0x1A16F4u);
    ctx->pc = 0x1A16F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16ECu;
    // 0x1a16f0: 0x24a5f3e8  addiu       $a1, $a1, -0xC18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1A16ECu, 0x1A16F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16F4u;
label_1a16f4:
    // 0x1a16f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A16F4u;
    {
        const bool branch_taken_0x1a16f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a16f4) {
            ctx->pc = 0x1A1708u;
            goto label_1a1708;
        }
    }
    ctx->pc = 0x1A16FCu;
    // 0x1a16fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a16fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1700: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1704: 0xac43e470  sw          $v1, -0x1B90($v0)
    ctx->pc = 0x1a1704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960240), GPR_U32(ctx, 3));
label_1a1708:
    // 0x1a1708: 0xc068744  jal         func_1A1D10
    ctx->pc = 0x1A1708u;
    SET_GPR_U32(ctx, 31, 0x1A1710u);
    ctx->pc = 0x1A1D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1D10u, 0x1A1708u, 0x1A1710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1710u;
label_1a1710:
    // 0x1a1710: 0xc068dbc  jal         func_1A36F0
    ctx->pc = 0x1A1710u;
    SET_GPR_U32(ctx, 31, 0x1A1718u);
    ctx->pc = 0x1A36F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A36F0u, 0x1A1710u, 0x1A1718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1718u;
label_1a1718:
    // 0x1a1718: 0xc040938  jal         func_1024E0
    ctx->pc = 0x1A1718u;
    SET_GPR_U32(ctx, 31, 0x1A1720u);
    ctx->pc = 0x1A171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1718u;
    // 0x1a171c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024E0u, 0x1A1718u, 0x1A1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1720u;
label_1a1720:
    // 0x1a1720: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a1724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1728: 0xac62e688  sw          $v0, -0x1978($v1)
    ctx->pc = 0x1a1728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960776), GPR_U32(ctx, 2));
    // 0x1a172c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a172cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1730: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a1730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1734: 0xc04008c  jal         func_100230
    ctx->pc = 0x1A1734u;
    SET_GPR_U32(ctx, 31, 0x1A173Cu);
    ctx->pc = 0x1A1738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1734u;
    // 0x1a1738: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100230u, 0x1A1734u, 0x1A173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A173Cu;
label_1a173c:
    // 0x1a173c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a173cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1740: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a1740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1744: 0x2484e690  addiu       $a0, $a0, -0x1970
    ctx->pc = 0x1a1744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
    // 0x1a1748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a174c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1a174cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a1750: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1a1750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1a1754: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1a1754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a1758: 0xc040370  jal         func_100DC0
    ctx->pc = 0x1A1758u;
    SET_GPR_U32(ctx, 31, 0x1A1760u);
    ctx->pc = 0x1A175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1758u;
    // 0x1a175c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100DC0u, 0x1A1758u, 0x1A1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1760u;
label_1a1760:
    // 0x1a1760: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1764: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x1a1764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1a1768: 0x9446e6c8  lhu         $a2, -0x1938($v0)
    ctx->pc = 0x1a1768u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960840)));
    // 0x1a176c: 0x6408008c  daddiu      $t0, $zero, 0x8C
    ctx->pc = 0x1a176cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)140);
    // 0x1a1770: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1774: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1778: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a177c: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x1a177cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1a1780: 0x9445e6f0  lhu         $a1, -0x1910($v0)
    ctx->pc = 0x1a1780u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960880)));
    // 0x1a1784: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x1a1784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1a1788: 0xa486e6c8  sh          $a2, -0x1938($a0)
    ctx->pc = 0x1a1788u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294960840), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a178c: 0x64060118  daddiu      $a2, $zero, 0x118
    ctx->pc = 0x1a178cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)280);
    // 0x1a1790: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1794: 0xa72024  and         $a0, $a1, $a3
    ctx->pc = 0x1a1794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1a1798: 0x9442e700  lhu         $v0, -0x1900($v0)
    ctx->pc = 0x1a1798u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294960896)));
    // 0x1a179c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x1a179cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x1a17a0: 0xa464e6f0  sh          $a0, -0x1910($v1)
    ctx->pc = 0x1a17a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294960880), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a17a4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1a17a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1a17a8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1a17a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1a17ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a17acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1a17b0: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x1a17b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1a17b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a17b8: 0xa443e700  sh          $v1, -0x1900($v0)
    ctx->pc = 0x1a17b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294960896), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a17bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a17c0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1a17c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a17c4: 0x9445e7f0  lhu         $a1, -0x1810($v0)
    ctx->pc = 0x1a17c4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x1a17c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a17c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1a17cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a17ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a17d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a17d4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x1a17d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1a17d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a17dc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1a17dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1a17e0: 0xfc64e790  sd          $a0, -0x1870($v1)
    ctx->pc = 0x1a17e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294961040), GPR_U64(ctx, 4));
    // 0x1a17e4: 0xa445e7f0  sh          $a1, -0x1810($v0)
    ctx->pc = 0x1a17e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961136), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a17e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a17ec: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x1A17ECu;
    SET_GPR_U32(ctx, 31, 0x1A17F4u);
    ctx->pc = 0x1A17F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A17ECu;
    // 0x1a17f0: 0xfc44e880  sd          $a0, -0x1780($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294961280), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x1A17ECu, 0x1A17F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17F4u;
label_1a17f4:
    // 0x1a17f4: 0xc069dfc  jal         func_1A77F0
    ctx->pc = 0x1A17F4u;
    SET_GPR_U32(ctx, 31, 0x1A17FCu);
    ctx->pc = 0x1A77F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A77F0u, 0x1A17F4u, 0x1A17FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17FCu;
label_1a17fc:
    // 0x1a17fc: 0xc0687d0  jal         func_1A1F40
    ctx->pc = 0x1A17FCu;
    SET_GPR_U32(ctx, 31, 0x1A1804u);
    ctx->pc = 0x1A1F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F40u, 0x1A17FCu, 0x1A1804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1804u;
label_1a1804:
    // 0x1a1804: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1808: 0xc068554  jal         func_1A1550
    ctx->pc = 0x1A1808u;
    SET_GPR_U32(ctx, 31, 0x1A1810u);
    ctx->pc = 0x1A180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1808u;
    // 0x1a180c: 0xac40e680  sw          $zero, -0x1980($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1550u, 0x1A1808u, 0x1A1810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1810u;
label_1a1810:
    // 0x1a1810: 0xc0530b8  jal         func_14C2E0
    ctx->pc = 0x1A1810u;
    SET_GPR_U32(ctx, 31, 0x1A1818u);
    ctx->pc = 0x14C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C2E0u, 0x1A1810u, 0x1A1818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1818u;
label_1a1818:
    // 0x1a1818: 0xc04042e  jal         func_1010B8
    ctx->pc = 0x1A1818u;
    SET_GPR_U32(ctx, 31, 0x1A1820u);
    ctx->pc = 0x1A181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1818u;
    // 0x1a181c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010B8u, 0x1A1818u, 0x1A1820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1820u;
label_1a1820:
    // 0x1a1820: 0x0  nop
    ctx->pc = 0x1a1820u;
    // NOP
    // 0x1a1824: 0x0  nop
    ctx->pc = 0x1a1824u;
    // NOP
    // 0x1a1828: 0x0  nop
    ctx->pc = 0x1a1828u;
    // NOP
    // 0x1a182c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A182Cu;
    {
        const bool branch_taken_0x1a182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a182c) {
            ctx->pc = 0x1A1818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1818;
        }
    }
    ctx->pc = 0x1A1834u;
    // 0x1a1834: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1838: 0x8c42e470  lw          $v0, -0x1B90($v0)
    ctx->pc = 0x1a1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960240)));
    // 0x1a183c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A183Cu;
    {
        const bool branch_taken_0x1a183c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a183c) {
            ctx->pc = 0x1A186Cu;
            goto label_1a186c;
        }
    }
    ctx->pc = 0x1A1844u;
    // 0x1a1844: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a1844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1848: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a1848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a184c: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x1A184Cu;
    SET_GPR_U32(ctx, 31, 0x1A1854u);
    ctx->pc = 0x1A1850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A184Cu;
    // 0x1a1850: 0x24a5f3f0  addiu       $a1, $a1, -0xC10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x1A184Cu, 0x1A1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1854u;
label_1a1854:
    // 0x1a1854: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A1854u;
    {
        const bool branch_taken_0x1a1854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1854) {
            ctx->pc = 0x1A18A8u;
            goto label_1a18a8;
        }
    }
    ctx->pc = 0x1A185Cu;
    // 0x1a185c: 0xc0684e0  jal         func_1A1380
    ctx->pc = 0x1A185Cu;
    SET_GPR_U32(ctx, 31, 0x1A1864u);
    ctx->pc = 0x1A1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1380u, 0x1A185Cu, 0x1A1864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1864u;
label_1a1864:
    // 0x1a1864: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1864u;
    {
        const bool branch_taken_0x1a1864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1864) {
            ctx->pc = 0x1A18A8u;
            goto label_1a18a8;
        }
    }
    ctx->pc = 0x1A186Cu;
label_1a186c:
    // 0x1a186c: 0xc068b40  jal         func_1A2D00
    ctx->pc = 0x1A186Cu;
    SET_GPR_U32(ctx, 31, 0x1A1874u);
    ctx->pc = 0x1A2D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D00u, 0x1A186Cu, 0x1A1874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1874u;
label_1a1874:
    // 0x1a1874: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A1874u;
    {
        const bool branch_taken_0x1a1874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1874) {
            ctx->pc = 0x1A18A8u;
            goto label_1a18a8;
        }
    }
    ctx->pc = 0x1A187Cu;
label_1a187c:
    // 0x1a187c: 0xc04042e  jal         func_1010B8
    ctx->pc = 0x1A187Cu;
    SET_GPR_U32(ctx, 31, 0x1A1884u);
    ctx->pc = 0x1A1880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A187Cu;
    // 0x1a1880: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010B8u, 0x1A187Cu, 0x1A1884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1884u;
label_1a1884:
    // 0x1a1884: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A1884u;
    SET_GPR_U32(ctx, 31, 0x1A188Cu);
    ctx->pc = 0x1A1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1884u;
    // 0x1a1888: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A1884u, 0x1A188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A188Cu;
label_1a188c:
    // 0x1a188c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1890: 0xc040454  jal         func_101150
    ctx->pc = 0x1A1890u;
    SET_GPR_U32(ctx, 31, 0x1A1898u);
    ctx->pc = 0x1A1894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1890u;
    // 0x1a1894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x1A1890u, 0x1A1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1898u;
label_1a1898:
    // 0x1a1898: 0xc068b40  jal         func_1A2D00
    ctx->pc = 0x1A1898u;
    SET_GPR_U32(ctx, 31, 0x1A18A0u);
    ctx->pc = 0x1A2D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2D00u, 0x1A1898u, 0x1A18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18A0u;
label_1a18a0:
    // 0x1a18a0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A18A0u;
    {
        const bool branch_taken_0x1a18a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a18a0) {
            ctx->pc = 0x1A187Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a187c;
        }
    }
    ctx->pc = 0x1A18A8u;
label_1a18a8:
    // 0x1a18a8: 0xc069edc  jal         func_1A7B70
    ctx->pc = 0x1A18A8u;
    SET_GPR_U32(ctx, 31, 0x1A18B0u);
    ctx->pc = 0x1A7B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7B70u, 0x1A18A8u, 0x1A18B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18B0u;
label_1a18b0:
    // 0x1a18b0: 0xc0c7c7c  jal         func_31F1F0
    ctx->pc = 0x1A18B0u;
    SET_GPR_U32(ctx, 31, 0x1A18B8u);
    ctx->pc = 0x31F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F1F0u, 0x1A18B0u, 0x1A18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18B8u;
label_1a18b8:
    // 0x1a18b8: 0xc067d80  jal         func_19F600
    ctx->pc = 0x1A18B8u;
    SET_GPR_U32(ctx, 31, 0x1A18C0u);
    ctx->pc = 0x19F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F600u, 0x1A18B8u, 0x1A18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18C0u;
label_1a18c0:
    // 0x1a18c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a18c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a18c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a18c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a18c8: 0xac82da28  sw          $v0, -0x25D8($a0)
    ctx->pc = 0x1a18c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294957608), GPR_U32(ctx, 2));
    // 0x1a18cc: 0xc0d0c7c  jal         func_3431F0
    ctx->pc = 0x1A18CCu;
    SET_GPR_U32(ctx, 31, 0x1A18D4u);
    ctx->pc = 0x1A18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18CCu;
    // 0x1a18d0: 0xac60e680  sw          $zero, -0x1980($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3431F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3431F0u, 0x1A18CCu, 0x1A18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18D4u;
label_1a18d4:
    // 0x1a18d4: 0xc080f14  jal         func_203C50
    ctx->pc = 0x1A18D4u;
    SET_GPR_U32(ctx, 31, 0x1A18DCu);
    ctx->pc = 0x203C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203C50u, 0x1A18D4u, 0x1A18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18DCu;
label_1a18dc:
    // 0x1a18dc: 0xc0bf418  jal         func_2FD060
    ctx->pc = 0x1A18DCu;
    SET_GPR_U32(ctx, 31, 0x1A18E4u);
    ctx->pc = 0x2FD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD060u, 0x1A18DCu, 0x1A18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18E4u;
label_1a18e4:
    // 0x1a18e4: 0xc0c4690  jal         func_311A40
    ctx->pc = 0x1A18E4u;
    SET_GPR_U32(ctx, 31, 0x1A18ECu);
    ctx->pc = 0x311A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A40u, 0x1A18E4u, 0x1A18ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18ECu;
label_1a18ec:
    // 0x1a18ec: 0xc0cb1e4  jal         func_32C790
    ctx->pc = 0x1A18ECu;
    SET_GPR_U32(ctx, 31, 0x1A18F4u);
    ctx->pc = 0x32C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C790u, 0x1A18ECu, 0x1A18F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18F4u;
label_1a18f4:
    // 0x1a18f4: 0xc04042e  jal         func_1010B8
    ctx->pc = 0x1A18F4u;
    SET_GPR_U32(ctx, 31, 0x1A18FCu);
    ctx->pc = 0x1A18F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18F4u;
    // 0x1a18f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010B8u, 0x1A18F4u, 0x1A18FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18FCu;
label_1a18fc:
    // 0x1a18fc: 0x0  nop
    ctx->pc = 0x1a18fcu;
    // NOP
    // 0x1a1900: 0x0  nop
    ctx->pc = 0x1a1900u;
    // NOP
    // 0x1a1904: 0x0  nop
    ctx->pc = 0x1a1904u;
    // NOP
    // 0x1a1908: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1908u;
    {
        const bool branch_taken_0x1a1908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1908) {
            ctx->pc = 0x1A18F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a18f4;
        }
    }
    ctx->pc = 0x1A1910u;
label_1a1910:
    // 0x1a1910: 0xc068874  jal         func_1A21D0
    ctx->pc = 0x1A1910u;
    SET_GPR_U32(ctx, 31, 0x1A1918u);
    ctx->pc = 0x1A21D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21D0u, 0x1A1910u, 0x1A1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1918u;
label_1a1918:
    // 0x1a1918: 0xc0d0e60  jal         func_343980
    ctx->pc = 0x1A1918u;
    SET_GPR_U32(ctx, 31, 0x1A1920u);
    ctx->pc = 0x343980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343980u, 0x1A1918u, 0x1A1920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1920u;
label_1a1920:
    // 0x1a1920: 0xc0686ac  jal         func_1A1AB0
    ctx->pc = 0x1A1920u;
    SET_GPR_U32(ctx, 31, 0x1A1928u);
    ctx->pc = 0x1A1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AB0u, 0x1A1920u, 0x1A1928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1928u;
label_1a1928:
    // 0x1a1928: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A1928u;
    {
        const bool branch_taken_0x1a1928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1928) {
            ctx->pc = 0x1A1910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1910;
        }
    }
    ctx->pc = 0x1A1930u;
    // 0x1a1930: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1934: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1938: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x1a1938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x1a193c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1940: 0xc067d80  jal         func_19F600
    ctx->pc = 0x1A1940u;
    SET_GPR_U32(ctx, 31, 0x1A1948u);
    ctx->pc = 0x1A1944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1940u;
    // 0x1a1944: 0xac43da70  sw          $v1, -0x2590($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957680), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F600u, 0x1A1940u, 0x1A1948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1948u;
label_1a1948:
    // 0x1a1948: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a194c: 0xc0c7ce4  jal         func_31F390
    ctx->pc = 0x1A194Cu;
    SET_GPR_U32(ctx, 31, 0x1A1954u);
    ctx->pc = 0x1A1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A194Cu;
    // 0x1a1950: 0xac62da28  sw          $v0, -0x25D8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F390u, 0x1A194Cu, 0x1A1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1954u;
label_1a1954:
    // 0x1a1954: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1958: 0x8c42e498  lw          $v0, -0x1B68($v0)
    ctx->pc = 0x1a1958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960280)));
    // 0x1a195c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A195Cu;
    {
        const bool branch_taken_0x1a195c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a195c) {
            ctx->pc = 0x1A1990u;
            goto label_1a1990;
        }
    }
    ctx->pc = 0x1A1964u;
    // 0x1a1964: 0x0  nop
    ctx->pc = 0x1a1964u;
    // NOP
label_1a1968:
    // 0x1a1968: 0xc04042e  jal         func_1010B8
    ctx->pc = 0x1A1968u;
    SET_GPR_U32(ctx, 31, 0x1A1970u);
    ctx->pc = 0x1A196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1968u;
    // 0x1a196c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010B8u, 0x1A1968u, 0x1A1970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1970u;
label_1a1970:
    // 0x1a1970: 0xc068874  jal         func_1A21D0
    ctx->pc = 0x1A1970u;
    SET_GPR_U32(ctx, 31, 0x1A1978u);
    ctx->pc = 0x1A21D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21D0u, 0x1A1970u, 0x1A1978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1978u;
label_1a1978:
    // 0x1a1978: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a197c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1980: 0x8c63e498  lw          $v1, -0x1B68($v1)
    ctx->pc = 0x1a1980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960280)));
    // 0x1a1984: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1988: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A1988u;
    {
        const bool branch_taken_0x1a1988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1988u;
        // 0x1a198c: 0xac43e498  sw          $v1, -0x1B68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1988) {
            ctx->pc = 0x1A1968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1968;
        }
    }
    ctx->pc = 0x1A1990u;
label_1a1990:
    // 0x1a1990: 0xc04042e  jal         func_1010B8
    ctx->pc = 0x1A1990u;
    SET_GPR_U32(ctx, 31, 0x1A1998u);
    ctx->pc = 0x1A1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1990u;
    // 0x1a1994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010B8u, 0x1A1990u, 0x1A1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1998u;
label_1a1998:
    // 0x1a1998: 0xc068754  jal         func_1A1D50
    ctx->pc = 0x1A1998u;
    SET_GPR_U32(ctx, 31, 0x1A19A0u);
    ctx->pc = 0x1A1D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1D50u, 0x1A1998u, 0x1A19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19A0u;
label_1a19a0:
    // 0x1a19a0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A19A0u;
    SET_GPR_U32(ctx, 31, 0x1A19A8u);
    ctx->pc = 0x1A19A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19A0u;
    // 0x1a19a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A19A0u, 0x1A19A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19A8u;
label_1a19a8:
    // 0x1a19a8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1A19A8u;
    SET_GPR_U32(ctx, 31, 0x1A19B0u);
    ctx->pc = 0x1A19ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19A8u;
    // 0x1a19ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1A19A8u, 0x1A19B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19B0u;
label_1a19b0:
    // 0x1a19b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a19b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19b4: 0xc040454  jal         func_101150
    ctx->pc = 0x1A19B4u;
    SET_GPR_U32(ctx, 31, 0x1A19BCu);
    ctx->pc = 0x1A19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19B4u;
    // 0x1a19b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x1A19B4u, 0x1A19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19BCu;
label_1a19bc:
    // 0x1a19bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a19c0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a19c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a19c4: 0x8c45e680  lw          $a1, -0x1980($v0)
    ctx->pc = 0x1a19c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960768)));
    // 0x1a19c8: 0xc040416  jal         func_101058
    ctx->pc = 0x1A19C8u;
    SET_GPR_U32(ctx, 31, 0x1A19D0u);
    ctx->pc = 0x1A19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19C8u;
    // 0x1a19cc: 0x2484e690  addiu       $a0, $a0, -0x1970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101058u, 0x1A19C8u, 0x1A19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19D0u;
label_1a19d0:
    // 0x1a19d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A19D0u;
    {
        const bool branch_taken_0x1a19d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a19d0) {
            ctx->pc = 0x1A19E8u;
            goto label_1a19e8;
        }
    }
    ctx->pc = 0x1A19D8u;
    // 0x1a19d8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a19d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a19dc: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x1A19DCu;
    SET_GPR_U32(ctx, 31, 0x1A19E4u);
    ctx->pc = 0x1A19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19DCu;
    // 0x1a19e0: 0x2484f380  addiu       $a0, $a0, -0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x1A19DCu, 0x1A19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19E4u;
label_1a19e4:
    // 0x1a19e4: 0x0  nop
    ctx->pc = 0x1a19e4u;
    // NOP
label_1a19e8:
    // 0x1a19e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a19e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19ec: 0xc040454  jal         func_101150
    ctx->pc = 0x1A19ECu;
    SET_GPR_U32(ctx, 31, 0x1A19F4u);
    ctx->pc = 0x1A19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19ECu;
    // 0x1a19f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x1A19ECu, 0x1A19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19F4u;
label_1a19f4:
    // 0x1a19f4: 0xc0c7a08  jal         func_31E820
    ctx->pc = 0x1A19F4u;
    SET_GPR_U32(ctx, 31, 0x1A19FCu);
    ctx->pc = 0x31E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E820u, 0x1A19F4u, 0x1A19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19FCu;
label_1a19fc:
    // 0x1a19fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1a00: 0x8c42e680  lw          $v0, -0x1980($v0)
    ctx->pc = 0x1a1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960768)));
    // 0x1a1a04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a1a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a1a08: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1a1a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1a0c: 0xc06847c  jal         func_1A11F0
    ctx->pc = 0x1A1A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A14u);
    ctx->pc = 0x1A1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A0Cu;
    // 0x1a1a10: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A11F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A11F0u, 0x1A1A0Cu, 0x1A1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A14u;
label_1a1a14:
    // 0x1a1a14: 0xc0c3540  jal         func_30D500
    ctx->pc = 0x1A1A14u;
    SET_GPR_U32(ctx, 31, 0x1A1A1Cu);
    ctx->pc = 0x30D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D500u, 0x1A1A14u, 0x1A1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A1Cu;
label_1a1a1c:
    // 0x1a1a1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1a20: 0x8c42e680  lw          $v0, -0x1980($v0)
    ctx->pc = 0x1a1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960768)));
    // 0x1a1a24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a1a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a1a28: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1a1a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1a2c: 0xc068428  jal         func_1A10A0
    ctx->pc = 0x1A1A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A34u);
    ctx->pc = 0x1A1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A2Cu;
    // 0x1a1a30: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10A0u, 0x1A1A2Cu, 0x1A1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A34u;
label_1a1a34:
    // 0x1a1a34: 0xc0c7964  jal         func_31E590
    ctx->pc = 0x1A1A34u;
    SET_GPR_U32(ctx, 31, 0x1A1A3Cu);
    ctx->pc = 0x31E590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E590u, 0x1A1A34u, 0x1A1A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A3Cu;
label_1a1a3c:
    // 0x1a1a3c: 0xc0c7bac  jal         func_31EEB0
    ctx->pc = 0x1A1A3Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A44u);
    ctx->pc = 0x31EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEB0u, 0x1A1A3Cu, 0x1A1A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A44u;
label_1a1a44:
    // 0x1a1a44: 0xc083aec  jal         func_20EBB0
    ctx->pc = 0x1A1A44u;
    SET_GPR_U32(ctx, 31, 0x1A1A4Cu);
    ctx->pc = 0x20EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EBB0u, 0x1A1A44u, 0x1A1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A4Cu;
label_1a1a4c:
    // 0x1a1a4c: 0xc0c0d10  jal         func_303440
    ctx->pc = 0x1A1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A54u);
    ctx->pc = 0x303440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303440u, 0x1A1A4Cu, 0x1A1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A54u;
label_1a1a54:
    // 0x1a1a54: 0xc0c01e0  jal         func_300780
    ctx->pc = 0x1A1A54u;
    SET_GPR_U32(ctx, 31, 0x1A1A5Cu);
    ctx->pc = 0x300780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300780u, 0x1A1A54u, 0x1A1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A5Cu;
label_1a1a5c:
    // 0x1a1a5c: 0xc0c48ac  jal         func_3122B0
    ctx->pc = 0x1A1A5Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A64u);
    ctx->pc = 0x3122B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3122B0u, 0x1A1A5Cu, 0x1A1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A64u;
label_1a1a64:
    // 0x1a1a64: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1a68: 0x8c42e680  lw          $v0, -0x1980($v0)
    ctx->pc = 0x1a1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960768)));
    // 0x1a1a6c: 0xc069f58  jal         func_1A7D60
    ctx->pc = 0x1A1A6Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A74u);
    ctx->pc = 0x1A1A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A6Cu;
    // 0x1a1a70: 0x30440001  andi        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7D60u, 0x1A1A6Cu, 0x1A1A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A74u;
label_1a1a74:
    // 0x1a1a74: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1a78: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1a7c: 0x8c46e680  lw          $a2, -0x1980($v0)
    ctx->pc = 0x1a1a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960768)));
    // 0x1a1a80: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1a84: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a1a88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a1a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a1a8c: 0x8c45e490  lw          $a1, -0x1B70($v0)
    ctx->pc = 0x1a1a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960272)));
    // 0x1a1a90: 0xac86e680  sw          $a2, -0x1980($a0)
    ctx->pc = 0x1a1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960768), GPR_U32(ctx, 6));
    // 0x1a1a94: 0x38a40001  xori        $a0, $a1, 0x1
    ctx->pc = 0x1a1a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x1a1a98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1a9c: 0xac64e490  sw          $a0, -0x1B70($v1)
    ctx->pc = 0x1a1a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960272), GPR_U32(ctx, 4));
    // 0x1a1aa0: 0x1000ff9b  b           . + 4 + (-0x65 << 2)
    ctx->pc = 0x1A1AA0u;
    {
        const bool branch_taken_0x1a1aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AA0u;
        // 0x1a1aa4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1aa0) {
            ctx->pc = 0x1A1910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a1910;
        }
    }
    ctx->pc = 0x1A1AA8u;
    // 0x1a1aa8: 0x0  nop
    ctx->pc = 0x1a1aa8u;
    // NOP
    // 0x1a1aac: 0x0  nop
    ctx->pc = 0x1a1aacu;
    // NOP
}
