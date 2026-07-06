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

// Function: sub_0026B910
// Address: 0x26b910 - 0x26bb60
void sub_0026B910_0x26b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B910_0x26b910");
#endif

    switch (ctx->pc) {
        case 0x26b93cu: goto label_26b93c;
        case 0x26b958u: goto label_26b958;
        case 0x26b978u: goto label_26b978;
        case 0x26b988u: goto label_26b988;
        case 0x26b9a0u: goto label_26b9a0;
        case 0x26b9b0u: goto label_26b9b0;
        case 0x26b9ccu: goto label_26b9cc;
        case 0x26b9f4u: goto label_26b9f4;
        case 0x26ba04u: goto label_26ba04;
        case 0x26ba20u: goto label_26ba20;
        case 0x26ba48u: goto label_26ba48;
        case 0x26ba58u: goto label_26ba58;
        case 0x26ba74u: goto label_26ba74;
        case 0x26bab0u: goto label_26bab0;
        case 0x26bb08u: goto label_26bb08;
        case 0x26bb20u: goto label_26bb20;
        case 0x26bb30u: goto label_26bb30;
        case 0x26bb40u: goto label_26bb40;
        default: break;
    }

    ctx->pc = 0x26b910u;

    // 0x26b910: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x26b914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b918: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x26b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x26b91c: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x26b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x26b920: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26b920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b924: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26b924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b928: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x26b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x26b92c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x26b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x26b930: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x26b930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b934: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x26B934u;
    SET_GPR_U32(ctx, 31, 0x26B93Cu);
    ctx->pc = 0x26B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B934u;
    // 0x26b938: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x26B934u, 0x26B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B93Cu;
label_26b93c:
    // 0x26b93c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26b93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b940: 0x6030007  bgezl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B940u;
    {
        const bool branch_taken_0x26b940 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x26b940) {
            ctx->pc = 0x26B944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B940u;
            // 0x26b944: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B960u;
            goto label_26b960;
        }
    }
    ctx->pc = 0x26B948u;
    // 0x26b948: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26b94c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26b950: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26B950u;
    SET_GPR_U32(ctx, 31, 0x26B958u);
    ctx->pc = 0x26B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B950u;
    // 0x26b954: 0x24a588a0  addiu       $a1, $a1, -0x7760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26B950u, 0x26B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B958u;
label_26b958:
    // 0x26b958: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x26B958u;
    {
        const bool branch_taken_0x26b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B958u;
        // 0x26b95c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b958) {
            ctx->pc = 0x26BB44u;
            goto label_26bb44;
        }
    }
    ctx->pc = 0x26B960u;
label_26b960:
    // 0x26b960: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26b960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b964: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x26b964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x26b968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b96c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x26b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x26b970: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26B970u;
    SET_GPR_U32(ctx, 31, 0x26B978u);
    ctx->pc = 0x26B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B970u;
    // 0x26b974: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26B970u, 0x26B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B978u;
label_26b978:
    // 0x26b978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26b978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b97c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26b97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b980: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26B980u;
    SET_GPR_U32(ctx, 31, 0x26B988u);
    ctx->pc = 0x26B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B980u;
    // 0x26b984: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x26B980u, 0x26B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B988u;
label_26b988:
    // 0x26b988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b98c: 0x3405c020  ori         $a1, $zero, 0xC020
    ctx->pc = 0x26b98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x26b990: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26b990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26b994: 0x34a56921  ori         $a1, $a1, 0x6921
    ctx->pc = 0x26b994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26913);
    // 0x26b998: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26B998u;
    SET_GPR_U32(ctx, 31, 0x26B9A0u);
    ctx->pc = 0x26B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B998u;
    // 0x26b99c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x26B998u, 0x26B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9A0u;
label_26b9a0:
    // 0x26b9a0: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26B9A0u;
    {
        const bool branch_taken_0x26b9a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26b9a0) {
            ctx->pc = 0x26B9D4u;
            goto label_26b9d4;
        }
    }
    ctx->pc = 0x26B9A8u;
    // 0x26b9a8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x26B9A8u;
    SET_GPR_U32(ctx, 31, 0x26B9B0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x26B9A8u, 0x26B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9B0u;
label_26b9b0:
    // 0x26b9b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b9b4: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x26b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x26b9b8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B9B8u;
    {
        const bool branch_taken_0x26b9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9B8u;
        // 0x26b9bc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9b8) {
            ctx->pc = 0x26B9D4u;
            goto label_26b9d4;
        }
    }
    ctx->pc = 0x26B9C0u;
    // 0x26b9c0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26b9c4: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26B9C4u;
    SET_GPR_U32(ctx, 31, 0x26B9CCu);
    ctx->pc = 0x26B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B9C4u;
    // 0x26b9c8: 0x24a588d8  addiu       $a1, $a1, -0x7728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26B9C4u, 0x26B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9CCu;
label_26b9cc:
    // 0x26b9cc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26B9CCu;
    {
        const bool branch_taken_0x26b9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9cc) {
            ctx->pc = 0x26BB38u;
            goto label_26bb38;
        }
    }
    ctx->pc = 0x26B9D4u;
label_26b9d4:
    // 0x26b9d4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x26b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x26b9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9dc: 0x3405c020  ori         $a1, $zero, 0xC020
    ctx->pc = 0x26b9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x26b9e0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26b9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26b9e4: 0x34a56925  ori         $a1, $a1, 0x6925
    ctx->pc = 0x26b9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26917);
    // 0x26b9e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26b9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9ec: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26B9ECu;
    SET_GPR_U32(ctx, 31, 0x26B9F4u);
    ctx->pc = 0x26B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B9ECu;
    // 0x26b9f0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x26B9ECu, 0x26B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9F4u;
label_26b9f4:
    // 0x26b9f4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26B9F4u;
    {
        const bool branch_taken_0x26b9f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26b9f4) {
            ctx->pc = 0x26BA28u;
            goto label_26ba28;
        }
    }
    ctx->pc = 0x26B9FCu;
    // 0x26b9fc: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x26B9FCu;
    SET_GPR_U32(ctx, 31, 0x26BA04u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x26B9FCu, 0x26BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA04u;
label_26ba04:
    // 0x26ba04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ba08: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x26ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x26ba0c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BA0Cu;
    {
        const bool branch_taken_0x26ba0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA0Cu;
        // 0x26ba10: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba0c) {
            ctx->pc = 0x26BA28u;
            goto label_26ba28;
        }
    }
    ctx->pc = 0x26BA14u;
    // 0x26ba14: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ba18: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26BA18u;
    SET_GPR_U32(ctx, 31, 0x26BA20u);
    ctx->pc = 0x26BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA18u;
    // 0x26ba1c: 0x24a58910  addiu       $a1, $a1, -0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26BA18u, 0x26BA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA20u;
label_26ba20:
    // 0x26ba20: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x26BA20u;
    {
        const bool branch_taken_0x26ba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba20) {
            ctx->pc = 0x26BB38u;
            goto label_26bb38;
        }
    }
    ctx->pc = 0x26BA28u;
label_26ba28:
    // 0x26ba28: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x26ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x26ba2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba30: 0x3405c020  ori         $a1, $zero, 0xC020
    ctx->pc = 0x26ba30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x26ba34: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26ba34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26ba38: 0x34a56923  ori         $a1, $a1, 0x6923
    ctx->pc = 0x26ba38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26915);
    // 0x26ba3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26ba3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba40: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26BA40u;
    SET_GPR_U32(ctx, 31, 0x26BA48u);
    ctx->pc = 0x26BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA40u;
    // 0x26ba44: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x26BA40u, 0x26BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA48u;
label_26ba48:
    // 0x26ba48: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26BA48u;
    {
        const bool branch_taken_0x26ba48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26ba48) {
            ctx->pc = 0x26BA7Cu;
            goto label_26ba7c;
        }
    }
    ctx->pc = 0x26BA50u;
    // 0x26ba50: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x26BA50u;
    SET_GPR_U32(ctx, 31, 0x26BA58u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x26BA50u, 0x26BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA58u;
label_26ba58:
    // 0x26ba58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ba5c: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x26ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x26ba60: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BA60u;
    {
        const bool branch_taken_0x26ba60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA60u;
        // 0x26ba64: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba60) {
            ctx->pc = 0x26BA7Cu;
            goto label_26ba7c;
        }
    }
    ctx->pc = 0x26BA68u;
    // 0x26ba68: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ba6c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26BA6Cu;
    SET_GPR_U32(ctx, 31, 0x26BA74u);
    ctx->pc = 0x26BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA6Cu;
    // 0x26ba70: 0x24a58948  addiu       $a1, $a1, -0x76B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26BA6Cu, 0x26BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA74u;
label_26ba74:
    // 0x26ba74: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26BA74u;
    {
        const bool branch_taken_0x26ba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba74) {
            ctx->pc = 0x26BB38u;
            goto label_26bb38;
        }
    }
    ctx->pc = 0x26BA7Cu;
label_26ba7c:
    // 0x26ba7c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x26ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x26ba80: 0x8a230010  lwl         $v1, 0x10($s1)
    ctx->pc = 0x26ba80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x26ba84: 0x9a23000d  lwr         $v1, 0xD($s1)
    ctx->pc = 0x26ba84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x26ba88: 0x8e2403ec  lw          $a0, 0x3EC($s1)
    ctx->pc = 0x26ba88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x26ba8c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x26ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x26ba90: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x26ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x26ba94: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x26ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x26ba98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BA98u;
    {
        const bool branch_taken_0x26ba98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA98u;
        // 0x26ba9c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba98) {
            ctx->pc = 0x26BAA8u;
            goto label_26baa8;
        }
    }
    ctx->pc = 0x26BAA0u;
    // 0x26baa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26BAA0u;
    {
        const bool branch_taken_0x26baa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAA0u;
        // 0x26baa4: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baa0) {
            ctx->pc = 0x26BAB4u;
            goto label_26bab4;
        }
    }
    ctx->pc = 0x26BAA8u;
label_26baa8:
    // 0x26baa8: 0xc09aeec  jal         func_26BBB0
    ctx->pc = 0x26BAA8u;
    SET_GPR_U32(ctx, 31, 0x26BAB0u);
    ctx->pc = 0x26BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BAA8u;
    // 0x26baac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBB0u, 0x26BAA8u, 0x26BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAB0u;
label_26bab0:
    // 0x26bab0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x26bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_26bab4:
    // 0x26bab4: 0x8e2503f0  lw          $a1, 0x3F0($s1)
    ctx->pc = 0x26bab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    // 0x26bab8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BAB8u;
    {
        const bool branch_taken_0x26bab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAB8u;
        // 0x26babc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bab8) {
            ctx->pc = 0x26BACCu;
            goto label_26bacc;
        }
    }
    ctx->pc = 0x26BAC0u;
    // 0x26bac0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x26bac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26BAC4u;
    {
        const bool branch_taken_0x26bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAC4u;
        // 0x26bac8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bac4) {
            ctx->pc = 0x26BADCu;
            goto label_26badc;
        }
    }
    ctx->pc = 0x26BACCu;
label_26bacc:
    // 0x26bacc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bad0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26bad0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26bad4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26bad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26bad8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x26bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_26badc:
    // 0x26badc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bae0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26BAE0u;
    {
        const bool branch_taken_0x26bae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAE0u;
        // 0x26bae4: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bae0) {
            ctx->pc = 0x26BB00u;
            goto label_26bb00;
        }
    }
    ctx->pc = 0x26BAE8u;
    // 0x26bae8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26baec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BAECu;
    {
        const bool branch_taken_0x26baec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAECu;
        // 0x26baf0: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26baec) {
            ctx->pc = 0x26BB00u;
            goto label_26bb00;
        }
    }
    ctx->pc = 0x26BAF4u;
    // 0x26baf4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26baf8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26BAF8u;
    {
        const bool branch_taken_0x26baf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26baf8) {
            ctx->pc = 0x26BB28u;
            goto label_26bb28;
        }
    }
    ctx->pc = 0x26BB00u;
label_26bb00:
    // 0x26bb00: 0xc09a060  jal         func_268180
    ctx->pc = 0x26BB00u;
    SET_GPR_U32(ctx, 31, 0x26BB08u);
    ctx->pc = 0x26BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB00u;
    // 0x26bb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x26BB00u, 0x26BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB08u;
label_26bb08:
    // 0x26bb08: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26BB08u;
    {
        const bool branch_taken_0x26bb08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB08u;
        // 0x26bb0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb08) {
            ctx->pc = 0x26BB38u;
            goto label_26bb38;
        }
    }
    ctx->pc = 0x26BB10u;
    // 0x26bb10: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26bb14: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x26bb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26bb18: 0xc09a01a  jal         func_268068
    ctx->pc = 0x26BB18u;
    SET_GPR_U32(ctx, 31, 0x26BB20u);
    ctx->pc = 0x26BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB18u;
    // 0x26bb1c: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268068u, 0x26BB18u, 0x26BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB20u;
label_26bb20:
    // 0x26bb20: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BB20u;
    {
        const bool branch_taken_0x26bb20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26bb20) {
            ctx->pc = 0x26BB38u;
            goto label_26bb38;
        }
    }
    ctx->pc = 0x26BB28u;
label_26bb28:
    // 0x26bb28: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x26BB28u;
    SET_GPR_U32(ctx, 31, 0x26BB30u);
    ctx->pc = 0x26BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB28u;
    // 0x26bb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x26BB28u, 0x26BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB30u;
label_26bb30:
    // 0x26bb30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26BB30u;
    {
        const bool branch_taken_0x26bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB30u;
        // 0x26bb34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb30) {
            ctx->pc = 0x26BB44u;
            goto label_26bb44;
        }
    }
    ctx->pc = 0x26BB38u;
label_26bb38:
    // 0x26bb38: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x26BB38u;
    SET_GPR_U32(ctx, 31, 0x26BB40u);
    ctx->pc = 0x26BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB38u;
    // 0x26bb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x26BB38u, 0x26BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB40u;
label_26bb40:
    // 0x26bb40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26bb44:
    // 0x26bb44: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x26bb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26bb48: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x26bb48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26bb4c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x26bb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26bb50: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x26bb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26bb54: 0x3e00008  jr          $ra
    ctx->pc = 0x26BB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB54u;
        // 0x26bb58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BB5Cu;
    // 0x26bb5c: 0x0  nop
    ctx->pc = 0x26bb5cu;
    // NOP
}
