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

// Function: sub_001DC038
// Address: 0x1dc038 - 0x1dc170
void sub_001DC038_0x1dc038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC038_0x1dc038");
#endif

    switch (ctx->pc) {
        case 0x1dc058u: goto label_1dc058;
        case 0x1dc088u: goto label_1dc088;
        case 0x1dc0a4u: goto label_1dc0a4;
        case 0x1dc0bcu: goto label_1dc0bc;
        case 0x1dc0d8u: goto label_1dc0d8;
        case 0x1dc0e0u: goto label_1dc0e0;
        case 0x1dc108u: goto label_1dc108;
        case 0x1dc120u: goto label_1dc120;
        case 0x1dc13cu: goto label_1dc13c;
        case 0x1dc148u: goto label_1dc148;
        default: break;
    }

    ctx->pc = 0x1dc038u;

    // 0x1dc038: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dc038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dc03c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc040: 0x24428080  addiu       $v0, $v0, -0x7F80
    ctx->pc = 0x1dc040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
    // 0x1dc044: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1dc044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1dc048: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DC048u;
    {
        const bool branch_taken_0x1dc048 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1DC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC048u;
        // 0x1dc04c: 0x8c440058  lw          $a0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc048) {
            ctx->pc = 0x1DC07Cu;
            goto label_1dc07c;
        }
    }
    ctx->pc = 0x1DC050u;
    // 0x1dc050: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc054: 0x8c830188  lw          $v1, 0x188($a0)
    ctx->pc = 0x1dc054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
label_1dc058:
    // 0x1dc058: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc05c: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC05Cu;
    {
        const bool branch_taken_0x1dc05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1DC060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC05Cu;
        // 0x1dc060: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc05c) {
            ctx->pc = 0x1DC080u;
            goto label_1dc080;
        }
    }
    ctx->pc = 0x1DC064u;
    // 0x1dc064: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1dc064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1dc068: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1dc068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1dc06c: 0x0  nop
    ctx->pc = 0x1dc06cu;
    // NOP
    // 0x1dc070: 0x0  nop
    ctx->pc = 0x1dc070u;
    // NOP
    // 0x1dc074: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DC074u;
    {
        const bool branch_taken_0x1dc074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc074) {
            ctx->pc = 0x1DC078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC074u;
            // 0x1dc078: 0x8c830188  lw          $v1, 0x188($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc058;
        }
    }
    ctx->pc = 0x1DC07Cu;
label_1dc07c:
    // 0x1dc07c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc080:
    // 0x1dc080: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC088u;
label_1dc088:
    // 0x1dc088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dc08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dc094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dc098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dc09c: 0xc076f80  jal         func_1DBE00
    ctx->pc = 0x1DC09Cu;
    SET_GPR_U32(ctx, 31, 0x1DC0A4u);
    ctx->pc = 0x1DC0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC09Cu;
    // 0x1dc0a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE00u, 0x1DC09Cu, 0x1DC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC0A4u;
label_1dc0a4:
    // 0x1dc0a4: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x1dc0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x1dc0a8: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1dc0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1dc0ac: 0x24a58080  addiu       $a1, $a1, -0x7F80
    ctx->pc = 0x1dc0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934656));
    // 0x1dc0b0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dc0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dc0b4: 0xc0757de  jal         func_1D5F78
    ctx->pc = 0x1DC0B4u;
    SET_GPR_U32(ctx, 31, 0x1DC0BCu);
    ctx->pc = 0x1DC0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC0B4u;
    // 0x1dc0b8: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F78u, 0x1DC0B4u, 0x1DC0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC0BCu;
label_1dc0bc:
    // 0x1dc0bc: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x1dc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x1dc0c0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1dc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1dc0c4: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x1dc0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x1dc0c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1dc0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1dc0cc: 0x2604025c  addiu       $a0, $s0, 0x25C
    ctx->pc = 0x1dc0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 604));
    // 0x1dc0d0: 0xc07662e  jal         func_1D98B8
    ctx->pc = 0x1DC0D0u;
    SET_GPR_U32(ctx, 31, 0x1DC0D8u);
    ctx->pc = 0x1DC0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC0D0u;
    // 0x1dc0d4: 0xae0201d0  sw          $v0, 0x1D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98B8u, 0x1DC0D0u, 0x1DC0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC0D8u;
label_1dc0d8:
    // 0x1dc0d8: 0xc076fc4  jal         func_1DBF10
    ctx->pc = 0x1DC0D8u;
    SET_GPR_U32(ctx, 31, 0x1DC0E0u);
    ctx->pc = 0x1DC0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC0D8u;
    // 0x1dc0dc: 0x260401dc  addiu       $a0, $s0, 0x1DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBF10u, 0x1DC0D8u, 0x1DC0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC0E0u;
label_1dc0e0:
    // 0x1dc0e0: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x1dc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x1dc0e4: 0x8e0201d0  lw          $v0, 0x1D0($s0)
    ctx->pc = 0x1dc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x1dc0e8: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x1dc0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x1dc0ec: 0xae0203c4  sw          $v0, 0x3C4($s0)
    ctx->pc = 0x1dc0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 2));
    // 0x1dc0f0: 0xae000378  sw          $zero, 0x378($s0)
    ctx->pc = 0x1dc0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 0));
    // 0x1dc0f4: 0xae00037c  sw          $zero, 0x37C($s0)
    ctx->pc = 0x1dc0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 0));
    // 0x1dc0f8: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x1dc0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
    // 0x1dc0fc: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x1dc0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
    // 0x1dc100: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x1dc100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x1dc104: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dc104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc108:
    // 0x1dc108: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dc108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1dc10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc114: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dc114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc118: 0xc0767f8  jal         func_1D9FE0
    ctx->pc = 0x1DC118u;
    SET_GPR_U32(ctx, 31, 0x1DC120u);
    ctx->pc = 0x1DC11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC118u;
    // 0x1dc11c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FE0u, 0x1DC118u, 0x1DC120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC120u;
label_1dc120:
    // 0x1dc120: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1dc120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dc124: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DC124u;
    {
        const bool branch_taken_0x1dc124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC124u;
        // 0x1dc128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc124) {
            ctx->pc = 0x1DC108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc108;
        }
    }
    ctx->pc = 0x1DC12Cu;
    // 0x1dc12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dc130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc134: 0xc076802  jal         func_1DA008
    ctx->pc = 0x1DC134u;
    SET_GPR_U32(ctx, 31, 0x1DC13Cu);
    ctx->pc = 0x1DC138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC134u;
    // 0x1dc138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA008u, 0x1DC134u, 0x1DC13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC13Cu;
label_1dc13c:
    // 0x1dc13c: 0xae000424  sw          $zero, 0x424($s0)
    ctx->pc = 0x1dc13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 0));
    // 0x1dc140: 0xc077110  jal         func_1DC440
    ctx->pc = 0x1DC140u;
    SET_GPR_U32(ctx, 31, 0x1DC148u);
    ctx->pc = 0x1DC144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC140u;
    // 0x1dc144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC440u, 0x1DC140u, 0x1DC148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC148u;
label_1dc148:
    // 0x1dc148: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dc148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc14c: 0xae0203d0  sw          $v0, 0x3D0($s0)
    ctx->pc = 0x1dc14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 2));
    // 0x1dc150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc154: 0xae030188  sw          $v1, 0x188($s0)
    ctx->pc = 0x1dc154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
    // 0x1dc158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc15c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dc15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc164: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC164u;
        // 0x1dc168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC16Cu;
    // 0x1dc16c: 0x0  nop
    ctx->pc = 0x1dc16cu;
    // NOP
}
