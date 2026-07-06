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

// Function: sub_001A8968
// Address: 0x1a8968 - 0x1a8b30
void sub_001A8968_0x1a8968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8968_0x1a8968");
#endif

    switch (ctx->pc) {
        case 0x1a8980u: goto label_1a8980;
        case 0x1a8994u: goto label_1a8994;
        case 0x1a89a8u: goto label_1a89a8;
        case 0x1a89d8u: goto label_1a89d8;
        case 0x1a89ecu: goto label_1a89ec;
        case 0x1a8a00u: goto label_1a8a00;
        case 0x1a8a30u: goto label_1a8a30;
        case 0x1a8a44u: goto label_1a8a44;
        case 0x1a8a58u: goto label_1a8a58;
        case 0x1a8a98u: goto label_1a8a98;
        case 0x1a8aacu: goto label_1a8aac;
        case 0x1a8abcu: goto label_1a8abc;
        case 0x1a8adcu: goto label_1a8adc;
        case 0x1a8b08u: goto label_1a8b08;
        case 0x1a8b20u: goto label_1a8b20;
        default: break;
    }

    ctx->pc = 0x1a8968u;

    // 0x1a8968: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a896c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8970: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a8974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8978: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8978u;
    SET_GPR_U32(ctx, 31, 0x1A8980u);
    ctx->pc = 0x1A897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8978u;
    // 0x1a897c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A8978u, 0x1A8980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8980u;
label_1a8980:
    // 0x1a8980: 0x3c1101bf  lui         $s1, 0x1BF
    ctx->pc = 0x1a8980u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)447 << 16));
    // 0x1a8984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8988: 0x26313280  addiu       $s1, $s1, 0x3280
    ctx->pc = 0x1a8988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12928));
    // 0x1a898c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A898Cu;
    SET_GPR_U32(ctx, 31, 0x1A8994u);
    ctx->pc = 0x1A8990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A898Cu;
    // 0x1a8990: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A898Cu, 0x1A8994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8994u;
label_1a8994:
    // 0x1a8994: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8998: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a8998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a899c: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a89a0: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A89A0u;
    SET_GPR_U32(ctx, 31, 0x1A89A8u);
    ctx->pc = 0x1A89A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89A0u;
    // 0x1a89a4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A89A0u, 0x1A89A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89A8u;
label_1a89a8:
    // 0x1a89a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a89a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a89ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a89acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a89b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a89b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a89b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A89B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A89B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A89B4u;
        // 0x1a89b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A89B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A89BCu;
    // 0x1a89bc: 0x0  nop
    ctx->pc = 0x1a89bcu;
    // NOP
    // 0x1a89c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a89c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a89c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a89c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a89c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a89c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a89cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a89ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a89d0: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A89D0u;
    SET_GPR_U32(ctx, 31, 0x1A89D8u);
    ctx->pc = 0x1A89D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89D0u;
    // 0x1a89d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A89D0u, 0x1A89D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89D8u;
label_1a89d8:
    // 0x1a89d8: 0x3c1101bf  lui         $s1, 0x1BF
    ctx->pc = 0x1a89d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)447 << 16));
    // 0x1a89dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a89dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89e0: 0x26313280  addiu       $s1, $s1, 0x3280
    ctx->pc = 0x1a89e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12928));
    // 0x1a89e4: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A89E4u;
    SET_GPR_U32(ctx, 31, 0x1A89ECu);
    ctx->pc = 0x1A89E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89E4u;
    // 0x1a89e8: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A89E4u, 0x1A89ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A89ECu;
label_1a89ec:
    // 0x1a89ec: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a89f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a89f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a89f4: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a89f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a89f8: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A89F8u;
    SET_GPR_U32(ctx, 31, 0x1A8A00u);
    ctx->pc = 0x1A89FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A89F8u;
    // 0x1a89fc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A89F8u, 0x1A8A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A00u;
label_1a8a00:
    // 0x1a8a00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8a04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a8a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A0Cu;
        // 0x1a8a10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8A14u;
    // 0x1a8a14: 0x0  nop
    ctx->pc = 0x1a8a14u;
    // NOP
    // 0x1a8a18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8a20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a8a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8a28: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8A28u;
    SET_GPR_U32(ctx, 31, 0x1A8A30u);
    ctx->pc = 0x1A8A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A28u;
    // 0x1a8a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A8A28u, 0x1A8A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A30u;
label_1a8a30:
    // 0x1a8a30: 0x3c1101bf  lui         $s1, 0x1BF
    ctx->pc = 0x1a8a30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)447 << 16));
    // 0x1a8a34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a38: 0x26313280  addiu       $s1, $s1, 0x3280
    ctx->pc = 0x1a8a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12928));
    // 0x1a8a3c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8A3Cu;
    SET_GPR_U32(ctx, 31, 0x1A8A44u);
    ctx->pc = 0x1A8A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A3Cu;
    // 0x1a8a40: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A8A3Cu, 0x1A8A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A44u;
label_1a8a44:
    // 0x1a8a44: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8a48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a8a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a4c: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a8a50: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A8A50u;
    SET_GPR_U32(ctx, 31, 0x1A8A58u);
    ctx->pc = 0x1A8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A50u;
    // 0x1a8a54: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A8A50u, 0x1A8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A58u;
label_1a8a58:
    // 0x1a8a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8a5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a8a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8a64: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A64u;
        // 0x1a8a68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8A6Cu;
    // 0x1a8a6c: 0x0  nop
    ctx->pc = 0x1a8a6cu;
    // NOP
    // 0x1a8a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a8a74: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a8a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a8a78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a8a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a8a7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a8a7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a8a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a8a84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8a8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a8a90: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8A90u;
    SET_GPR_U32(ctx, 31, 0x1A8A98u);
    ctx->pc = 0x1A8A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A90u;
    // 0x1a8a94: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A8A90u, 0x1A8A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8A98u;
label_1a8a98:
    // 0x1a8a98: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1a8a98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1a8a9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a8a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8aa0: 0x26103280  addiu       $s0, $s0, 0x3280
    ctx->pc = 0x1a8aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12928));
    // 0x1a8aa4: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8AA4u;
    SET_GPR_U32(ctx, 31, 0x1A8AACu);
    ctx->pc = 0x1A8AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AA4u;
    // 0x1a8aa8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A8AA4u, 0x1A8AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8AACu;
label_1a8aac:
    // 0x1a8aac: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1a8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1a8ab0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a8ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ab4: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1A8AB4u;
    SET_GPR_U32(ctx, 31, 0x1A8ABCu);
    ctx->pc = 0x1A8AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AB4u;
    // 0x1a8ab8: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1A8AB4u, 0x1A8ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8ABCu;
label_1a8abc:
    // 0x1a8abc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a8ac0: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8ac4: 0x8c62e148  lw          $v0, -0x1EB8($v1)
    ctx->pc = 0x1a8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959432)));
    // 0x1a8ac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a8ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8acc: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a8ad0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a8ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a8ad4: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A8AD4u;
    SET_GPR_U32(ctx, 31, 0x1A8ADCu);
    ctx->pc = 0x1A8AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8AD4u;
    // 0x1a8ad8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A8AD4u, 0x1A8ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8ADCu;
label_1a8adc:
    // 0x1a8adc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8ae0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a8ae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8ae4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a8ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8ae8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a8ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8AF0u;
        // 0x1a8af4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8AF8u;
    // 0x1a8af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8b00: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8B00u;
    SET_GPR_U32(ctx, 31, 0x1A8B08u);
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A8B00u, 0x1A8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B08u;
label_1a8b08:
    // 0x1a8b08: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8b0c: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a8b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a8b10: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a8b14: 0x24a53280  addiu       $a1, $a1, 0x3280
    ctx->pc = 0x1a8b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12928));
    // 0x1a8b18: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A8B18u;
    SET_GPR_U32(ctx, 31, 0x1A8B20u);
    ctx->pc = 0x1A8B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B18u;
    // 0x1a8b1c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A8B18u, 0x1A8B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B20u;
label_1a8b20:
    // 0x1a8b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8B24u;
        // 0x1a8b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8B2Cu;
    // 0x1a8b2c: 0x0  nop
    ctx->pc = 0x1a8b2cu;
    // NOP
    if (ctx->pc == 0x1a8b2cu) { ctx->pc = 0x1a8b30u; }
}
