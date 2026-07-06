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

// Function: sub_00300780
// Address: 0x300780 - 0x3008e0
void sub_00300780_0x300780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300780_0x300780");
#endif

    switch (ctx->pc) {
        case 0x3007a4u: goto label_3007a4;
        case 0x3007c8u: goto label_3007c8;
        case 0x300800u: goto label_300800;
        case 0x300818u: goto label_300818;
        case 0x300880u: goto label_300880;
        case 0x300894u: goto label_300894;
        case 0x3008c0u: goto label_3008c0;
        case 0x3008ccu: goto label_3008cc;
        default: break;
    }

    ctx->pc = 0x300780u;

    // 0x300780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x300780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x300784: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x300784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x300788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30078c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x300790: 0x8c64a490  lw          $a0, -0x5B70($v1)
    ctx->pc = 0x300790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943888)));
    // 0x300794: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x300794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300798: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x300798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x30079c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x30079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3007a0: 0xac64a458  sw          $a0, -0x5BA8($v1)
    ctx->pc = 0x3007a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943832), GPR_U32(ctx, 4));
label_3007a4:
    // 0x3007a4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x3007a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x3007a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3007a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3007ac: 0x90650c40  lbu         $a1, 0xC40($v1)
    ctx->pc = 0x3007acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3136)));
    // 0x3007b0: 0x2041804  sllv        $v1, $a0, $s0
    ctx->pc = 0x3007b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x3007b4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3007b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3007b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3007B8u;
    {
        const bool branch_taken_0x3007b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3007b8) {
            ctx->pc = 0x3007C8u;
            goto label_3007c8;
        }
    }
    ctx->pc = 0x3007C0u;
    // 0x3007c0: 0xc0c04e8  jal         func_3013A0
    ctx->pc = 0x3007C0u;
    SET_GPR_U32(ctx, 31, 0x3007C8u);
    ctx->pc = 0x3007C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3007C0u;
    // 0x3007c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3013A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3013A0u, 0x3007C0u, 0x3007C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007C8u;
label_3007c8:
    // 0x3007c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3007c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3007cc: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x3007ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3007d0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3007D0u;
    {
        const bool branch_taken_0x3007d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3007d0) {
            ctx->pc = 0x3007A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3007a4;
        }
    }
    ctx->pc = 0x3007D8u;
    // 0x3007d8: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x3007d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x3007dc: 0xa0600c40  sb          $zero, 0xC40($v1)
    ctx->pc = 0x3007dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3136), (uint8_t)GPR_U32(ctx, 0));
    // 0x3007e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3007e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3007e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3007e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3007e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3007E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3007ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007E8u;
        // 0x3007ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3007E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3007F0u;
    // 0x3007f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3007f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3007f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3007f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3007f8: 0xc069184  jal         func_1A4610
    ctx->pc = 0x3007F8u;
    SET_GPR_U32(ctx, 31, 0x300800u);
    ctx->pc = 0x3007FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3007F8u;
    // 0x3007fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x3007F8u, 0x300800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300800u;
label_300800:
    // 0x300800: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300808: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x300808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30080c: 0x24840830  addiu       $a0, $a0, 0x830
    ctx->pc = 0x30080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
    // 0x300810: 0xc0bf7e8  jal         func_2FDFA0
    ctx->pc = 0x300810u;
    SET_GPR_U32(ctx, 31, 0x300818u);
    ctx->pc = 0x300814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300810u;
    // 0x300814: 0xac439728  sw          $v1, -0x68D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFA0u, 0x300810u, 0x300818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300818u;
label_300818:
    // 0x300818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30081c: 0x3e00008  jr          $ra
    ctx->pc = 0x30081Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30081Cu;
        // 0x300820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30081Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300824u;
    // 0x300824: 0x0  nop
    ctx->pc = 0x300824u;
    // NOP
    // 0x300828: 0x0  nop
    ctx->pc = 0x300828u;
    // NOP
    // 0x30082c: 0x0  nop
    ctx->pc = 0x30082cu;
    // NOP
    // 0x300830: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300834: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x300834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x300838: 0x24a50850  addiu       $a1, $a1, 0x850
    ctx->pc = 0x300838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
    // 0x30083c: 0x80bf86c  j           func_2FE1B0
    ctx->pc = 0x30083Cu;
    ctx->pc = 0x300840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30083Cu;
    // 0x300840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    sub_002FE1B0_0x2fe1b0(rdram, ctx, runtime); return;
    ctx->pc = 0x300844u;
    // 0x300844: 0x0  nop
    ctx->pc = 0x300844u;
    // NOP
    // 0x300848: 0x0  nop
    ctx->pc = 0x300848u;
    // NOP
    // 0x30084c: 0x0  nop
    ctx->pc = 0x30084cu;
    // NOP
    // 0x300850: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300854: 0x80bf7e8  j           func_2FDFA0
    ctx->pc = 0x300854u;
    ctx->pc = 0x300858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300854u;
    // 0x300858: 0x24840860  addiu       $a0, $a0, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    sub_002FDFA0_0x2fdfa0(rdram, ctx, runtime); return;
    ctx->pc = 0x30085Cu;
    // 0x30085c: 0x0  nop
    ctx->pc = 0x30085cu;
    // NOP
    // 0x300860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x300860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x300864: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x300864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x300868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30086c: 0x90635cf0  lbu         $v1, 0x5CF0($v1)
    ctx->pc = 0x30086cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23792)));
    // 0x300870: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x300870u;
    {
        const bool branch_taken_0x300870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x300870) {
            ctx->pc = 0x300874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300870u;
            // 0x300874: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300898u;
            goto label_300898;
        }
    }
    ctx->pc = 0x300878u;
    // 0x300878: 0xc0684e0  jal         func_1A1380
    ctx->pc = 0x300878u;
    SET_GPR_U32(ctx, 31, 0x300880u);
    ctx->pc = 0x1A1380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1380u, 0x300878u, 0x300880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300880u;
label_300880:
    // 0x300880: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x300880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x300884: 0x240403e9  addiu       $a0, $zero, 0x3E9
    ctx->pc = 0x300884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x300888: 0x24c608a0  addiu       $a2, $a2, 0x8A0
    ctx->pc = 0x300888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2208));
    // 0x30088c: 0xc0bf8cc  jal         func_2FE330
    ctx->pc = 0x30088Cu;
    SET_GPR_U32(ctx, 31, 0x300894u);
    ctx->pc = 0x300890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30088Cu;
    // 0x300890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE330u, 0x30088Cu, 0x300894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300894u;
label_300894:
    // 0x300894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_300898:
    // 0x300898: 0x3e00008  jr          $ra
    ctx->pc = 0x300898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300898u;
        // 0x30089c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3008A0u;
    // 0x3008a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3008a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3008a4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3008a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3008a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3008a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3008ac: 0x90635cf0  lbu         $v1, 0x5CF0($v1)
    ctx->pc = 0x3008acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23792)));
    // 0x3008b0: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3008B0u;
    {
        const bool branch_taken_0x3008b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3008b0) {
            ctx->pc = 0x3008B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3008B0u;
            // 0x3008b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3008D0u;
            goto label_3008d0;
        }
    }
    ctx->pc = 0x3008B8u;
    // 0x3008b8: 0xc068514  jal         func_1A1450
    ctx->pc = 0x3008B8u;
    SET_GPR_U32(ctx, 31, 0x3008C0u);
    ctx->pc = 0x1A1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1450u, 0x3008B8u, 0x3008C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3008C0u;
label_3008c0:
    // 0x3008c0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3008c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3008c4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3008C4u;
    SET_GPR_U32(ctx, 31, 0x3008CCu);
    ctx->pc = 0x3008C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3008C4u;
    // 0x3008c8: 0x24840830  addiu       $a0, $a0, 0x830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3008C4u, 0x3008CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3008CCu;
label_3008cc:
    // 0x3008cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3008ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3008d0:
    // 0x3008d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3008D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3008D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008D0u;
        // 0x3008d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3008D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3008D8u;
    // 0x3008d8: 0x0  nop
    ctx->pc = 0x3008d8u;
    // NOP
    // 0x3008dc: 0x0  nop
    ctx->pc = 0x3008dcu;
    // NOP
}
