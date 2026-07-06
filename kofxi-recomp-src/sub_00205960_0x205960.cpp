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

// Function: sub_00205960
// Address: 0x205960 - 0x205c30
void sub_00205960_0x205960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205960_0x205960");
#endif

    switch (ctx->pc) {
        case 0x2059ccu: goto label_2059cc;
        case 0x2059fcu: goto label_2059fc;
        case 0x205a28u: goto label_205a28;
        case 0x205a64u: goto label_205a64;
        case 0x205a78u: goto label_205a78;
        case 0x205a98u: goto label_205a98;
        case 0x205aacu: goto label_205aac;
        case 0x205ac8u: goto label_205ac8;
        case 0x205ae0u: goto label_205ae0;
        case 0x205b38u: goto label_205b38;
        case 0x205b64u: goto label_205b64;
        case 0x205b98u: goto label_205b98;
        case 0x205bacu: goto label_205bac;
        case 0x205bc8u: goto label_205bc8;
        case 0x205bf0u: goto label_205bf0;
        default: break;
    }

    ctx->pc = 0x205960u;

    // 0x205960: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x205960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x205964: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x205964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x205968: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x205968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x20596c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x205970: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x205970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x205974: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x205974u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x205978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20597c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x205980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x205980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x205984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205988: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x205988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20598c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20598cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205990: 0x12510004  beq         $s2, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x205990u;
    {
        const bool branch_taken_0x205990 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x205994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205990u;
        // 0x205994: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205990) {
            ctx->pc = 0x2059A4u;
            goto label_2059a4;
        }
    }
    ctx->pc = 0x205998u;
    // 0x205998: 0x2a210021  slti        $at, $s1, 0x21
    ctx->pc = 0x205998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x20599c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20599Cu;
    {
        const bool branch_taken_0x20599c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20599c) {
            ctx->pc = 0x2059A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20599Cu;
            // 0x2059a0: 0x2a410020  slti        $at, $s2, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2059ACu;
            goto label_2059ac;
        }
    }
    ctx->pc = 0x2059A4u;
label_2059a4:
    // 0x2059a4: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x2059A4u;
    {
        const bool branch_taken_0x2059a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059A4u;
        // 0x2059a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059a4) {
            ctx->pc = 0x205C04u;
            goto label_205c04;
        }
    }
    ctx->pc = 0x2059ACu;
label_2059ac:
    // 0x2059ac: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2059ACu;
    {
        const bool branch_taken_0x2059ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2059ac) {
            ctx->pc = 0x2059B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2059ACu;
            // 0x2059b0: 0x2643ffe0  addiu       $v1, $s2, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205A04u;
            goto label_205a04;
        }
    }
    ctx->pc = 0x2059B4u;
    // 0x2059b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2059b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2059b8: 0x244298a0  addiu       $v0, $v0, -0x6760
    ctx->pc = 0x2059b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940832));
    // 0x2059bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2059bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2059c0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2059c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2059c4: 0xc081dbc  jal         func_2076F0
    ctx->pc = 0x2059C4u;
    SET_GPR_U32(ctx, 31, 0x2059CCu);
    ctx->pc = 0x2059C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2059C4u;
    // 0x2059c8: 0x2650ffe8  addiu       $s0, $s2, -0x18 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076F0u, 0x2059C4u, 0x2059CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059CCu;
label_2059cc:
    // 0x2059cc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2059CCu;
    {
        const bool branch_taken_0x2059cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2059cc) {
            ctx->pc = 0x2059D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2059CCu;
            // 0x2059d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2059DCu;
            goto label_2059dc;
        }
    }
    ctx->pc = 0x2059D4u;
    // 0x2059d4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2059D4u;
    {
        const bool branch_taken_0x2059d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059D4u;
        // 0x2059d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059d4) {
            ctx->pc = 0x205C04u;
            goto label_205c04;
        }
    }
    ctx->pc = 0x2059DCu;
label_2059dc:
    // 0x2059dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2059dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2059e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2059e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2059e4: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x2059e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2059e8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2059ec: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x2059ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2059f0: 0x2442a200  addiu       $v0, $v0, -0x5E00
    ctx->pc = 0x2059f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943232));
    // 0x2059f4: 0xc08170c  jal         func_205C30
    ctx->pc = 0x2059F4u;
    SET_GPR_U32(ctx, 31, 0x2059FCu);
    ctx->pc = 0x2059F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2059F4u;
    // 0x2059f8: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C30u, 0x2059F4u, 0x2059FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059FCu;
label_2059fc:
    // 0x2059fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2059FCu;
    {
        const bool branch_taken_0x2059fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059FCu;
        // 0x205a00: 0x2ec10002  sltiu       $at, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059fc) {
            ctx->pc = 0x205A40u;
            goto label_205a40;
        }
    }
    ctx->pc = 0x205A04u;
label_205a04:
    // 0x205a04: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x205a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x205a08: 0x2442a200  addiu       $v0, $v0, -0x5E00
    ctx->pc = 0x205a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943232));
    // 0x205a0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x205a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205a14: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x205a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x205a18: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x205a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x205a1c: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x205a1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205a20: 0xc08170c  jal         func_205C30
    ctx->pc = 0x205A20u;
    SET_GPR_U32(ctx, 31, 0x205A28u);
    ctx->pc = 0x205A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A20u;
    // 0x205a24: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C30u, 0x205A20u, 0x205A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A28u;
label_205a28:
    // 0x205a28: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x205a28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205a2c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x205a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x205a30: 0x2442a200  addiu       $v0, $v0, -0x5E00
    ctx->pc = 0x205a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943232));
    // 0x205a34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x205a38: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x205a38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205a3c: 0x2ec10002  sltiu       $at, $s6, 0x2
    ctx->pc = 0x205a3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_205a40:
    // 0x205a40: 0x50200053  beql        $at, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x205A40u;
    {
        const bool branch_taken_0x205a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205a40) {
            ctx->pc = 0x205A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205A40u;
            // 0x205a44: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205B90u;
            goto label_205b90;
        }
    }
    ctx->pc = 0x205A48u;
    // 0x205a48: 0x8fb0009c  lw          $s0, 0x9C($sp)
    ctx->pc = 0x205a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x205a4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x205a4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a50: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x205a50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x205a54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x205a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205a58: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x205a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x205a5c: 0xc081dbc  jal         func_2076F0
    ctx->pc = 0x205A5Cu;
    SET_GPR_U32(ctx, 31, 0x205A64u);
    ctx->pc = 0x205A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A5Cu;
    // 0x205a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076F0u, 0x205A5Cu, 0x205A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A64u;
label_205a64:
    // 0x205a64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x205a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x205a68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x205a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x205a6c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x205A6Cu;
    {
        const bool branch_taken_0x205a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205a6c) {
            ctx->pc = 0x205B78u;
            goto label_205b78;
        }
    }
    ctx->pc = 0x205A74u;
    // 0x205a74: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x205a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_205a78:
    // 0x205a78: 0x28410027  slti        $at, $v0, 0x27
    ctx->pc = 0x205a78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x205a7c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x205A7Cu;
    {
        const bool branch_taken_0x205a7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x205A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A7Cu;
        // 0x205a80: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a7c) {
            ctx->pc = 0x205A88u;
            goto label_205a88;
        }
    }
    ctx->pc = 0x205A84u;
    // 0x205a84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x205a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205a88:
    // 0x205a88: 0x3be3c  dsll32      $s7, $v1, 24
    ctx->pc = 0x205a88u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 24));
    // 0x205a8c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x205A8Cu;
    {
        const bool branch_taken_0x205a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A8Cu;
        // 0x205a90: 0x17be3f  dsra32      $s7, $s7, 24 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a8c) {
            ctx->pc = 0x205B00u;
            goto label_205b00;
        }
    }
    ctx->pc = 0x205A94u;
    // 0x205a94: 0x0  nop
    ctx->pc = 0x205a94u;
    // NOP
label_205a98:
    // 0x205a98: 0x2f5a821  addu        $s5, $s7, $s5
    ctx->pc = 0x205a98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
    // 0x205a9c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x205a9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x205aa0: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x205aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x205aa4: 0xc08170c  jal         func_205C30
    ctx->pc = 0x205AA4u;
    SET_GPR_U32(ctx, 31, 0x205AACu);
    ctx->pc = 0x205AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AA4u;
    // 0x205aa8: 0x27a60094  addiu       $a2, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C30u, 0x205AA4u, 0x205AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AACu;
label_205aac:
    // 0x205aac: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x205aacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x205ab0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x205ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x205ab4: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x205ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x205ab8: 0x2442a200  addiu       $v0, $v0, -0x5E00
    ctx->pc = 0x205ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943232));
    // 0x205abc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x205ac0: 0xc081dbc  jal         func_2076F0
    ctx->pc = 0x205AC0u;
    SET_GPR_U32(ctx, 31, 0x205AC8u);
    ctx->pc = 0x205AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AC0u;
    // 0x205ac4: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076F0u, 0x205AC0u, 0x205AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AC8u;
label_205ac8:
    // 0x205ac8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x205AC8u;
    {
        const bool branch_taken_0x205ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ac8) {
            ctx->pc = 0x205AF8u;
            goto label_205af8;
        }
    }
    ctx->pc = 0x205AD0u;
    // 0x205ad0: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x205ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x205ad4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x205ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x205ad8: 0xc048c50  jal         func_123140
    ctx->pc = 0x205AD8u;
    SET_GPR_U32(ctx, 31, 0x205AE0u);
    ctx->pc = 0x205ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205AD8u;
    // 0x205adc: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x205AD8u, 0x205AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AE0u;
label_205ae0:
    // 0x205ae0: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x205ae0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x205ae4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x205AE4u;
    {
        const bool branch_taken_0x205ae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ae4) {
            ctx->pc = 0x205AF8u;
            goto label_205af8;
        }
    }
    ctx->pc = 0x205AECu;
    // 0x205aec: 0x8fb20094  lw          $s2, 0x94($sp)
    ctx->pc = 0x205aecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x205af0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x205af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205af4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x205af4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205af8:
    // 0x205af8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x205af8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x205afc: 0x0  nop
    ctx->pc = 0x205afcu;
    // NOP
label_205b00:
    // 0x205b00: 0x14102b  sltu        $v0, $zero, $s4
    ctx->pc = 0x205b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x205b04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x205b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x205b08: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x205B08u;
    {
        const bool branch_taken_0x205b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205b08) {
            ctx->pc = 0x205A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205a98;
        }
    }
    ctx->pc = 0x205B10u;
    // 0x205b10: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x205b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x205b14: 0x1450ffe0  bne         $v0, $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x205B14u;
    {
        const bool branch_taken_0x205b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x205b14) {
            ctx->pc = 0x205A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205a98;
        }
    }
    ctx->pc = 0x205B1Cu;
    // 0x205b1c: 0x16600016  bnez        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x205B1Cu;
    {
        const bool branch_taken_0x205b1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x205b1c) {
            ctx->pc = 0x205B78u;
            goto label_205b78;
        }
    }
    ctx->pc = 0x205B24u;
    // 0x205b24: 0x2d58021  addu        $s0, $s6, $s5
    ctx->pc = 0x205b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x205b28: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x205b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x205b2c: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x205b2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205b30: 0xc08170c  jal         func_205C30
    ctx->pc = 0x205B30u;
    SET_GPR_U32(ctx, 31, 0x205B38u);
    ctx->pc = 0x205B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B30u;
    // 0x205b34: 0x27a60094  addiu       $a2, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C30u, 0x205B30u, 0x205B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B38u;
label_205b38:
    // 0x205b38: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x205b38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205b3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x205b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x205b40: 0x8fb20094  lw          $s2, 0x94($sp)
    ctx->pc = 0x205b40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x205b44: 0x2442a200  addiu       $v0, $v0, -0x5E00
    ctx->pc = 0x205b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943232));
    // 0x205b48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x205b48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b4c: 0x8fb0009c  lw          $s0, 0x9C($sp)
    ctx->pc = 0x205b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x205b50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x205b54: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x205b54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205b58: 0xafb20098  sw          $s2, 0x98($sp)
    ctx->pc = 0x205b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 18));
    // 0x205b5c: 0xc081dbc  jal         func_2076F0
    ctx->pc = 0x205B5Cu;
    SET_GPR_U32(ctx, 31, 0x205B64u);
    ctx->pc = 0x205B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205B5Cu;
    // 0x205b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076F0u, 0x205B5Cu, 0x205B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B64u;
label_205b64:
    // 0x205b64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x205b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x205b68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x205b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x205b6c: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x205B6Cu;
    {
        const bool branch_taken_0x205b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205b6c) {
            ctx->pc = 0x205B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205B6Cu;
            // 0x205b70: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205a78;
        }
    }
    ctx->pc = 0x205B74u;
    // 0x205b74: 0x0  nop
    ctx->pc = 0x205b74u;
    // NOP
label_205b78:
    // 0x205b78: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x205b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x205b7c: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x205B7Cu;
    {
        const bool branch_taken_0x205b7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x205b7c) {
            ctx->pc = 0x205B88u;
            goto label_205b88;
        }
    }
    ctx->pc = 0x205B84u;
    // 0x205b84: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x205b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_205b88:
    // 0x205b88: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x205B88u;
    {
        const bool branch_taken_0x205b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B88u;
        // 0x205b8c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b88) {
            ctx->pc = 0x205C04u;
            goto label_205c04;
        }
    }
    ctx->pc = 0x205B90u;
label_205b90:
    // 0x205b90: 0xc081dbc  jal         func_2076F0
    ctx->pc = 0x205B90u;
    SET_GPR_U32(ctx, 31, 0x205B98u);
    ctx->pc = 0x2076F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076F0u, 0x205B90u, 0x205B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B98u;
label_205b98:
    // 0x205b98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x205b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x205b9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x205b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x205ba0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x205BA0u;
    {
        const bool branch_taken_0x205ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ba0) {
            ctx->pc = 0x205C00u;
            goto label_205c00;
        }
    }
    ctx->pc = 0x205BA8u;
    // 0x205ba8: 0x2d58021  addu        $s0, $s6, $s5
    ctx->pc = 0x205ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_205bac:
    // 0x205bac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x205bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x205bb0: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x205bb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205bb4: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x205BB4u;
    {
        const bool branch_taken_0x205bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x205bb4) {
            ctx->pc = 0x205BE0u;
            goto label_205be0;
        }
    }
    ctx->pc = 0x205BBCu;
    // 0x205bbc: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x205bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x205bc0: 0xc08170c  jal         func_205C30
    ctx->pc = 0x205BC0u;
    SET_GPR_U32(ctx, 31, 0x205BC8u);
    ctx->pc = 0x205BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BC0u;
    // 0x205bc4: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C30u, 0x205BC0u, 0x205BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BC8u;
label_205bc8:
    // 0x205bc8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x205bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205bcc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x205bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x205bd0: 0x2442a200  addiu       $v0, $v0, -0x5E00
    ctx->pc = 0x205bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943232));
    // 0x205bd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x205bd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x205BD8u;
    {
        const bool branch_taken_0x205bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BD8u;
        // 0x205bdc: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bd8) {
            ctx->pc = 0x205BE8u;
            goto label_205be8;
        }
    }
    ctx->pc = 0x205BE0u;
label_205be0:
    // 0x205be0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x205BE0u;
    {
        const bool branch_taken_0x205be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BE0u;
        // 0x205be4: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205be0) {
            ctx->pc = 0x205C00u;
            goto label_205c00;
        }
    }
    ctx->pc = 0x205BE8u;
label_205be8:
    // 0x205be8: 0xc081dbc  jal         func_2076F0
    ctx->pc = 0x205BE8u;
    SET_GPR_U32(ctx, 31, 0x205BF0u);
    ctx->pc = 0x205BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205BE8u;
    // 0x205bec: 0x8fa4009c  lw          $a0, 0x9C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2076F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076F0u, 0x205BE8u, 0x205BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BF0u;
label_205bf0:
    // 0x205bf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x205bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x205bf4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x205bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x205bf8: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x205BF8u;
    {
        const bool branch_taken_0x205bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205bf8) {
            ctx->pc = 0x205BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205BF8u;
            // 0x205bfc: 0x2d58021  addu        $s0, $s6, $s5 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205BACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205bac;
        }
    }
    ctx->pc = 0x205C00u;
label_205c00:
    // 0x205c00: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x205c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_205c04:
    // 0x205c04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x205c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x205c08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x205c08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x205c0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x205c0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205c10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x205c10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x205c14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x205c14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205c18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x205c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205c1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x205c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x205c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205c28: 0x3e00008  jr          $ra
    ctx->pc = 0x205C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C28u;
        // 0x205c2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205C30u;
}
