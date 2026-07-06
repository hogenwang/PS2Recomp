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

// Function: sub_0021E908
// Address: 0x21e908 - 0x21e9e0
void sub_0021E908_0x21e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E908_0x21e908");
#endif

    switch (ctx->pc) {
        case 0x21e94cu: goto label_21e94c;
        case 0x21e958u: goto label_21e958;
        case 0x21e970u: goto label_21e970;
        case 0x21e97cu: goto label_21e97c;
        case 0x21e98cu: goto label_21e98c;
        case 0x21e99cu: goto label_21e99c;
        case 0x21e9b8u: goto label_21e9b8;
        default: break;
    }

    ctx->pc = 0x21e908u;

    // 0x21e908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e90c: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x21e90cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x21e910: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21e910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21e914: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x21e914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x21e918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e91c: 0x24c61cf0  addiu       $a2, $a2, 0x1CF0
    ctx->pc = 0x21e91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7408));
    // 0x21e920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e924: 0x25f41c08  addiu       $s4, $t7, 0x1C08
    ctx->pc = 0x21e924u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 7176));
    // 0x21e928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21e928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21e92c: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x21e92cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x21e930: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21e930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e934: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21e938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e93c: 0x25f11db8  addiu       $s1, $t7, 0x1DB8
    ctx->pc = 0x21e93cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 7608));
    // 0x21e940: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21e940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e944: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21E944u;
    SET_GPR_U32(ctx, 31, 0x21E94Cu);
    ctx->pc = 0x21E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E944u;
    // 0x21e948: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x21E944u, 0x21E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E94Cu;
label_21e94c:
    // 0x21e94c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e950: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21E950u;
    SET_GPR_U32(ctx, 31, 0x21E958u);
    ctx->pc = 0x21E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E950u;
    // 0x21e954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A7C0u, 0x21E950u, 0x21E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E958u;
label_21e958:
    // 0x21e958: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21e958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e960: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21E960u;
    {
        const bool branch_taken_0x21e960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E960u;
        // 0x21e964: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e960) {
            ctx->pc = 0x21E9BCu;
            goto label_21e9bc;
        }
    }
    ctx->pc = 0x21E968u;
    // 0x21e968: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x21E968u;
    SET_GPR_U32(ctx, 31, 0x21E970u);
    ctx->pc = 0x12A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A7C0u, 0x21E968u, 0x21E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E970u;
label_21e970:
    // 0x21e970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21e970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e974: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x21E974u;
    SET_GPR_U32(ctx, 31, 0x21E97Cu);
    ctx->pc = 0x21E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E974u;
    // 0x21e978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x21E974u, 0x21E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E97Cu;
label_21e97c:
    // 0x21e97c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21e980: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x21e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x21e984: 0xc04a726  jal         func_129C98
    ctx->pc = 0x21E984u;
    SET_GPR_U32(ctx, 31, 0x21E98Cu);
    ctx->pc = 0x21E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E984u;
    // 0x21e988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x21E984u, 0x21E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E98Cu;
label_21e98c:
    // 0x21e98c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E98Cu;
    {
        const bool branch_taken_0x21e98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E98Cu;
        // 0x21e990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e98c) {
            ctx->pc = 0x21E9A0u;
            goto label_21e9a0;
        }
    }
    ctx->pc = 0x21E994u;
    // 0x21e994: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x21E994u;
    SET_GPR_U32(ctx, 31, 0x21E99Cu);
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x21E994u, 0x21E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E99Cu;
label_21e99c:
    // 0x21e99c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x21e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_21e9a0:
    // 0x21e9a0: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x21e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x21e9a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21e9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21e9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9b0: 0xc0898b0  jal         func_2262C0
    ctx->pc = 0x21E9B0u;
    SET_GPR_U32(ctx, 31, 0x21E9B8u);
    ctx->pc = 0x21E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E9B0u;
    // 0x21e9b4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C0u, 0x21E9B0u, 0x21E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9B8u;
label_21e9b8:
    // 0x21e9b8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x21e9b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e9bc:
    // 0x21e9bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e9c0: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x21e9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e9c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e9c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e9c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e9cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21e9ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e9d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21e9d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e9d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21e9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21e9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21E9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9D8u;
        // 0x21e9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E9E0u;
}
