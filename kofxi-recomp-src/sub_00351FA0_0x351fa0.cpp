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

// Function: sub_00351FA0
// Address: 0x351fa0 - 0x352210
void sub_00351FA0_0x351fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351FA0_0x351fa0");
#endif

    switch (ctx->pc) {
        case 0x351fe0u: goto label_351fe0;
        case 0x351fecu: goto label_351fec;
        case 0x352010u: goto label_352010;
        case 0x352024u: goto label_352024;
        case 0x35203cu: goto label_35203c;
        case 0x352060u: goto label_352060;
        case 0x352068u: goto label_352068;
        case 0x352088u: goto label_352088;
        case 0x352098u: goto label_352098;
        case 0x3520c0u: goto label_3520c0;
        case 0x3520e0u: goto label_3520e0;
        case 0x352100u: goto label_352100;
        case 0x35210cu: goto label_35210c;
        case 0x352130u: goto label_352130;
        case 0x352144u: goto label_352144;
        case 0x35215cu: goto label_35215c;
        case 0x352180u: goto label_352180;
        case 0x352188u: goto label_352188;
        case 0x3521a8u: goto label_3521a8;
        case 0x3521b8u: goto label_3521b8;
        case 0x3521e0u: goto label_3521e0;
        case 0x352200u: goto label_352200;
        default: break;
    }

    ctx->pc = 0x351fa0u;

label_351fa0:
    // 0x351fa0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351fa4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x351fa8: 0x9444be90  lhu         $a0, -0x4170($v0)
    ctx->pc = 0x351fa8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x351fac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x351facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x351fb0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x351fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x351fb4: 0xa464be90  sh          $a0, -0x4170($v1)
    ctx->pc = 0x351fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 4));
    // 0x351fb8: 0x9442be90  lhu         $v0, -0x4170($v0)
    ctx->pc = 0x351fb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x351fbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x351fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x351fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x351FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FC0u;
        // 0x351fc4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351FC8u;
    // 0x351fc8: 0x0  nop
    ctx->pc = 0x351fc8u;
    // NOP
    // 0x351fcc: 0x0  nop
    ctx->pc = 0x351fccu;
    // NOP
    // 0x351fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351fd8: 0xc0d47e4  jal         func_351F90
    ctx->pc = 0x351FD8u;
    SET_GPR_U32(ctx, 31, 0x351FE0u);
    ctx->pc = 0x351F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351F90u, 0x351FD8u, 0x351FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351FE0u;
label_351fe0:
    // 0x351fe0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x351fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x351fe4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x351FE4u;
    SET_GPR_U32(ctx, 31, 0x351FECu);
    ctx->pc = 0x351FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351FE4u;
    // 0x351fe8: 0x24842000  addiu       $a0, $a0, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x351FE4u, 0x351FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351FECu;
label_351fec:
    // 0x351fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x351FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FF0u;
        // 0x351ff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351FF8u;
    // 0x351ff8: 0x0  nop
    ctx->pc = 0x351ff8u;
    // NOP
    // 0x351ffc: 0x0  nop
    ctx->pc = 0x351ffcu;
    // NOP
    // 0x352000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x352000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x352004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x352008: 0xc0d47e8  jal         func_351FA0
    ctx->pc = 0x352008u;
    SET_GPR_U32(ctx, 31, 0x352010u);
    ctx->pc = 0x351FA0u;
    goto label_351fa0;
    ctx->pc = 0x352010u;
label_352010:
    // 0x352010: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x352010u;
    {
        const bool branch_taken_0x352010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352010) {
            ctx->pc = 0x352014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352010u;
            // 0x352014: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352028u;
            goto label_352028;
        }
    }
    ctx->pc = 0x352018u;
    // 0x352018: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x352018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x35201c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x35201Cu;
    SET_GPR_U32(ctx, 31, 0x352024u);
    ctx->pc = 0x352020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35201Cu;
    // 0x352020: 0x24842030  addiu       $a0, $a0, 0x2030 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x35201Cu, 0x352024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352024u;
label_352024:
    // 0x352024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_352028:
    // 0x352028: 0x3e00008  jr          $ra
    ctx->pc = 0x352028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352028u;
        // 0x35202c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352030u;
    // 0x352030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x352030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x352034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x352038: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x352038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_35203c:
    // 0x35203c: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x35203cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x352040: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x352040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x352044: 0x0  nop
    ctx->pc = 0x352044u;
    // NOP
    // 0x352048: 0x0  nop
    ctx->pc = 0x352048u;
    // NOP
    // 0x35204c: 0x0  nop
    ctx->pc = 0x35204cu;
    // NOP
    // 0x352050: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x352050u;
    {
        const bool branch_taken_0x352050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x352050) {
            ctx->pc = 0x35203Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35203c;
        }
    }
    ctx->pc = 0x352058u;
    // 0x352058: 0xc052b20  jal         func_14AC80
    ctx->pc = 0x352058u;
    SET_GPR_U32(ctx, 31, 0x352060u);
    ctx->pc = 0x14AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC80u, 0x352058u, 0x352060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352060u;
label_352060:
    // 0x352060: 0xc047358  jal         func_11CD60
    ctx->pc = 0x352060u;
    SET_GPR_U32(ctx, 31, 0x352068u);
    ctx->pc = 0x11CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CD60u, 0x352060u, 0x352068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352068u;
label_352068:
    // 0x352068: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x352068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x35206c: 0x24054402  addiu       $a1, $zero, 0x4402
    ctx->pc = 0x35206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17410));
    // 0x352070: 0x24845528  addiu       $a0, $a0, 0x5528
    ctx->pc = 0x352070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21800));
    // 0x352074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x352078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35207c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35207cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352080: 0xc045286  jal         func_114A18
    ctx->pc = 0x352080u;
    SET_GPR_U32(ctx, 31, 0x352088u);
    ctx->pc = 0x352084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352080u;
    // 0x352084: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A18u, 0x352080u, 0x352088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352088u;
label_352088:
    // 0x352088: 0x440fff7  bltz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x352088u;
    {
        const bool branch_taken_0x352088 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x352088) {
            ctx->pc = 0x352068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_352068;
        }
    }
    ctx->pc = 0x352090u;
    // 0x352090: 0xc043fb2  jal         func_10FEC8
    ctx->pc = 0x352090u;
    SET_GPR_U32(ctx, 31, 0x352098u);
    ctx->pc = 0x10FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FEC8u, 0x352090u, 0x352098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352098u;
label_352098:
    // 0x352098: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x352098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x35209c: 0x904295d0  lbu         $v0, -0x6A30($v0)
    ctx->pc = 0x35209cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940112)));
    // 0x3520a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3520A0u;
    {
        const bool branch_taken_0x3520a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3520a0) {
            ctx->pc = 0x3520C8u;
            goto label_3520c8;
        }
    }
    ctx->pc = 0x3520A8u;
    // 0x3520a8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3520a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3520ac: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3520acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x3520b0: 0x24849660  addiu       $a0, $a0, -0x69A0
    ctx->pc = 0x3520b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940256));
    // 0x3520b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3520b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3520b8: 0xc045d44  jal         func_117510
    ctx->pc = 0x3520B8u;
    SET_GPR_U32(ctx, 31, 0x3520C0u);
    ctx->pc = 0x3520BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520B8u;
    // 0x3520bc: 0x24c69688  addiu       $a2, $a2, -0x6978 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117510u, 0x3520B8u, 0x3520C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520C0u;
label_3520c0:
    // 0x3520c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3520C0u;
    {
        const bool branch_taken_0x3520c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520C0u;
        // 0x3520c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520c0) {
            ctx->pc = 0x3520E4u;
            goto label_3520e4;
        }
    }
    ctx->pc = 0x3520C8u;
label_3520c8:
    // 0x3520c8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3520c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3520cc: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3520ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x3520d0: 0x24849660  addiu       $a0, $a0, -0x69A0
    ctx->pc = 0x3520d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940256));
    // 0x3520d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3520d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3520d8: 0xc045d44  jal         func_117510
    ctx->pc = 0x3520D8u;
    SET_GPR_U32(ctx, 31, 0x3520E0u);
    ctx->pc = 0x3520DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3520D8u;
    // 0x3520dc: 0x24c69678  addiu       $a2, $a2, -0x6988 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117510u, 0x3520D8u, 0x3520E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3520E0u;
label_3520e0:
    // 0x3520e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3520e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3520e4:
    // 0x3520e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3520E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3520E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520E4u;
        // 0x3520e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3520E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3520ECu;
    // 0x3520ec: 0x0  nop
    ctx->pc = 0x3520ecu;
    // NOP
    // 0x3520f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3520f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3520f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3520f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3520f8: 0xc0d47e4  jal         func_351F90
    ctx->pc = 0x3520F8u;
    SET_GPR_U32(ctx, 31, 0x352100u);
    ctx->pc = 0x351F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351F90u, 0x3520F8u, 0x352100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352100u;
label_352100:
    // 0x352100: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x352100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x352104: 0xc082674  jal         func_2099D0
    ctx->pc = 0x352104u;
    SET_GPR_U32(ctx, 31, 0x35210Cu);
    ctx->pc = 0x352108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352104u;
    // 0x352108: 0x24842120  addiu       $a0, $a0, 0x2120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x352104u, 0x35210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35210Cu;
label_35210c:
    // 0x35210c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35210cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352110: 0x3e00008  jr          $ra
    ctx->pc = 0x352110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352110u;
        // 0x352114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352118u;
    // 0x352118: 0x0  nop
    ctx->pc = 0x352118u;
    // NOP
    // 0x35211c: 0x0  nop
    ctx->pc = 0x35211cu;
    // NOP
    // 0x352120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x352120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x352124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x352128: 0xc0d47e8  jal         func_351FA0
    ctx->pc = 0x352128u;
    SET_GPR_U32(ctx, 31, 0x352130u);
    ctx->pc = 0x351FA0u;
    goto label_351fa0;
    ctx->pc = 0x352130u;
label_352130:
    // 0x352130: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x352130u;
    {
        const bool branch_taken_0x352130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352130) {
            ctx->pc = 0x352134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352130u;
            // 0x352134: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352148u;
            goto label_352148;
        }
    }
    ctx->pc = 0x352138u;
    // 0x352138: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x352138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x35213c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x35213Cu;
    SET_GPR_U32(ctx, 31, 0x352144u);
    ctx->pc = 0x352140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35213Cu;
    // 0x352140: 0x24842150  addiu       $a0, $a0, 0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x35213Cu, 0x352144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352144u;
label_352144:
    // 0x352144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_352148:
    // 0x352148: 0x3e00008  jr          $ra
    ctx->pc = 0x352148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352148u;
        // 0x35214c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352150u;
    // 0x352150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x352150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x352154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x352158: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x352158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
label_35215c:
    // 0x35215c: 0x8c43a000  lw          $v1, -0x6000($v0)
    ctx->pc = 0x35215cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4294942720))); // MMIO: 0x1000a000
    // 0x352160: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x352160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x352164: 0x0  nop
    ctx->pc = 0x352164u;
    // NOP
    // 0x352168: 0x0  nop
    ctx->pc = 0x352168u;
    // NOP
    // 0x35216c: 0x0  nop
    ctx->pc = 0x35216cu;
    // NOP
    // 0x352170: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x352170u;
    {
        const bool branch_taken_0x352170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x352170) {
            ctx->pc = 0x35215Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35215c;
        }
    }
    ctx->pc = 0x352178u;
    // 0x352178: 0xc052b20  jal         func_14AC80
    ctx->pc = 0x352178u;
    SET_GPR_U32(ctx, 31, 0x352180u);
    ctx->pc = 0x14AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC80u, 0x352178u, 0x352180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352180u;
label_352180:
    // 0x352180: 0xc047358  jal         func_11CD60
    ctx->pc = 0x352180u;
    SET_GPR_U32(ctx, 31, 0x352188u);
    ctx->pc = 0x11CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CD60u, 0x352180u, 0x352188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352188u;
label_352188:
    // 0x352188: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x352188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x35218c: 0x24054402  addiu       $a1, $zero, 0x4402
    ctx->pc = 0x35218cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17410));
    // 0x352190: 0x24845528  addiu       $a0, $a0, 0x5528
    ctx->pc = 0x352190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21800));
    // 0x352194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x352194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352198: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x352198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35219c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35219cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3521a0: 0xc045286  jal         func_114A18
    ctx->pc = 0x3521A0u;
    SET_GPR_U32(ctx, 31, 0x3521A8u);
    ctx->pc = 0x3521A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3521A0u;
    // 0x3521a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A18u, 0x3521A0u, 0x3521A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3521A8u;
label_3521a8:
    // 0x3521a8: 0x440fff7  bltz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3521A8u;
    {
        const bool branch_taken_0x3521a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3521a8) {
            ctx->pc = 0x352188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_352188;
        }
    }
    ctx->pc = 0x3521B0u;
    // 0x3521b0: 0xc043fb2  jal         func_10FEC8
    ctx->pc = 0x3521B0u;
    SET_GPR_U32(ctx, 31, 0x3521B8u);
    ctx->pc = 0x10FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FEC8u, 0x3521B0u, 0x3521B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3521B8u;
label_3521b8:
    // 0x3521b8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3521b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3521bc: 0x904295d0  lbu         $v0, -0x6A30($v0)
    ctx->pc = 0x3521bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940112)));
    // 0x3521c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3521C0u;
    {
        const bool branch_taken_0x3521c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3521c0) {
            ctx->pc = 0x3521E8u;
            goto label_3521e8;
        }
    }
    ctx->pc = 0x3521C8u;
    // 0x3521c8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3521c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3521cc: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3521ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x3521d0: 0x248496a0  addiu       $a0, $a0, -0x6960
    ctx->pc = 0x3521d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940320));
    // 0x3521d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3521d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3521d8: 0xc045d44  jal         func_117510
    ctx->pc = 0x3521D8u;
    SET_GPR_U32(ctx, 31, 0x3521E0u);
    ctx->pc = 0x3521DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3521D8u;
    // 0x3521dc: 0x24c696e0  addiu       $a2, $a2, -0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117510u, 0x3521D8u, 0x3521E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3521E0u;
label_3521e0:
    // 0x3521e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3521E0u;
    {
        const bool branch_taken_0x3521e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3521E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521E0u;
        // 0x3521e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3521e0) {
            ctx->pc = 0x352204u;
            goto label_352204;
        }
    }
    ctx->pc = 0x3521E8u;
label_3521e8:
    // 0x3521e8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3521e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x3521ec: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x3521ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x3521f0: 0x248496a0  addiu       $a0, $a0, -0x6960
    ctx->pc = 0x3521f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940320));
    // 0x3521f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3521f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3521f8: 0xc045d44  jal         func_117510
    ctx->pc = 0x3521F8u;
    SET_GPR_U32(ctx, 31, 0x352200u);
    ctx->pc = 0x3521FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3521F8u;
    // 0x3521fc: 0x24c696c0  addiu       $a2, $a2, -0x6940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117510u, 0x3521F8u, 0x352200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352200u;
label_352200:
    // 0x352200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_352204:
    // 0x352204: 0x3e00008  jr          $ra
    ctx->pc = 0x352204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352204u;
        // 0x352208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35220Cu;
    // 0x35220c: 0x0  nop
    ctx->pc = 0x35220cu;
    // NOP
    if (ctx->pc == 0x35220cu) { ctx->pc = 0x352210u; }
}
