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

// Function: sub_002701A8
// Address: 0x2701a8 - 0x2702d0
void sub_002701A8_0x2701a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002701A8_0x2701a8");
#endif

    switch (ctx->pc) {
        case 0x2701d8u: goto label_2701d8;
        case 0x2701f0u: goto label_2701f0;
        case 0x270200u: goto label_270200;
        case 0x270218u: goto label_270218;
        case 0x270230u: goto label_270230;
        case 0x27028cu: goto label_27028c;
        default: break;
    }

    ctx->pc = 0x2701a8u;

    // 0x2701a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2701a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2701ac: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2701acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2701b0: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x2701b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
    // 0x2701b4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2701b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2701b8: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x2701b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x2701bc: 0x261098f0  addiu       $s0, $s0, -0x6710
    ctx->pc = 0x2701bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940912));
    // 0x2701c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2701c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2701c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701c8: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2701c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2701cc: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2701ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2701d0: 0xc099d10  jal         func_267440
    ctx->pc = 0x2701D0u;
    SET_GPR_U32(ctx, 31, 0x2701D8u);
    ctx->pc = 0x2701D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701D0u;
    // 0x2701d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267440u, 0x2701D0u, 0x2701D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701D8u;
label_2701d8:
    // 0x2701d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2701d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701dc: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x2701dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x2701e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2701e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2701e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701e8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2701E8u;
    SET_GPR_U32(ctx, 31, 0x2701F0u);
    ctx->pc = 0x2701ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701E8u;
    // 0x2701ec: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2701E8u, 0x2701F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701F0u;
label_2701f0:
    // 0x2701f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2701f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2701f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701f8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2701F8u;
    SET_GPR_U32(ctx, 31, 0x270200u);
    ctx->pc = 0x2701FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2701F8u;
    // 0x2701fc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2701F8u, 0x270200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270200u;
label_270200:
    // 0x270200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270204: 0x3405c084  ori         $a1, $zero, 0xC084
    ctx->pc = 0x270204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49284);
    // 0x270208: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x270208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x27020c: 0x34a569d5  ori         $a1, $a1, 0x69D5
    ctx->pc = 0x27020cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27093);
    // 0x270210: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x270210u;
    SET_GPR_U32(ctx, 31, 0x270218u);
    ctx->pc = 0x270214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270210u;
    // 0x270214: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x270210u, 0x270218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270218u;
label_270218:
    // 0x270218: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270218u;
    {
        const bool branch_taken_0x270218 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270218u;
        // 0x27021c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270218) {
            ctx->pc = 0x270238u;
            goto label_270238;
        }
    }
    ctx->pc = 0x270220u;
    // 0x270220: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x270224: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x270224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x270228: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x270228u;
    SET_GPR_U32(ctx, 31, 0x270230u);
    ctx->pc = 0x27022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270228u;
    // 0x27022c: 0x24a59a90  addiu       $a1, $a1, -0x6570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x270228u, 0x270230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270230u;
label_270230:
    // 0x270230: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x270230u;
    {
        const bool branch_taken_0x270230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270230u;
        // 0x270234: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270230) {
            ctx->pc = 0x2702B0u;
            goto label_2702b0;
        }
    }
    ctx->pc = 0x270238u;
label_270238:
    // 0x270238: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x270238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x27023c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27023Cu;
    {
        const bool branch_taken_0x27023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27023Cu;
        // 0x270240: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27023c) {
            ctx->pc = 0x2702A8u;
            goto label_2702a8;
        }
    }
    ctx->pc = 0x270244u;
    // 0x270244: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x270244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x270248: 0x24429ae0  addiu       $v0, $v0, -0x6520
    ctx->pc = 0x270248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941408));
    // 0x27024c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27024cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270250: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x270250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270254: 0x800008  jr          $a0
    ctx->pc = 0x270254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27025Cu: goto label_27025c;
            case 0x270264u: goto label_270264;
            case 0x27029Cu: goto label_27029c;
            case 0x2702A4u: goto label_2702a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270254u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27025Cu;
label_27025c:
    // 0x27025c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27025Cu;
    {
        const bool branch_taken_0x27025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27025Cu;
        // 0x270260: 0x2412fe6d  addiu       $s2, $zero, -0x193 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966893));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27025c) {
            ctx->pc = 0x2702A8u;
            goto label_2702a8;
        }
    }
    ctx->pc = 0x270264u;
label_270264:
    // 0x270264: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x270264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x270268: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x270268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27026c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x27026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x270270: 0x90430c7c  lbu         $v1, 0xC7C($v0)
    ctx->pc = 0x270270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3196)));
    // 0x270274: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x270274u;
    {
        const bool branch_taken_0x270274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270274u;
        // 0x270278: 0x34058c7c  ori         $a1, $zero, 0x8C7C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35964);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270274) {
            ctx->pc = 0x270294u;
            goto label_270294;
        }
    }
    ctx->pc = 0x27027Cu;
    // 0x27027c: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x27027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x270280: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x270280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x270284: 0xc04a9f0  jal         func_12A7C0
    ctx->pc = 0x270284u;
    SET_GPR_U32(ctx, 31, 0x27028Cu);
    ctx->pc = 0x270288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270284u;
    // 0x270288: 0x2412fe6c  addiu       $s2, $zero, -0x194 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A7C0u, 0x270284u, 0x27028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27028Cu;
label_27028c:
    // 0x27028c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27028Cu;
    {
        const bool branch_taken_0x27028c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27028c) {
            ctx->pc = 0x270290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27028Cu;
            // 0x270290: 0xae720054  sw          $s2, 0x54($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2702ACu;
            goto label_2702ac;
        }
    }
    ctx->pc = 0x270294u;
label_270294:
    // 0x270294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270294u;
    {
        const bool branch_taken_0x270294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270294u;
        // 0x270298: 0x2412fe6f  addiu       $s2, $zero, -0x191 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966895));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270294) {
            ctx->pc = 0x2702A8u;
            goto label_2702a8;
        }
    }
    ctx->pc = 0x27029Cu;
label_27029c:
    // 0x27029c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27029Cu;
    {
        const bool branch_taken_0x27029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27029Cu;
        // 0x2702a0: 0x2412fe6e  addiu       $s2, $zero, -0x192 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966894));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27029c) {
            ctx->pc = 0x2702A8u;
            goto label_2702a8;
        }
    }
    ctx->pc = 0x2702A4u;
label_2702a4:
    // 0x2702a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2702a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2702a8:
    // 0x2702a8: 0xae720054  sw          $s2, 0x54($s3)
    ctx->pc = 0x2702a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 18));
label_2702ac:
    // 0x2702ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2702acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2702b0:
    // 0x2702b0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2702b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2702b4: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x2702b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2702b8: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2702b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2702bc: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x2702bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2702c0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2702c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2702c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2702C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2702C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702C4u;
        // 0x2702c8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2702C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2702CCu;
    // 0x2702cc: 0x0  nop
    ctx->pc = 0x2702ccu;
    // NOP
}
