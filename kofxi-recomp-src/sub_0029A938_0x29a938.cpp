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

// Function: sub_0029A938
// Address: 0x29a938 - 0x29ab10
void sub_0029A938_0x29a938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A938_0x29a938");
#endif

    switch (ctx->pc) {
        case 0x29a978u: goto label_29a978;
        case 0x29a9a8u: goto label_29a9a8;
        case 0x29a9fcu: goto label_29a9fc;
        case 0x29aa2cu: goto label_29aa2c;
        case 0x29aa80u: goto label_29aa80;
        case 0x29aab0u: goto label_29aab0;
        case 0x29ab00u: goto label_29ab00;
        default: break;
    }

    ctx->pc = 0x29a938u;

    // 0x29a938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a93c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x29a93cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a940: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29a944: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29a944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29a948: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x29A948u;
    {
        const bool branch_taken_0x29a948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A948u;
        // 0x29a94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a948) {
            ctx->pc = 0x29A9BCu;
            goto label_29a9bc;
        }
    }
    ctx->pc = 0x29A950u;
    // 0x29a950: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29a954: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x29A954u;
    {
        const bool branch_taken_0x29a954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A954u;
        // 0x29a958: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a954) {
            ctx->pc = 0x29A9C0u;
            goto label_29a9c0;
        }
    }
    ctx->pc = 0x29A95Cu;
    // 0x29a95c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29a960: 0x8c4467e8  lw          $a0, 0x67E8($v0)
    ctx->pc = 0x29a960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
    // 0x29a964: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29A964u;
    {
        const bool branch_taken_0x29a964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A964u;
        // 0x29a968: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a964) {
            ctx->pc = 0x29A988u;
            goto label_29a988;
        }
    }
    ctx->pc = 0x29A96Cu;
    // 0x29a96c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x29a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29a970: 0xc0a6246  jal         func_298918
    ctx->pc = 0x29A970u;
    SET_GPR_U32(ctx, 31, 0x29A978u);
    ctx->pc = 0x29A974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A970u;
    // 0x29a974: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298918u, 0x29A970u, 0x29A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A978u;
label_29a978:
    // 0x29a978: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A978u;
    {
        const bool branch_taken_0x29a978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A978u;
        // 0x29a97c: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a978) {
            ctx->pc = 0x29A98Cu;
            goto label_29a98c;
        }
    }
    ctx->pc = 0x29A980u;
    // 0x29a980: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29A980u;
    {
        const bool branch_taken_0x29a980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A980u;
        // 0x29a984: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a980) {
            ctx->pc = 0x29A9B8u;
            goto label_29a9b8;
        }
    }
    ctx->pc = 0x29A988u;
label_29a988:
    // 0x29a988: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x29a988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_29a98c:
    // 0x29a98c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x29a98cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x29a990: 0x24a56650  addiu       $a1, $a1, 0x6650
    ctx->pc = 0x29a990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26192));
    // 0x29a994: 0x2508aad0  addiu       $t0, $t0, -0x5530
    ctx->pc = 0x29a994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945488));
    // 0x29a998: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x29a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29a99c: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x29a99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x29a9a0: 0xc0a6ac4  jal         func_29AB10
    ctx->pc = 0x29A9A0u;
    SET_GPR_U32(ctx, 31, 0x29A9A8u);
    ctx->pc = 0x29A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9A0u;
    // 0x29a9a4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AB10u, 0x29A9A0u, 0x29A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9A8u;
label_29a9a8:
    // 0x29a9a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A9A8u;
    {
        const bool branch_taken_0x29a9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a9a8) {
            ctx->pc = 0x29A9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A9A8u;
            // 0x29a9ac: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A9B8u;
            goto label_29a9b8;
        }
    }
    ctx->pc = 0x29A9B0u;
    // 0x29a9b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29A9B0u;
    {
        const bool branch_taken_0x29a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9B0u;
        // 0x29a9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9b0) {
            ctx->pc = 0x29A9BCu;
            goto label_29a9bc;
        }
    }
    ctx->pc = 0x29A9B8u;
label_29a9b8:
    // 0x29a9b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29a9bc:
    // 0x29a9bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29a9c0:
    // 0x29a9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x29A9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9C0u;
        // 0x29a9c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A9C8u;
    // 0x29a9c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29a9cc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29a9ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29a9d0: 0x8c4367e8  lw          $v1, 0x67E8($v0)
    ctx->pc = 0x29a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
    // 0x29a9d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29a9d8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x29a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x29a9dc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29A9DCu;
    {
        const bool branch_taken_0x29a9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9DCu;
        // 0x29a9e0: 0xafbd0030  sw          $sp, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9dc) {
            ctx->pc = 0x29AA0Cu;
            goto label_29aa0c;
        }
    }
    ctx->pc = 0x29A9E4u;
    // 0x29a9e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a9e8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x29a9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9ec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29a9f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29a9f4: 0xc0a6246  jal         func_298918
    ctx->pc = 0x29A9F4u;
    SET_GPR_U32(ctx, 31, 0x29A9FCu);
    ctx->pc = 0x29A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9F4u;
    // 0x29a9f8: 0xafbd0024  sw          $sp, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298918u, 0x29A9F4u, 0x29A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9FCu;
label_29a9fc:
    // 0x29a9fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A9FCu;
    {
        const bool branch_taken_0x29a9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9FCu;
        // 0x29aa00: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9fc) {
            ctx->pc = 0x29AA10u;
            goto label_29aa10;
        }
    }
    ctx->pc = 0x29AA04u;
    // 0x29aa04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29AA04u;
    {
        const bool branch_taken_0x29aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA04u;
        // 0x29aa08: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa04) {
            ctx->pc = 0x29AA3Cu;
            goto label_29aa3c;
        }
    }
    ctx->pc = 0x29AA0Cu;
label_29aa0c:
    // 0x29aa0c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x29aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_29aa10:
    // 0x29aa10: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x29aa10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x29aa14: 0x24a56450  addiu       $a1, $a1, 0x6450
    ctx->pc = 0x29aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25680));
    // 0x29aa18: 0x2508af40  addiu       $t0, $t0, -0x50C0
    ctx->pc = 0x29aa18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946624));
    // 0x29aa1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29aa20: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x29aa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x29aa24: 0xc0a6ac4  jal         func_29AB10
    ctx->pc = 0x29AA24u;
    SET_GPR_U32(ctx, 31, 0x29AA2Cu);
    ctx->pc = 0x29AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA24u;
    // 0x29aa28: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AB10u, 0x29AA24u, 0x29AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA2Cu;
label_29aa2c:
    // 0x29aa2c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AA2Cu;
    {
        const bool branch_taken_0x29aa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29aa2c) {
            ctx->pc = 0x29AA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AA2Cu;
            // 0x29aa30: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AA3Cu;
            goto label_29aa3c;
        }
    }
    ctx->pc = 0x29AA34u;
    // 0x29aa34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA34u;
    {
        const bool branch_taken_0x29aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA34u;
        // 0x29aa38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa34) {
            ctx->pc = 0x29AA40u;
            goto label_29aa40;
        }
    }
    ctx->pc = 0x29AA3Cu;
label_29aa3c:
    // 0x29aa3c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29aa40:
    // 0x29aa40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29aa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29aa44: 0x3e00008  jr          $ra
    ctx->pc = 0x29AA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA44u;
        // 0x29aa48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AA4Cu;
    // 0x29aa4c: 0x0  nop
    ctx->pc = 0x29aa4cu;
    // NOP
    // 0x29aa50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29aa54: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29aa58: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29aa5c: 0x8c4467e8  lw          $a0, 0x67E8($v0)
    ctx->pc = 0x29aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
    // 0x29aa60: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29aa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29aa64: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x29AA64u;
    {
        const bool branch_taken_0x29aa64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA64u;
        // 0x29aa68: 0xafbd0030  sw          $sp, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa64) {
            ctx->pc = 0x29AA90u;
            goto label_29aa90;
        }
    }
    ctx->pc = 0x29AA6Cu;
    // 0x29aa6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29aa70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29aa74: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29aa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29aa78: 0xc0a6246  jal         func_298918
    ctx->pc = 0x29AA78u;
    SET_GPR_U32(ctx, 31, 0x29AA80u);
    ctx->pc = 0x29AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA78u;
    // 0x29aa7c: 0xafbd0024  sw          $sp, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298918u, 0x29AA78u, 0x29AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA80u;
label_29aa80:
    // 0x29aa80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AA80u;
    {
        const bool branch_taken_0x29aa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA80u;
        // 0x29aa84: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa80) {
            ctx->pc = 0x29AA94u;
            goto label_29aa94;
        }
    }
    ctx->pc = 0x29AA88u;
    // 0x29aa88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29AA88u;
    {
        const bool branch_taken_0x29aa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA88u;
        // 0x29aa8c: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa88) {
            ctx->pc = 0x29AAC0u;
            goto label_29aac0;
        }
    }
    ctx->pc = 0x29AA90u;
label_29aa90:
    // 0x29aa90: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x29aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_29aa94:
    // 0x29aa94: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x29aa94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x29aa98: 0x24a562c0  addiu       $a1, $a1, 0x62C0
    ctx->pc = 0x29aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
    // 0x29aa9c: 0x2508af18  addiu       $t0, $t0, -0x50E8
    ctx->pc = 0x29aa9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946584));
    // 0x29aaa0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29aaa4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x29aaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29aaa8: 0xc0a6ac4  jal         func_29AB10
    ctx->pc = 0x29AAA8u;
    SET_GPR_U32(ctx, 31, 0x29AAB0u);
    ctx->pc = 0x29AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AAA8u;
    // 0x29aaac: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AB10u, 0x29AAA8u, 0x29AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AAB0u;
label_29aab0:
    // 0x29aab0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AAB0u;
    {
        const bool branch_taken_0x29aab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29aab0) {
            ctx->pc = 0x29AAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AAB0u;
            // 0x29aab4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AAC0u;
            goto label_29aac0;
        }
    }
    ctx->pc = 0x29AAB8u;
    // 0x29aab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29AAB8u;
    {
        const bool branch_taken_0x29aab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAB8u;
        // 0x29aabc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aab8) {
            ctx->pc = 0x29AAC4u;
            goto label_29aac4;
        }
    }
    ctx->pc = 0x29AAC0u;
label_29aac0:
    // 0x29aac0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x29aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29aac4:
    // 0x29aac4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29aac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x29AAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAC8u;
        // 0x29aacc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AAD0u;
    // 0x29aad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29aad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29aad8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29aadc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x29aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29aae0: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x29aae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29aae4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x29aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x29aae8: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x29aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29aaec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AAECu;
    {
        const bool branch_taken_0x29aaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AAECu;
        // 0x29aaf0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aaec) {
            ctx->pc = 0x29AB04u;
            goto label_29ab04;
        }
    }
    ctx->pc = 0x29AAF4u;
    // 0x29aaf4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x29aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x29aaf8: 0xc049c22  jal         func_127088
    ctx->pc = 0x29AAF8u;
    SET_GPR_U32(ctx, 31, 0x29AB00u);
    ctx->pc = 0x29AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AAF8u;
    // 0x29aafc: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x29AAF8u, 0x29AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB00u;
label_29ab00:
    // 0x29ab00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ab00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ab04:
    // 0x29ab04: 0x3e00008  jr          $ra
    ctx->pc = 0x29AB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB04u;
        // 0x29ab08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AB0Cu;
    // 0x29ab0c: 0x0  nop
    ctx->pc = 0x29ab0cu;
    // NOP
}
