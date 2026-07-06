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

// Function: sub_002E8148
// Address: 0x2e8148 - 0x2e8218
void sub_002E8148_0x2e8148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8148_0x2e8148");
#endif

    switch (ctx->pc) {
        case 0x2e8148u: goto label_2e8148;
        case 0x2e814cu: goto label_2e814c;
        case 0x2e8150u: goto label_2e8150;
        case 0x2e8154u: goto label_2e8154;
        case 0x2e8158u: goto label_2e8158;
        case 0x2e815cu: goto label_2e815c;
        case 0x2e8160u: goto label_2e8160;
        case 0x2e8164u: goto label_2e8164;
        case 0x2e8168u: goto label_2e8168;
        case 0x2e816cu: goto label_2e816c;
        case 0x2e8170u: goto label_2e8170;
        case 0x2e8174u: goto label_2e8174;
        case 0x2e8178u: goto label_2e8178;
        case 0x2e817cu: goto label_2e817c;
        case 0x2e8180u: goto label_2e8180;
        case 0x2e8184u: goto label_2e8184;
        case 0x2e8188u: goto label_2e8188;
        case 0x2e818cu: goto label_2e818c;
        case 0x2e8190u: goto label_2e8190;
        case 0x2e8194u: goto label_2e8194;
        case 0x2e8198u: goto label_2e8198;
        case 0x2e819cu: goto label_2e819c;
        case 0x2e81a0u: goto label_2e81a0;
        case 0x2e81a4u: goto label_2e81a4;
        case 0x2e81a8u: goto label_2e81a8;
        case 0x2e81acu: goto label_2e81ac;
        case 0x2e81b0u: goto label_2e81b0;
        case 0x2e81b4u: goto label_2e81b4;
        case 0x2e81b8u: goto label_2e81b8;
        case 0x2e81bcu: goto label_2e81bc;
        case 0x2e81c0u: goto label_2e81c0;
        case 0x2e81c4u: goto label_2e81c4;
        case 0x2e81c8u: goto label_2e81c8;
        case 0x2e81ccu: goto label_2e81cc;
        case 0x2e81d0u: goto label_2e81d0;
        case 0x2e81d4u: goto label_2e81d4;
        case 0x2e81d8u: goto label_2e81d8;
        case 0x2e81dcu: goto label_2e81dc;
        case 0x2e81e0u: goto label_2e81e0;
        case 0x2e81e4u: goto label_2e81e4;
        case 0x2e81e8u: goto label_2e81e8;
        case 0x2e81ecu: goto label_2e81ec;
        case 0x2e81f0u: goto label_2e81f0;
        case 0x2e81f4u: goto label_2e81f4;
        case 0x2e81f8u: goto label_2e81f8;
        case 0x2e81fcu: goto label_2e81fc;
        case 0x2e8200u: goto label_2e8200;
        case 0x2e8204u: goto label_2e8204;
        case 0x2e8208u: goto label_2e8208;
        case 0x2e820cu: goto label_2e820c;
        case 0x2e8210u: goto label_2e8210;
        case 0x2e8214u: goto label_2e8214;
        default: break;
    }

    ctx->pc = 0x2e8148u;

label_2e8148:
    // 0x2e8148: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e8148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2e814c:
    // 0x2e814c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2e8150:
    // 0x2e8150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e8154:
    // 0x2e8154: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e8154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2e8158:
    // 0x2e8158: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e8158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2e815c:
    // 0x2e815c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e815cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e8160:
    // 0x2e8160: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e8160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2e8164:
    // 0x2e8164: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e8164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e8168:
    // 0x2e8168: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e8168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2e816c:
    // 0x2e816c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e816cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8170:
    // 0x2e8170: 0x8c50ea08  lw          $s0, -0x15F8($v0)
    ctx->pc = 0x2e8170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
label_2e8174:
    // 0x2e8174: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e8174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e8178:
    // 0x2e8178: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e8178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2e817c:
    // 0x2e817c: 0x2402ffe4  addiu       $v0, $zero, -0x1C
    ctx->pc = 0x2e817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_2e8180:
    // 0x2e8180: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_2e8184:
    if (ctx->pc == 0x2E8184u) {
        ctx->pc = 0x2E8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8180u;
        // 0x2e8184: 0xffb50050  sd          $s5, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8188u;
        goto label_2e8188;
    }
    ctx->pc = 0x2E8180u;
    {
        const bool branch_taken_0x2e8180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8180u;
        // 0x2e8184: 0xffb50050  sd          $s5, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8180) {
            ctx->pc = 0x2E81F0u;
            goto label_2e81f0;
        }
    }
    ctx->pc = 0x2E8188u;
label_2e8188:
    // 0x2e8188: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x2e8188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e818c:
    // 0x2e818c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2e818cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e8190:
    // 0x2e8190: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e8190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e8194:
    // 0x2e8194: 0xc04a8f8  jal         func_12A3E0
label_2e8198:
    if (ctx->pc == 0x2E8198u) {
        ctx->pc = 0x2E8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8194u;
        // 0x2e8198: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E819Cu;
        goto label_2e819c;
    }
    ctx->pc = 0x2E8194u;
    SET_GPR_U32(ctx, 31, 0x2E819Cu);
    ctx->pc = 0x2E8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8194u;
    // 0x2e8198: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2E8194u, 0x2E819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E819Cu;
label_2e819c:
    // 0x2e819c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2e81a0:
    if (ctx->pc == 0x2E81A0u) {
        ctx->pc = 0x2E81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E819Cu;
        // 0x2e81a0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81A4u;
        goto label_2e81a4;
    }
    ctx->pc = 0x2E819Cu;
    {
        const bool branch_taken_0x2e819c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e819c) {
            ctx->pc = 0x2E81A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E819Cu;
            // 0x2e81a0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E81E8u;
            goto label_2e81e8;
        }
    }
    ctx->pc = 0x2E81A4u;
label_2e81a4:
    // 0x2e81a4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_2e81a8:
    if (ctx->pc == 0x2E81A8u) {
        ctx->pc = 0x2E81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81A4u;
        // 0x2e81a8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81ACu;
        goto label_2e81ac;
    }
    ctx->pc = 0x2E81A4u;
    {
        const bool branch_taken_0x2e81a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81A4u;
        // 0x2e81a8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81a4) {
            ctx->pc = 0x2E81F4u;
            goto label_2e81f4;
        }
    }
    ctx->pc = 0x2E81ACu;
label_2e81ac:
    // 0x2e81ac: 0xc0b9902  jal         func_2E6408
label_2e81b0:
    if (ctx->pc == 0x2E81B0u) {
        ctx->pc = 0x2E81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81ACu;
        // 0x2e81b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81B4u;
        goto label_2e81b4;
    }
    ctx->pc = 0x2E81ACu;
    SET_GPR_U32(ctx, 31, 0x2E81B4u);
    ctx->pc = 0x2E81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E81ACu;
    // 0x2e81b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6408u, 0x2E81ACu, 0x2E81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81B4u;
label_2e81b4:
    // 0x2e81b4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2e81b8:
    if (ctx->pc == 0x2E81B8u) {
        ctx->pc = 0x2E81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81B4u;
        // 0x2e81b8: 0x551818  mult        $v1, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81BCu;
        goto label_2e81bc;
    }
    ctx->pc = 0x2E81B4u;
    {
        const bool branch_taken_0x2e81b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81B4u;
        // 0x2e81b8: 0x551818  mult        $v1, $v0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81b4) {
            ctx->pc = 0x2E81C4u;
            goto label_2e81c4;
        }
    }
    ctx->pc = 0x2E81BCu;
label_2e81bc:
    // 0x2e81bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e81c0:
    if (ctx->pc == 0x2E81C0u) {
        ctx->pc = 0x2E81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81BCu;
        // 0x2e81c0: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81C4u;
        goto label_2e81c4;
    }
    ctx->pc = 0x2E81BCu;
    {
        const bool branch_taken_0x2e81bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81BCu;
        // 0x2e81c0: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81bc) {
            ctx->pc = 0x2E81F0u;
            goto label_2e81f0;
        }
    }
    ctx->pc = 0x2E81C4u;
label_2e81c4:
    // 0x2e81c4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2e81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2e81c8:
    // 0x2e81c8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2e81c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2e81cc:
    // 0x2e81cc: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_2e81d0:
    if (ctx->pc == 0x2E81D0u) {
        ctx->pc = 0x2E81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81CCu;
        // 0x2e81d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81D4u;
        goto label_2e81d4;
    }
    ctx->pc = 0x2E81CCu;
    {
        const bool branch_taken_0x2e81cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81CCu;
        // 0x2e81d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81cc) {
            ctx->pc = 0x2E81BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e81bc;
        }
    }
    ctx->pc = 0x2E81D4u;
label_2e81d4:
    // 0x2e81d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e81d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e81d8:
    // 0x2e81d8: 0x40f809  jalr        $v0
label_2e81dc:
    if (ctx->pc == 0x2E81DCu) {
        ctx->pc = 0x2E81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81D8u;
        // 0x2e81dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81E0u;
        goto label_2e81e0;
    }
    ctx->pc = 0x2E81D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E81E0u);
        ctx->pc = 0x2E81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81D8u;
        // 0x2e81dc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E81D8u, 0x2E81E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E81E0u;
label_2e81e0:
    // 0x2e81e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e81e4:
    if (ctx->pc == 0x2E81E4u) {
        ctx->pc = 0x2E81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E0u;
        // 0x2e81e4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81E8u;
        goto label_2e81e8;
    }
    ctx->pc = 0x2E81E0u;
    {
        const bool branch_taken_0x2e81e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E0u;
        // 0x2e81e4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81e0) {
            ctx->pc = 0x2E81F4u;
            goto label_2e81f4;
        }
    }
    ctx->pc = 0x2E81E8u;
label_2e81e8:
    // 0x2e81e8: 0x1600ffe9  bnez        $s0, . + 4 + (-0x17 << 2)
label_2e81ec:
    if (ctx->pc == 0x2E81ECu) {
        ctx->pc = 0x2E81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E8u;
        // 0x2e81ec: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E81F0u;
        goto label_2e81f0;
    }
    ctx->pc = 0x2E81E8u;
    {
        const bool branch_taken_0x2e81e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E8u;
        // 0x2e81ec: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81e8) {
            ctx->pc = 0x2E8190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8190;
        }
    }
    ctx->pc = 0x2E81F0u;
label_2e81f0:
    // 0x2e81f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e81f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e81f4:
    // 0x2e81f4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e81f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e81f8:
    // 0x2e81f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e81f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e81fc:
    // 0x2e81fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e81fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e8200:
    // 0x2e8200: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e8200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8204:
    // 0x2e8204: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8208:
    // 0x2e8208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e820c:
    // 0x2e820c: 0x3e00008  jr          $ra
label_2e8210:
    if (ctx->pc == 0x2E8210u) {
        ctx->pc = 0x2E8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E820Cu;
        // 0x2e8210: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8214u;
        goto label_2e8214;
    }
    ctx->pc = 0x2E820Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E820Cu;
        // 0x2e8210: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E820Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8214u;
label_2e8214:
    // 0x2e8214: 0x0  nop
    ctx->pc = 0x2e8214u;
    // NOP
    if (ctx->pc == 0x2e8214u) { ctx->pc = 0x2e8218u; }
}
