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

// Function: sub_001C0968
// Address: 0x1c0968 - 0x1c0ac8
void sub_001C0968_0x1c0968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0968_0x1c0968");
#endif

    switch (ctx->pc) {
        case 0x1c09d0u: goto label_1c09d0;
        case 0x1c09d8u: goto label_1c09d8;
        case 0x1c09e0u: goto label_1c09e0;
        case 0x1c09ecu: goto label_1c09ec;
        case 0x1c09f4u: goto label_1c09f4;
        case 0x1c0a08u: goto label_1c0a08;
        case 0x1c0a10u: goto label_1c0a10;
        case 0x1c0a1cu: goto label_1c0a1c;
        case 0x1c0a5cu: goto label_1c0a5c;
        default: break;
    }

    ctx->pc = 0x1c0968u;

    // 0x1c0968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c096c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c096cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c0970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c097c: 0x2463c81c  addiu       $v1, $v1, -0x37E4
    ctx->pc = 0x1c097cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952988));
    // 0x1c0980: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c0980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c0984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0988: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c0988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c098c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c098cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0990: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C0990u;
    {
        const bool branch_taken_0x1c0990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0990u;
        // 0x1c0994: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0990) {
            ctx->pc = 0x1C0A6Cu;
            goto label_1c0a6c;
        }
    }
    ctx->pc = 0x1C0998u;
    // 0x1c0998: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x1c0998u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1c099c: 0x54830034  bnel        $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C099Cu;
    {
        const bool branch_taken_0x1c099c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c099c) {
            ctx->pc = 0x1C09A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C099Cu;
            // 0x1c09a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0A70u;
            goto label_1c0a70;
        }
    }
    ctx->pc = 0x1C09A4u;
    // 0x1c09a4: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1c09a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1c09a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c09a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c09ac: 0x2644c824  addiu       $a0, $s2, -0x37DC
    ctx->pc = 0x1c09acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952996));
    // 0x1c09b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c09b4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1c09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1c09b8: 0x2442c818  addiu       $v0, $v0, -0x37E8
    ctx->pc = 0x1c09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952984));
    // 0x1c09bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c09c0: 0x1465000f  bne         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C09C0u;
    {
        const bool branch_taken_0x1c09c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c09c0) {
            ctx->pc = 0x1C0A00u;
            goto label_1c0a00;
        }
    }
    ctx->pc = 0x1C09C8u;
    // 0x1c09c8: 0xc0736ea  jal         func_1CDBA8
    ctx->pc = 0x1C09C8u;
    SET_GPR_U32(ctx, 31, 0x1C09D0u);
    ctx->pc = 0x1CDBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDBA8u, 0x1C09C8u, 0x1C09D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09D0u;
label_1c09d0:
    // 0x1c09d0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C09D0u;
    SET_GPR_U32(ctx, 31, 0x1C09D8u);
    ctx->pc = 0x1C09D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09D0u;
    // 0x1c09d4: 0x24041400  addiu       $a0, $zero, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C09D0u, 0x1C09D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09D8u;
label_1c09d8:
    // 0x1c09d8: 0xc047196  jal         func_11C658
    ctx->pc = 0x1C09D8u;
    SET_GPR_U32(ctx, 31, 0x1C09E0u);
    ctx->pc = 0x11C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C658u, 0x1C09D8u, 0x1C09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09E0u;
label_1c09e0:
    // 0x1c09e0: 0x24041401  addiu       $a0, $zero, 0x1401
    ctx->pc = 0x1c09e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5121));
    // 0x1c09e4: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C09E4u;
    SET_GPR_U32(ctx, 31, 0x1C09ECu);
    ctx->pc = 0x1C09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09E4u;
    // 0x1c09e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C09E4u, 0x1C09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09ECu;
label_1c09ec:
    // 0x1c09ec: 0xc073708  jal         func_1CDC20
    ctx->pc = 0x1C09ECu;
    SET_GPR_U32(ctx, 31, 0x1C09F4u);
    ctx->pc = 0x1CDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDC20u, 0x1C09ECu, 0x1C09F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09F4u;
label_1c09f4:
    // 0x1c09f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C09F4u;
    {
        const bool branch_taken_0x1c09f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09F4u;
        // 0x1c09f8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09f4) {
            ctx->pc = 0x1C0A20u;
            goto label_1c0a20;
        }
    }
    ctx->pc = 0x1C09FCu;
    // 0x1c09fc: 0x0  nop
    ctx->pc = 0x1c09fcu;
    // NOP
label_1c0a00:
    // 0x1c0a00: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0A00u;
    SET_GPR_U32(ctx, 31, 0x1C0A08u);
    ctx->pc = 0x1C0A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A00u;
    // 0x1c0a04: 0x24041500  addiu       $a0, $zero, 0x1500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0A00u, 0x1C0A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A08u;
label_1c0a08:
    // 0x1c0a08: 0xc047196  jal         func_11C658
    ctx->pc = 0x1C0A08u;
    SET_GPR_U32(ctx, 31, 0x1C0A10u);
    ctx->pc = 0x11C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C658u, 0x1C0A08u, 0x1C0A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A10u;
label_1c0a10:
    // 0x1c0a10: 0x24041501  addiu       $a0, $zero, 0x1501
    ctx->pc = 0x1c0a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5377));
    // 0x1c0a14: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0A14u;
    SET_GPR_U32(ctx, 31, 0x1C0A1Cu);
    ctx->pc = 0x1C0A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A14u;
    // 0x1c0a18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0A14u, 0x1C0A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A1Cu;
label_1c0a1c:
    // 0x1c0a1c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c0a20:
    // 0x1c0a20: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1c0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c0a24: 0x2644c824  addiu       $a0, $s2, -0x37DC
    ctx->pc = 0x1c0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952996));
    // 0x1c0a28: 0x2442c854  addiu       $v0, $v0, -0x37AC
    ctx->pc = 0x1c0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953044));
    // 0x1c0a2c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x1c0a2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0a30: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1c0a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1c0a34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1c0a38: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0A38u;
    {
        const bool branch_taken_0x1c0a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A38u;
        // 0x1c0a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a38) {
            ctx->pc = 0x1C0A6Cu;
            goto label_1c0a6c;
        }
    }
    ctx->pc = 0x1C0A40u;
    // 0x1c0a40: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c0a44: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0A44u;
    {
        const bool branch_taken_0x1c0a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A44u;
        // 0x1c0a48: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a44) {
            ctx->pc = 0x1C0A68u;
            goto label_1c0a68;
        }
    }
    ctx->pc = 0x1C0A4Cu;
    // 0x1c0a4c: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1c0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1c0a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a54: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C0A54u;
    SET_GPR_U32(ctx, 31, 0x1C0A5Cu);
    ctx->pc = 0x1C0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A54u;
    // 0x1c0a58: 0x248497c8  addiu       $a0, $a0, -0x6838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1C0A54u, 0x1C0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A5Cu;
label_1c0a5c:
    // 0x1c0a5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0A5Cu;
    {
        const bool branch_taken_0x1c0a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A5Cu;
        // 0x1c0a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a5c) {
            ctx->pc = 0x1C0A6Cu;
            goto label_1c0a6c;
        }
    }
    ctx->pc = 0x1C0A64u;
    // 0x1c0a64: 0x0  nop
    ctx->pc = 0x1c0a64u;
    // NOP
label_1c0a68:
    // 0x1c0a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a6c:
    // 0x1c0a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0a70:
    // 0x1c0a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0a78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c0a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A7Cu;
        // 0x1c0a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0A84u;
    // 0x1c0a84: 0x0  nop
    ctx->pc = 0x1c0a84u;
    // NOP
    // 0x1c0a88: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c0a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A8Cu;
        // 0x1c0a90: 0xa044c85c  sb          $a0, -0x37A4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294953052), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0A94u;
    // 0x1c0a94: 0x0  nop
    ctx->pc = 0x1c0a94u;
    // NOP
    // 0x1c0a98: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c0a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A9Cu;
        // 0x1c0aa0: 0xac44c858  sw          $a0, -0x37A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953048), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0AA4u;
    // 0x1c0aa4: 0x0  nop
    ctx->pc = 0x1c0aa4u;
    // NOP
    // 0x1c0aa8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AACu;
        // 0x1c0ab0: 0x9062c85c  lbu         $v0, -0x37A4($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953052)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0AB4u;
    // 0x1c0ab4: 0x0  nop
    ctx->pc = 0x1c0ab4u;
    // NOP
    // 0x1c0ab8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0ABCu;
        // 0x1c0ac0: 0x8c62c858  lw          $v0, -0x37A8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953048)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0AC4u;
    // 0x1c0ac4: 0x0  nop
    ctx->pc = 0x1c0ac4u;
    // NOP
    if (ctx->pc == 0x1c0ac4u) { ctx->pc = 0x1c0ac8u; }
}
