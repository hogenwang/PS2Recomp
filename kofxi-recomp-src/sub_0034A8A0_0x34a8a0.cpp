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

// Function: sub_0034A8A0
// Address: 0x34a8a0 - 0x34acb0
void sub_0034A8A0_0x34a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A8A0_0x34a8a0");
#endif

    switch (ctx->pc) {
        case 0x34a8c8u: goto label_34a8c8;
        case 0x34a8d4u: goto label_34a8d4;
        case 0x34a8f8u: goto label_34a8f8;
        case 0x34a964u: goto label_34a964;
        case 0x34a974u: goto label_34a974;
        case 0x34a980u: goto label_34a980;
        case 0x34a9ccu: goto label_34a9cc;
        case 0x34a9e4u: goto label_34a9e4;
        case 0x34a9f0u: goto label_34a9f0;
        case 0x34aa34u: goto label_34aa34;
        case 0x34aa48u: goto label_34aa48;
        case 0x34aa74u: goto label_34aa74;
        case 0x34aa80u: goto label_34aa80;
        case 0x34aae8u: goto label_34aae8;
        case 0x34ab7cu: goto label_34ab7c;
        case 0x34ab90u: goto label_34ab90;
        case 0x34abc8u: goto label_34abc8;
        case 0x34abd4u: goto label_34abd4;
        case 0x34abfcu: goto label_34abfc;
        case 0x34ac18u: goto label_34ac18;
        case 0x34ac44u: goto label_34ac44;
        case 0x34ac50u: goto label_34ac50;
        case 0x34ac94u: goto label_34ac94;
        case 0x34ac9cu: goto label_34ac9c;
        default: break;
    }

    ctx->pc = 0x34a8a0u;

    // 0x34a8a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34a8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34a8a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a8a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34a8ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34a8b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x34a8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a8b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34a8b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34a8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8c4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x34a8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34a8c8:
    // 0x34a8c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8cc: 0xc0d0a6c  jal         func_3429B0
    ctx->pc = 0x34A8CCu;
    SET_GPR_U32(ctx, 31, 0x34A8D4u);
    ctx->pc = 0x34A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A8CCu;
    // 0x34a8d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429B0u, 0x34A8CCu, 0x34A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A8D4u;
label_34a8d4:
    // 0x34a8d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A8D4u;
    {
        const bool branch_taken_0x34a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a8d4) {
            ctx->pc = 0x34A8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A8D4u;
            // 0x34a8d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A8E4u;
            goto label_34a8e4;
        }
    }
    ctx->pc = 0x34A8DCu;
    // 0x34a8dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x34A8DCu;
    {
        const bool branch_taken_0x34a8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8DCu;
        // 0x34a8e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8dc) {
            ctx->pc = 0x34A91Cu;
            goto label_34a91c;
        }
    }
    ctx->pc = 0x34A8E4u;
label_34a8e4:
    // 0x34a8e4: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x34a8e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34a8e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34A8E8u;
    {
        const bool branch_taken_0x34a8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A8E8u;
        // 0x34a8ec: 0x26310022  addiu       $s1, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a8e8) {
            ctx->pc = 0x34A8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a8c8;
        }
    }
    ctx->pc = 0x34A8F0u;
    // 0x34a8f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34a8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a8f4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x34a8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_34a8f8:
    // 0x34a8f8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x34a8f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a8fc: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A8FCu;
    {
        const bool branch_taken_0x34a8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x34a8fc) {
            ctx->pc = 0x34A900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A8FCu;
            // 0x34a900: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A90Cu;
            goto label_34a90c;
        }
    }
    ctx->pc = 0x34A904u;
    // 0x34a904: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34A904u;
    {
        const bool branch_taken_0x34a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A904u;
        // 0x34a908: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a904) {
            ctx->pc = 0x34A920u;
            goto label_34a920;
        }
    }
    ctx->pc = 0x34A90Cu;
label_34a90c:
    // 0x34a90c: 0x28430014  slti        $v1, $v0, 0x14
    ctx->pc = 0x34a90cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34a910: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x34A910u;
    {
        const bool branch_taken_0x34a910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A910u;
        // 0x34a914: 0x26100022  addiu       $s0, $s0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a910) {
            ctx->pc = 0x34A8F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34a8f8;
        }
    }
    ctx->pc = 0x34A918u;
    // 0x34a918: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x34a918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_34a91c:
    // 0x34a91c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34a920:
    // 0x34a920: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34a920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34a924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a92c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a930: 0x3e00008  jr          $ra
    ctx->pc = 0x34A930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A930u;
        // 0x34a934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A938u;
    // 0x34a938: 0x0  nop
    ctx->pc = 0x34a938u;
    // NOP
    // 0x34a93c: 0x0  nop
    ctx->pc = 0x34a93cu;
    // NOP
    // 0x34a940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34a944: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34a948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34a94c: 0xa440be90  sh          $zero, -0x4170($v0)
    ctx->pc = 0x34a94cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 0));
    // 0x34a950: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a954: 0xa440be92  sh          $zero, -0x416E($v0)
    ctx->pc = 0x34a954u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 0));
    // 0x34a958: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a95c: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34A95Cu;
    SET_GPR_U32(ctx, 31, 0x34A964u);
    ctx->pc = 0x34A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A95Cu;
    // 0x34a960: 0xac40be80  sw          $zero, -0x4180($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343080u, 0x34A95Cu, 0x34A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A964u;
label_34a964:
    // 0x34a964: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34a964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34a968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34a968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a96c: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34A96Cu;
    SET_GPR_U32(ctx, 31, 0x34A974u);
    ctx->pc = 0x34A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A96Cu;
    // 0x34a970: 0x2484a2a0  addiu       $a0, $a0, -0x5D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34A96Cu, 0x34A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A974u;
label_34a974:
    // 0x34a974: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34a974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34a978: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34A978u;
    SET_GPR_U32(ctx, 31, 0x34A980u);
    ctx->pc = 0x34A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A978u;
    // 0x34a97c: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x34A978u, 0x34A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A980u;
label_34a980:
    // 0x34a980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34a980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a984: 0x3e00008  jr          $ra
    ctx->pc = 0x34A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A984u;
        // 0x34a988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A98Cu;
    // 0x34a98c: 0x0  nop
    ctx->pc = 0x34a98cu;
    // NOP
    // 0x34a990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34a994: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x34a994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
    // 0x34a998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34a998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34a99c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34a9a0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34a9a4: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x34a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x34a9a8: 0x9443be90  lhu         $v1, -0x4170($v0)
    ctx->pc = 0x34a9a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34a9ac: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x34a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x34a9b0: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x34a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x34a9b4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34a9b8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x34a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x34a9bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34a9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a9c4: 0xc049c48  jal         func_127120
    ctx->pc = 0x34A9C4u;
    SET_GPR_U32(ctx, 31, 0x34A9CCu);
    ctx->pc = 0x34A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A9C4u;
    // 0x34a9c8: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x34A9C4u, 0x34A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A9CCu;
label_34a9cc:
    // 0x34a9cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34a9d0: 0x24053540  addiu       $a1, $zero, 0x3540
    ctx->pc = 0x34a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13632));
    // 0x34a9d4: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34a9d8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34a9dc: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34A9DCu;
    SET_GPR_U32(ctx, 31, 0x34A9E4u);
    ctx->pc = 0x34A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A9DCu;
    // 0x34a9e0: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34A9DCu, 0x34A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A9E4u;
label_34a9e4:
    // 0x34a9e4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34a9e8: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34A9E8u;
    SET_GPR_U32(ctx, 31, 0x34A9F0u);
    ctx->pc = 0x34A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A9E8u;
    // 0x34a9ec: 0x2484aa00  addiu       $a0, $a0, -0x5600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347260u, 0x34A9E8u, 0x34A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A9F0u;
label_34a9f0:
    // 0x34a9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34a9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x34A9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A9F4u;
        // 0x34a9f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A9FCu;
    // 0x34a9fc: 0x0  nop
    ctx->pc = 0x34a9fcu;
    // NOP
    // 0x34aa00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34aa04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x34aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x34aa08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34aa0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34aa10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34aa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34aa14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34aa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34aa18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34aa1c: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x34aa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x34aa20: 0x2610ddc0  addiu       $s0, $s0, -0x2240
    ctx->pc = 0x34aa20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
    // 0x34aa24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34aa28: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x34AA28u;
    {
        const bool branch_taken_0x34aa28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA28u;
        // 0x34aa2c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa28) {
            ctx->pc = 0x34AB50u;
            goto label_34ab50;
        }
    }
    ctx->pc = 0x34AA30u;
    // 0x34aa30: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x34aa30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34aa34:
    // 0x34aa34: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x34aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x34aa38: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x34AA38u;
    {
        const bool branch_taken_0x34aa38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA38u;
        // 0x34aa3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa38) {
            ctx->pc = 0x34AB38u;
            goto label_34ab38;
        }
    }
    ctx->pc = 0x34AA40u;
    // 0x34aa40: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x34aa40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aa44: 0x0  nop
    ctx->pc = 0x34aa44u;
    // NOP
label_34aa48:
    // 0x34aa48: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34aa4c: 0x8c44be80  lw          $a0, -0x4180($v0)
    ctx->pc = 0x34aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    // 0x34aa50: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x34aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x34aa54: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34aa58: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x34aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34aa5c: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34aa60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34aa64: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34aa68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34aa6c: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x34AA6Cu;
    SET_GPR_U32(ctx, 31, 0x34AA74u);
    ctx->pc = 0x34AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA6Cu;
    // 0x34aa70: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6C0u, 0x34AA6Cu, 0x34AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA74u;
label_34aa74:
    // 0x34aa74: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34aa78: 0xc0d29f4  jal         func_34A7D0
    ctx->pc = 0x34AA78u;
    SET_GPR_U32(ctx, 31, 0x34AA80u);
    ctx->pc = 0x34AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA78u;
    // 0x34aa7c: 0x9c44be80  lwu         $a0, -0x4180($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294950528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A7D0u, 0x34AA78u, 0x34AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA80u;
label_34aa80:
    // 0x34aa80: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x34AA80u;
    {
        const bool branch_taken_0x34aa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aa80) {
            ctx->pc = 0x34AB20u;
            goto label_34ab20;
        }
    }
    ctx->pc = 0x34AA88u;
    // 0x34aa88: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34aa8c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34aa90: 0x8c65be80  lw          $a1, -0x4180($v1)
    ctx->pc = 0x34aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950528)));
    // 0x34aa94: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34aa98: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x34aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x34aa9c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x34aa9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34aaa0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34aaa4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x34aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x34aaa8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x34aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34aaac: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x34aaacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x34aab0: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x34AAB0u;
    {
        const bool branch_taken_0x34aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x34aab0) {
            ctx->pc = 0x34AB20u;
            goto label_34ab20;
        }
    }
    ctx->pc = 0x34AAB8u;
    // 0x34aab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34aabc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34aac0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x34aac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x34aac4: 0x8c64be80  lw          $a0, -0x4180($v1)
    ctx->pc = 0x34aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950528)));
    // 0x34aac8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34aacc: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34aad0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x34aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34aad4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34aad8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34aadc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34aae0: 0xc0d2938  jal         func_34A4E0
    ctx->pc = 0x34AAE0u;
    SET_GPR_U32(ctx, 31, 0x34AAE8u);
    ctx->pc = 0x34AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AAE0u;
    // 0x34aae4: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A4E0u, 0x34AAE0u, 0x34AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AAE8u;
label_34aae8:
    // 0x34aae8: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x34aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x34aaec: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34aaf0: 0x8c87be80  lw          $a3, -0x4180($a0)
    ctx->pc = 0x34aaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950528)));
    // 0x34aaf4: 0x8c654098  lw          $a1, 0x4098($v1)
    ctx->pc = 0x34aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16536)));
    // 0x34aaf8: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x34aaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x34aafc: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x34aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x34ab00: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x34ab00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x34ab04: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34ab08: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x34ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x34ab0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x34ab0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x34ab10: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x34ab10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x34ab14: 0x8c82be80  lw          $v0, -0x4180($a0)
    ctx->pc = 0x34ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950528)));
    // 0x34ab18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34ab1c: 0xac62be80  sw          $v0, -0x4180($v1)
    ctx->pc = 0x34ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950528), GPR_U32(ctx, 2));
label_34ab20:
    // 0x34ab20: 0x8e4200e4  lw          $v0, 0xE4($s2)
    ctx->pc = 0x34ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x34ab24: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34ab24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34ab28: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x34ab28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34ab2c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x34AB2Cu;
    {
        const bool branch_taken_0x34ab2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB2Cu;
        // 0x34ab30: 0x26310094  addiu       $s1, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab2c) {
            ctx->pc = 0x34AA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34aa48;
        }
    }
    ctx->pc = 0x34AB34u;
    // 0x34ab34: 0x0  nop
    ctx->pc = 0x34ab34u;
    // NOP
label_34ab38:
    // 0x34ab38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34ab3c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34ab3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x34ab40: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x34ab40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34ab44: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x34AB44u;
    {
        const bool branch_taken_0x34ab44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB44u;
        // 0x34ab48: 0x26520330  addiu       $s2, $s2, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab44) {
            ctx->pc = 0x34AA34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34aa34;
        }
    }
    ctx->pc = 0x34AB4Cu;
    // 0x34ab4c: 0x0  nop
    ctx->pc = 0x34ab4cu;
    // NOP
label_34ab50:
    // 0x34ab50: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34ab54: 0x9442be90  lhu         $v0, -0x4170($v0)
    ctx->pc = 0x34ab54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34ab58: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x34ab58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x34ab5c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x34AB5Cu;
    {
        const bool branch_taken_0x34ab5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ab5c) {
            ctx->pc = 0x34AB84u;
            goto label_34ab84;
        }
    }
    ctx->pc = 0x34AB64u;
    // 0x34ab64: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x34ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34ab68: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ab6c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34ab70: 0x2484a990  addiu       $a0, $a0, -0x5670
    ctx->pc = 0x34ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    // 0x34ab74: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34AB74u;
    SET_GPR_U32(ctx, 31, 0x34AB7Cu);
    ctx->pc = 0x34AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB74u;
    // 0x34ab78: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34AB74u, 0x34AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB7Cu;
label_34ab7c:
    // 0x34ab7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34AB7Cu;
    {
        const bool branch_taken_0x34ab7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AB7Cu;
        // 0x34ab80: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab7c) {
            ctx->pc = 0x34AB94u;
            goto label_34ab94;
        }
    }
    ctx->pc = 0x34AB84u;
label_34ab84:
    // 0x34ab84: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ab88: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34AB88u;
    SET_GPR_U32(ctx, 31, 0x34AB90u);
    ctx->pc = 0x34AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AB88u;
    // 0x34ab8c: 0x2484abe0  addiu       $a0, $a0, -0x5420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34AB88u, 0x34AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB90u;
label_34ab90:
    // 0x34ab90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x34ab90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34ab94:
    // 0x34ab94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34ab94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34ab98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34ab98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34ab9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34ab9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34aba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34aba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34aba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34aba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x34ABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABA8u;
        // 0x34abac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ABA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ABB0u;
    // 0x34abb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34abb4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34abb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34abb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34abb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34abbc: 0x2484a2a0  addiu       $a0, $a0, -0x5D60
    ctx->pc = 0x34abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943392));
    // 0x34abc0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34ABC0u;
    SET_GPR_U32(ctx, 31, 0x34ABC8u);
    ctx->pc = 0x34ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ABC0u;
    // 0x34abc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34ABC0u, 0x34ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ABC8u;
label_34abc8:
    // 0x34abc8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34abcc: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34ABCCu;
    SET_GPR_U32(ctx, 31, 0x34ABD4u);
    ctx->pc = 0x34ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ABCCu;
    // 0x34abd0: 0x2484abe0  addiu       $a0, $a0, -0x5420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x34ABCCu, 0x34ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ABD4u;
label_34abd4:
    // 0x34abd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34abd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34abd8: 0x3e00008  jr          $ra
    ctx->pc = 0x34ABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABD8u;
        // 0x34abdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ABD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ABE0u;
    // 0x34abe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34abe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34abe4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34abe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34abe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34abec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34abecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34abf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34abf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34abf4: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34ABF4u;
    SET_GPR_U32(ctx, 31, 0x34ABFCu);
    ctx->pc = 0x34ABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ABF4u;
    // 0x34abf8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34ABF4u, 0x34ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ABFCu;
label_34abfc:
    // 0x34abfc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x34abfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34ac00: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34ac04: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ac08: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x34ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x34ac0c: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x34ac0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34ac10: 0xc0d0a90  jal         func_342A40
    ctx->pc = 0x34AC10u;
    SET_GPR_U32(ctx, 31, 0x34AC18u);
    ctx->pc = 0x34AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC10u;
    // 0x34ac14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A40u, 0x34AC10u, 0x34AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC18u;
label_34ac18:
    // 0x34ac18: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x34ac18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x34ac1c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x34ac1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ac20: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34ac24: 0x30a44000  andi        $a0, $a1, 0x4000
    ctx->pc = 0x34ac24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x34ac28: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x34AC28u;
    {
        const bool branch_taken_0x34ac28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC28u;
        // 0x34ac2c: 0xac664378  sw          $a2, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac28) {
            ctx->pc = 0x34AC58u;
            goto label_34ac58;
        }
    }
    ctx->pc = 0x34AC30u;
    // 0x34ac30: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ac34: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x34ac38: 0xac404378  sw          $zero, 0x4378($v0)
    ctx->pc = 0x34ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    // 0x34ac3c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34AC3Cu;
    SET_GPR_U32(ctx, 31, 0x34AC44u);
    ctx->pc = 0x34AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC3Cu;
    // 0x34ac40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34AC3Cu, 0x34AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC44u;
label_34ac44:
    // 0x34ac44: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ac48: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34AC48u;
    SET_GPR_U32(ctx, 31, 0x34AC50u);
    ctx->pc = 0x34AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC48u;
    // 0x34ac4c: 0x24849200  addiu       $a0, $a0, -0x6E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x34AC48u, 0x34AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC50u;
label_34ac50:
    // 0x34ac50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x34AC50u;
    {
        const bool branch_taken_0x34ac50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AC50u;
        // 0x34ac54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac50) {
            ctx->pc = 0x34ACA0u;
            goto label_34aca0;
        }
    }
    ctx->pc = 0x34AC58u;
label_34ac58:
    // 0x34ac58: 0x30a32000  andi        $v1, $a1, 0x2000
    ctx->pc = 0x34ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x34ac5c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x34AC5Cu;
    {
        const bool branch_taken_0x34ac5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ac5c) {
            ctx->pc = 0x34AC9Cu;
            goto label_34ac9c;
        }
    }
    ctx->pc = 0x34AC64u;
    // 0x34ac64: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x34ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34ac68: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34ac6c: 0xc4001a  div         $zero, $a2, $a0
    ctx->pc = 0x34ac6cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34ac70: 0x8c63be80  lw          $v1, -0x4180($v1)
    ctx->pc = 0x34ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950528)));
    // 0x34ac74: 0x0  nop
    ctx->pc = 0x34ac74u;
    // NOP
    // 0x34ac78: 0x2010  mfhi        $a0
    ctx->pc = 0x34ac78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34ac7c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x34ac7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34ac80: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x34AC80u;
    {
        const bool branch_taken_0x34ac80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ac80) {
            ctx->pc = 0x34AC9Cu;
            goto label_34ac9c;
        }
    }
    ctx->pc = 0x34AC88u;
    // 0x34ac88: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34ac8c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34AC8Cu;
    SET_GPR_U32(ctx, 31, 0x34AC94u);
    ctx->pc = 0x34AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AC8Cu;
    // 0x34ac90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34AC8Cu, 0x34AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC94u;
label_34ac94:
    // 0x34ac94: 0xc0d2b2c  jal         func_34ACB0
    ctx->pc = 0x34AC94u;
    SET_GPR_U32(ctx, 31, 0x34AC9Cu);
    ctx->pc = 0x34ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ACB0u, 0x34AC94u, 0x34AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AC9Cu;
label_34ac9c:
    // 0x34ac9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34ac9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34aca0:
    // 0x34aca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34aca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34aca4: 0x3e00008  jr          $ra
    ctx->pc = 0x34ACA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ACA4u;
        // 0x34aca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ACA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ACACu;
    // 0x34acac: 0x0  nop
    ctx->pc = 0x34acacu;
    // NOP
    if (ctx->pc == 0x34acacu) { ctx->pc = 0x34acb0u; }
}
