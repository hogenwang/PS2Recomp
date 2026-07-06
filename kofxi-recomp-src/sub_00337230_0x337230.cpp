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

// Function: sub_00337230
// Address: 0x337230 - 0x337cb0
void sub_00337230_0x337230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337230_0x337230");
#endif

    switch (ctx->pc) {
        case 0x33724cu: goto label_33724c;
        case 0x3372e4u: goto label_3372e4;
        case 0x3372fcu: goto label_3372fc;
        case 0x337310u: goto label_337310;
        case 0x33732cu: goto label_33732c;
        case 0x337394u: goto label_337394;
        case 0x3373f8u: goto label_3373f8;
        case 0x337410u: goto label_337410;
        case 0x33742cu: goto label_33742c;
        case 0x337448u: goto label_337448;
        case 0x337474u: goto label_337474;
        case 0x3374a4u: goto label_3374a4;
        case 0x3374e4u: goto label_3374e4;
        case 0x337500u: goto label_337500;
        case 0x33751cu: goto label_33751c;
        case 0x33756cu: goto label_33756c;
        case 0x337588u: goto label_337588;
        case 0x3375fcu: goto label_3375fc;
        case 0x337630u: goto label_337630;
        case 0x33764cu: goto label_33764c;
        case 0x3376ccu: goto label_3376cc;
        case 0x33772cu: goto label_33772c;
        case 0x337784u: goto label_337784;
        case 0x3377bcu: goto label_3377bc;
        case 0x3378ccu: goto label_3378cc;
        case 0x337900u: goto label_337900;
        case 0x337918u: goto label_337918;
        case 0x3379a4u: goto label_3379a4;
        case 0x3379d8u: goto label_3379d8;
        case 0x3379f0u: goto label_3379f0;
        case 0x337a7cu: goto label_337a7c;
        case 0x337ab0u: goto label_337ab0;
        case 0x337ac8u: goto label_337ac8;
        case 0x337b54u: goto label_337b54;
        case 0x337b88u: goto label_337b88;
        case 0x337ba0u: goto label_337ba0;
        case 0x337bc4u: goto label_337bc4;
        case 0x337bccu: goto label_337bcc;
        case 0x337bdcu: goto label_337bdc;
        case 0x337becu: goto label_337bec;
        case 0x337bf4u: goto label_337bf4;
        case 0x337c10u: goto label_337c10;
        case 0x337c28u: goto label_337c28;
        case 0x337c38u: goto label_337c38;
        case 0x337c40u: goto label_337c40;
        case 0x337c50u: goto label_337c50;
        case 0x337c60u: goto label_337c60;
        case 0x337c68u: goto label_337c68;
        case 0x337c84u: goto label_337c84;
        case 0x337c9cu: goto label_337c9c;
        default: break;
    }

    ctx->pc = 0x337230u;

    // 0x337230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x337234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x337234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x337238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33723c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x337240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337244: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x337244u;
    SET_GPR_U32(ctx, 31, 0x33724Cu);
    ctx->pc = 0x337248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337244u;
    // 0x337248: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x337244u, 0x33724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33724Cu;
label_33724c:
    // 0x33724c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33724cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x337250: 0x9067b241  lbu         $a3, -0x4DBF($v1)
    ctx->pc = 0x337250u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x337254: 0x2ce1000b  sltiu       $at, $a3, 0xB
    ctx->pc = 0x337254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x337258: 0x102000cb  beqz        $at, . + 4 + (0xCB << 2)
    ctx->pc = 0x337258u;
    {
        const bool branch_taken_0x337258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337258u;
        // 0x33725c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337258) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337260u;
    // 0x337260: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x337260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x337264: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x337264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x337268: 0x24844c40  addiu       $a0, $a0, 0x4C40
    ctx->pc = 0x337268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19520));
    // 0x33726c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x337270: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x337270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x337274: 0x600008  jr          $v1
    ctx->pc = 0x337274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33727Cu: goto label_33727c;
            case 0x337318u: goto label_337318;
            case 0x337334u: goto label_337334;
            case 0x337434u: goto label_337434;
            case 0x337450u: goto label_337450;
            case 0x33747Cu: goto label_33747c;
            case 0x3374ACu: goto label_3374ac;
            case 0x3374ECu: goto label_3374ec;
            case 0x337508u: goto label_337508;
            case 0x337524u: goto label_337524;
            case 0x337588u: goto label_337588;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337274u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33727Cu;
label_33727c:
    // 0x33727c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33727cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x337280: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x337280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337284: 0x9042b242  lbu         $v0, -0x4DBE($v0)
    ctx->pc = 0x337284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x337288: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x337288u;
    {
        const bool branch_taken_0x337288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x337288) {
            ctx->pc = 0x33729Cu;
            goto label_33729c;
        }
    }
    ctx->pc = 0x337290u;
    // 0x337290: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x337290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337294: 0x5445001b  bnel        $v0, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x337294u;
    {
        const bool branch_taken_0x337294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x337294) {
            ctx->pc = 0x337298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337294u;
            // 0x337298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337304u;
            goto label_337304;
        }
    }
    ctx->pc = 0x33729Cu;
label_33729c:
    // 0x33729c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3372a0: 0x9042da70  lbu         $v0, -0x2590($v0)
    ctx->pc = 0x3372a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x3372a4: 0x2c410084  sltiu       $at, $v0, 0x84
    ctx->pc = 0x3372a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)132) ? 1 : 0);
    // 0x3372a8: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3372A8u;
    {
        const bool branch_taken_0x3372a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372a8) {
            ctx->pc = 0x3372ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3372A8u;
            // 0x3372ac: 0x2c4100fd  sltiu       $at, $v0, 0xFD (Delay Slot)
            SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)253) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3372C0u;
            goto label_3372c0;
        }
    }
    ctx->pc = 0x3372B0u;
    // 0x3372b0: 0x2c41007d  sltiu       $at, $v0, 0x7D
    ctx->pc = 0x3372b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x3372b4: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3372B4u;
    {
        const bool branch_taken_0x3372b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372b4) {
            ctx->pc = 0x3372B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3372B4u;
            // 0x3372b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3372D4u;
            goto label_3372d4;
        }
    }
    ctx->pc = 0x3372BCu;
    // 0x3372bc: 0x2c4100fd  sltiu       $at, $v0, 0xFD
    ctx->pc = 0x3372bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)253) ? 1 : 0);
label_3372c0:
    // 0x3372c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3372C0u;
    {
        const bool branch_taken_0x3372c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372c0) {
            ctx->pc = 0x3372D0u;
            goto label_3372d0;
        }
    }
    ctx->pc = 0x3372C8u;
    // 0x3372c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3372C8u;
    {
        const bool branch_taken_0x3372c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3372c8) {
            ctx->pc = 0x3372CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3372C8u;
            // 0x3372cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3372ECu;
            goto label_3372ec;
        }
    }
    ctx->pc = 0x3372D0u;
label_3372d0:
    // 0x3372d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3372d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3372d4:
    // 0x3372d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3372d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3372d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3372d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3372dc: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3372DCu;
    SET_GPR_U32(ctx, 31, 0x3372E4u);
    ctx->pc = 0x3372E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3372DCu;
    // 0x3372e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x3372DCu, 0x3372E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372E4u;
label_3372e4:
    // 0x3372e4: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x3372E4u;
    {
        const bool branch_taken_0x3372e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372e4) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x3372ECu;
label_3372ec:
    // 0x3372ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3372ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3372f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3372f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3372f4: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3372F4u;
    SET_GPR_U32(ctx, 31, 0x3372FCu);
    ctx->pc = 0x3372F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3372F4u;
    // 0x3372f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x3372F4u, 0x3372FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372FCu;
label_3372fc:
    // 0x3372fc: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x3372FCu;
    {
        const bool branch_taken_0x3372fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372fc) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337304u;
label_337304:
    // 0x337304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337308: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337308u;
    SET_GPR_U32(ctx, 31, 0x337310u);
    ctx->pc = 0x33730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337308u;
    // 0x33730c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337308u, 0x337310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337310u;
label_337310:
    // 0x337310: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x337310u;
    {
        const bool branch_taken_0x337310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337310) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337318u;
label_337318:
    // 0x337318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33731c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x33731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x337320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337324: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337324u;
    SET_GPR_U32(ctx, 31, 0x33732Cu);
    ctx->pc = 0x337328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337324u;
    // 0x337328: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337324u, 0x33732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33732Cu;
label_33732c:
    // 0x33732c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x33732Cu;
    {
        const bool branch_taken_0x33732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33732c) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337334u;
label_337334:
    // 0x337334: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x337334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x337338: 0x9046b240  lbu         $a2, -0x4DC0($v0)
    ctx->pc = 0x337338u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x33733c: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x33733Cu;
    {
        const bool branch_taken_0x33733c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x33733c) {
            ctx->pc = 0x33739Cu;
            goto label_33739c;
        }
    }
    ctx->pc = 0x337344u;
    // 0x337344: 0x2ce10002  sltiu       $at, $a3, 0x2
    ctx->pc = 0x337344u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x337348: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x337348u;
    {
        const bool branch_taken_0x337348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337348) {
            ctx->pc = 0x33739Cu;
            goto label_33739c;
        }
    }
    ctx->pc = 0x337350u;
    // 0x337350: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x337350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x337354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x337354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337358: 0x9044b244  lbu         $a0, -0x4DBC($v0)
    ctx->pc = 0x337358u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947396)));
    // 0x33735c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33735Cu;
    {
        const bool branch_taken_0x33735c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33735c) {
            ctx->pc = 0x337370u;
            goto label_337370;
        }
    }
    ctx->pc = 0x337364u;
    // 0x337364: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x337364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337368: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x337368u;
    {
        const bool branch_taken_0x337368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x337368) {
            ctx->pc = 0x33739Cu;
            goto label_33739c;
        }
    }
    ctx->pc = 0x337370u;
label_337370:
    // 0x337370: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x337370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x337374: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x337374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x337378: 0x9042b242  lbu         $v0, -0x4DBE($v0)
    ctx->pc = 0x337378u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x33737c: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33737Cu;
    {
        const bool branch_taken_0x33737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x33737c) {
            ctx->pc = 0x33739Cu;
            goto label_33739c;
        }
    }
    ctx->pc = 0x337384u;
    // 0x337384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33738c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x33738Cu;
    SET_GPR_U32(ctx, 31, 0x337394u);
    ctx->pc = 0x337390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33738Cu;
    // 0x337390: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x33738Cu, 0x337394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337394u;
label_337394:
    // 0x337394: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x337394u;
    {
        const bool branch_taken_0x337394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337394) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x33739Cu;
label_33739c:
    // 0x33739c: 0x54c0001f  bnel        $a2, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x33739Cu;
    {
        const bool branch_taken_0x33739c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x33739c) {
            ctx->pc = 0x3373A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33739Cu;
            // 0x3373a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33741Cu;
            goto label_33741c;
        }
    }
    ctx->pc = 0x3373A4u;
    // 0x3373a4: 0x2ce10002  sltiu       $at, $a3, 0x2
    ctx->pc = 0x3373a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3373a8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x3373A8u;
    {
        const bool branch_taken_0x3373a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3373a8) {
            ctx->pc = 0x337418u;
            goto label_337418;
        }
    }
    ctx->pc = 0x3373B0u;
    // 0x3373b0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3373b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3373b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3373b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3373b8: 0x9042b244  lbu         $v0, -0x4DBC($v0)
    ctx->pc = 0x3373b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947396)));
    // 0x3373bc: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3373BCu;
    {
        const bool branch_taken_0x3373bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3373bc) {
            ctx->pc = 0x337418u;
            goto label_337418;
        }
    }
    ctx->pc = 0x3373C4u;
    // 0x3373c4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3373c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3373c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3373c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3373cc: 0x9042b242  lbu         $v0, -0x4DBE($v0)
    ctx->pc = 0x3373ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947394)));
    // 0x3373d0: 0x10450011  beq         $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3373D0u;
    {
        const bool branch_taken_0x3373d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3373d0) {
            ctx->pc = 0x337418u;
            goto label_337418;
        }
    }
    ctx->pc = 0x3373D8u;
    // 0x3373d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3373d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3373dc: 0x8c42e8d8  lw          $v0, -0x1728($v0)
    ctx->pc = 0x3373dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961368)));
    // 0x3373e0: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3373E0u;
    {
        const bool branch_taken_0x3373e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3373e0) {
            ctx->pc = 0x3373E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3373E0u;
            // 0x3373e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337400u;
            goto label_337400;
        }
    }
    ctx->pc = 0x3373E8u;
    // 0x3373e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3373e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3373ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3373ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3373f0: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3373F0u;
    SET_GPR_U32(ctx, 31, 0x3373F8u);
    ctx->pc = 0x3373F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3373F0u;
    // 0x3373f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x3373F0u, 0x3373F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3373F8u;
label_3373f8:
    // 0x3373f8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3373F8u;
    {
        const bool branch_taken_0x3373f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3373f8) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337400u;
label_337400:
    // 0x337400: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x337400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x337404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337408: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337408u;
    SET_GPR_U32(ctx, 31, 0x337410u);
    ctx->pc = 0x33740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337408u;
    // 0x33740c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337408u, 0x337410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337410u;
label_337410:
    // 0x337410: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x337410u;
    {
        const bool branch_taken_0x337410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337410) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337418u;
label_337418:
    // 0x337418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33741c:
    // 0x33741c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33741cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x337420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337424: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337424u;
    SET_GPR_U32(ctx, 31, 0x33742Cu);
    ctx->pc = 0x337428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337424u;
    // 0x337428: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337424u, 0x33742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33742Cu;
label_33742c:
    // 0x33742c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x33742Cu;
    {
        const bool branch_taken_0x33742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33742c) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337434u;
label_337434:
    // 0x337434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337438: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x337438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33743c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33743cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337440: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337440u;
    SET_GPR_U32(ctx, 31, 0x337448u);
    ctx->pc = 0x337444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337440u;
    // 0x337444: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337440u, 0x337448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337448u;
label_337448:
    // 0x337448: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x337448u;
    {
        const bool branch_taken_0x337448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337448) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337450u;
label_337450:
    // 0x337450: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x337450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x337454: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x337454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x337458: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x337458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x33745c: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x33745Cu;
    {
        const bool branch_taken_0x33745c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33745c) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337464u;
    // 0x337464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x337464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x337468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33746c: 0xc0cdf2c  jal         func_337CB0
    ctx->pc = 0x33746Cu;
    SET_GPR_U32(ctx, 31, 0x337474u);
    ctx->pc = 0x337470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33746Cu;
    // 0x337470: 0xae240214  sw          $a0, 0x214($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB0u, 0x33746Cu, 0x337474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337474u;
label_337474:
    // 0x337474: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x337474u;
    {
        const bool branch_taken_0x337474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337474) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x33747Cu;
label_33747c:
    // 0x33747c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33747cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x337480: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x337480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x337484: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x337484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x337488: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x337488u;
    {
        const bool branch_taken_0x337488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337488) {
            ctx->pc = 0x33748Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337488u;
            // 0x33748c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33749Cu;
            goto label_33749c;
        }
    }
    ctx->pc = 0x337490u;
    // 0x337490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337494: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x337494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x337498: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x337498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33749c:
    // 0x33749c: 0xc0cdf2c  jal         func_337CB0
    ctx->pc = 0x33749Cu;
    SET_GPR_U32(ctx, 31, 0x3374A4u);
    ctx->pc = 0x3374A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33749Cu;
    // 0x3374a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB0u, 0x33749Cu, 0x3374A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374A4u;
label_3374a4:
    // 0x3374a4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3374A4u;
    {
        const bool branch_taken_0x3374a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3374a4) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x3374ACu;
label_3374ac:
    // 0x3374ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3374acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3374b0: 0x8c42da70  lw          $v0, -0x2590($v0)
    ctx->pc = 0x3374b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957680)));
    // 0x3374b4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3374b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3374b8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3374B8u;
    {
        const bool branch_taken_0x3374b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3374b8) {
            ctx->pc = 0x3374BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3374B8u;
            // 0x3374bc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3374DCu;
            goto label_3374dc;
        }
    }
    ctx->pc = 0x3374C0u;
    // 0x3374c0: 0x8e220490  lw          $v0, 0x490($s1)
    ctx->pc = 0x3374c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x3374c4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3374c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3374c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3374C8u;
    {
        const bool branch_taken_0x3374c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3374c8) {
            ctx->pc = 0x3374D8u;
            goto label_3374d8;
        }
    }
    ctx->pc = 0x3374D0u;
    // 0x3374d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3374d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3374d4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x3374d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_3374d8:
    // 0x3374d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3374d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3374dc:
    // 0x3374dc: 0xc0cdf2c  jal         func_337CB0
    ctx->pc = 0x3374DCu;
    SET_GPR_U32(ctx, 31, 0x3374E4u);
    ctx->pc = 0x3374E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3374DCu;
    // 0x3374e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB0u, 0x3374DCu, 0x3374E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374E4u;
label_3374e4:
    // 0x3374e4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3374E4u;
    {
        const bool branch_taken_0x3374e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3374e4) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x3374ECu;
label_3374ec:
    // 0x3374ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3374ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3374f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3374f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3374f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3374f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3374f8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3374F8u;
    SET_GPR_U32(ctx, 31, 0x337500u);
    ctx->pc = 0x3374FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3374F8u;
    // 0x3374fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x3374F8u, 0x337500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337500u;
label_337500:
    // 0x337500: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x337500u;
    {
        const bool branch_taken_0x337500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337500) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337508u;
label_337508:
    // 0x337508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33750c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x33750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x337510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337514: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337514u;
    SET_GPR_U32(ctx, 31, 0x33751Cu);
    ctx->pc = 0x337518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337514u;
    // 0x337518: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337514u, 0x33751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33751Cu;
label_33751c:
    // 0x33751c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x33751Cu;
    {
        const bool branch_taken_0x33751c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33751c) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337524u;
label_337524:
    // 0x337524: 0x8e23048c  lw          $v1, 0x48C($s1)
    ctx->pc = 0x337524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x337528: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x337528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x33752c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33752cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337530: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x337530u;
    {
        const bool branch_taken_0x337530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337530) {
            ctx->pc = 0x337534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337530u;
            // 0x337534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337578u;
            goto label_337578;
        }
    }
    ctx->pc = 0x337538u;
    // 0x337538: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x337538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x33753c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33753cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337540: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x337540u;
    {
        const bool branch_taken_0x337540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337540) {
            ctx->pc = 0x337574u;
            goto label_337574;
        }
    }
    ctx->pc = 0x337548u;
    // 0x337548: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x337548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x33754c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33754cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337550: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x337550u;
    {
        const bool branch_taken_0x337550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337550) {
            ctx->pc = 0x337574u;
            goto label_337574;
        }
    }
    ctx->pc = 0x337558u;
    // 0x337558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33755c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x33755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x337560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337564: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337564u;
    SET_GPR_U32(ctx, 31, 0x33756Cu);
    ctx->pc = 0x337568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337564u;
    // 0x337568: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337564u, 0x33756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33756Cu;
label_33756c:
    // 0x33756c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33756Cu;
    {
        const bool branch_taken_0x33756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33756c) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337574u;
label_337574:
    // 0x337574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_337578:
    // 0x337578: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x337578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33757c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33757cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337580: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337580u;
    SET_GPR_U32(ctx, 31, 0x337588u);
    ctx->pc = 0x337584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337580u;
    // 0x337584: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337580u, 0x337588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337588u;
label_337588:
    // 0x337588: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x337588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33758c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x33758cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x337590: 0x90679748  lbu         $a3, -0x68B8($v1)
    ctx->pc = 0x337590u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x337594: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x337594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x337598: 0x24a5db53  addiu       $a1, $a1, -0x24AD
    ctx->pc = 0x337598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957907));
    // 0x33759c: 0x2484dbc8  addiu       $a0, $a0, -0x2438
    ctx->pc = 0x33759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958024));
    // 0x3375a0: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x3375a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3375a4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3375a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3375a8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3375a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3375ac: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x3375acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x3375b0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x3375b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3375b4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3375b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3375b8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x3375b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3375bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3375bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3375c0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3375c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3375c4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3375c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3375c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3375c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3375cc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3375ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3375d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3375d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3375d4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3375D4u;
    {
        const bool branch_taken_0x3375d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3375D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375D4u;
        // 0x3375d8: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3375d4) {
            ctx->pc = 0x3375FCu;
            goto label_3375fc;
        }
    }
    ctx->pc = 0x3375DCu;
    // 0x3375dc: 0x848304fe  lh          $v1, 0x4FE($a0)
    ctx->pc = 0x3375dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1278)));
    // 0x3375e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3375E0u;
    {
        const bool branch_taken_0x3375e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3375e0) {
            ctx->pc = 0x3375FCu;
            goto label_3375fc;
        }
    }
    ctx->pc = 0x3375E8u;
    // 0x3375e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3375e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3375ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3375ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3375f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3375f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3375f4: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3375F4u;
    SET_GPR_U32(ctx, 31, 0x3375FCu);
    ctx->pc = 0x3375F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3375F4u;
    // 0x3375f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x3375F4u, 0x3375FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375FCu;
label_3375fc:
    // 0x3375fc: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3375fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x337600: 0x9063b24a  lbu         $v1, -0x4DB6($v1)
    ctx->pc = 0x337600u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947402)));
    // 0x337604: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x337604u;
    {
        const bool branch_taken_0x337604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337604) {
            ctx->pc = 0x33764Cu;
            goto label_33764c;
        }
    }
    ctx->pc = 0x33760Cu;
    // 0x33760c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x337610: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x337610u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x337614: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x337614u;
    {
        const bool branch_taken_0x337614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337614) {
            ctx->pc = 0x33764Cu;
            goto label_33764c;
        }
    }
    ctx->pc = 0x33761Cu;
    // 0x33761c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33761cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x337620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x337620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337624: 0x90449748  lbu         $a0, -0x68B8($v0)
    ctx->pc = 0x337624u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x337628: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x337628u;
    SET_GPR_U32(ctx, 31, 0x337630u);
    ctx->pc = 0x33762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337628u;
    // 0x33762c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x337628u, 0x337630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337630u;
label_337630:
    // 0x337630: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337630u;
    {
        const bool branch_taken_0x337630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337630) {
            ctx->pc = 0x33764Cu;
            goto label_33764c;
        }
    }
    ctx->pc = 0x337638u;
    // 0x337638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33763c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337644: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337644u;
    SET_GPR_U32(ctx, 31, 0x33764Cu);
    ctx->pc = 0x337648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337644u;
    // 0x337648: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337644u, 0x33764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33764Cu;
label_33764c:
    // 0x33764c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33764cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x337650: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x337650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337654: 0x9065b244  lbu         $a1, -0x4DBC($v1)
    ctx->pc = 0x337654u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947396)));
    // 0x337658: 0x54a4003f  bnel        $a1, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x337658u;
    {
        const bool branch_taken_0x337658 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x337658) {
            ctx->pc = 0x33765Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337658u;
            // 0x33765c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337758u;
            goto label_337758;
        }
    }
    ctx->pc = 0x337660u;
    // 0x337660: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x337660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x337664: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x337664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x337668: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x337668u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x33766c: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x33766Cu;
    {
        const bool branch_taken_0x33766c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33766c) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x337674u;
    // 0x337674: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x337674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x337678: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x337678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33767c: 0x24844c10  addiu       $a0, $a0, 0x4C10
    ctx->pc = 0x33767cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19472));
    // 0x337680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x337680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x337684: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x337684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x337688: 0x600008  jr          $v1
    ctx->pc = 0x337688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x337690u: goto label_337690;
            case 0x3377C0u: goto label_3377c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337688u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x337690u;
label_337690:
    // 0x337690: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x337690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x337694: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x337694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x337698: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x337698u;
    {
        const bool branch_taken_0x337698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x337698) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x3376A0u;
    // 0x3376a0: 0x8e250538  lw          $a1, 0x538($s1)
    ctx->pc = 0x3376a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1336)));
    // 0x3376a4: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x3376a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x3376a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3376a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3376ac: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3376acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3376b0: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x3376b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3376b4: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x3376B4u;
    {
        const bool branch_taken_0x3376b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3376b4) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x3376BCu;
    // 0x3376bc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3376bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3376c0: 0x90429748  lbu         $v0, -0x68B8($v0)
    ctx->pc = 0x3376c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x3376c4: 0xc062810  jal         func_18A040
    ctx->pc = 0x3376C4u;
    SET_GPR_U32(ctx, 31, 0x3376CCu);
    ctx->pc = 0x3376C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3376C4u;
    // 0x3376c8: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x3376C4u, 0x3376CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3376CCu;
label_3376cc:
    // 0x3376cc: 0x8e230490  lw          $v1, 0x490($s1)
    ctx->pc = 0x3376ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
    // 0x3376d0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3376d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3376d4: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3376D4u;
    {
        const bool branch_taken_0x3376d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3376d4) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x3376DCu;
    // 0x3376dc: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x3376dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3376e0: 0x4a10037  bgez        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3376E0u;
    {
        const bool branch_taken_0x3376e0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x3376e0) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x3376E8u;
    // 0x3376e8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3376e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3376ec: 0x28630220  slti        $v1, $v1, 0x220
    ctx->pc = 0x3376ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
    // 0x3376f0: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3376F0u;
    {
        const bool branch_taken_0x3376f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3376f0) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x3376F8u;
    // 0x3376f8: 0x8e24023c  lw          $a0, 0x23C($s1)
    ctx->pc = 0x3376f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x3376fc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3376fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x337700: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x337700u;
    {
        const bool branch_taken_0x337700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337700) {
            ctx->pc = 0x337704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337700u;
            // 0x337704: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337730u;
            goto label_337730;
        }
    }
    ctx->pc = 0x337708u;
    // 0x337708: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x337708u;
    {
        const bool branch_taken_0x337708 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x337708) {
            ctx->pc = 0x33772Cu;
            goto label_33772c;
        }
    }
    ctx->pc = 0x337710u;
    // 0x337710: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x337710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x337714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33771c: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x33771cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x337720: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x337720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x337724: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337724u;
    SET_GPR_U32(ctx, 31, 0x33772Cu);
    ctx->pc = 0x337728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337724u;
    // 0x337728: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337724u, 0x33772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33772Cu;
label_33772c:
    // 0x33772c: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x33772cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
label_337730:
    // 0x337730: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x337730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x337734: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x337734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x337738: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x337738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x33773c: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x33773Cu;
    {
        const bool branch_taken_0x33773c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33773c) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x337744u;
    // 0x337744: 0x8e24023c  lw          $a0, 0x23C($s1)
    ctx->pc = 0x337744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x337748: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x337748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x33774c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33774cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x337750: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x337750u;
    {
        const bool branch_taken_0x337750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337750u;
        // 0x337754: 0xae23023c  sw          $v1, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337750) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x337758u;
label_337758:
    // 0x337758: 0x54a3000d  bnel        $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x337758u;
    {
        const bool branch_taken_0x337758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x337758) {
            ctx->pc = 0x33775Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337758u;
            // 0x33775c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337790u;
            goto label_337790;
        }
    }
    ctx->pc = 0x337760u;
    // 0x337760: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x337760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x337764: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x337764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x337768: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x337768u;
    {
        const bool branch_taken_0x337768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x337768) {
            ctx->pc = 0x33776Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337768u;
            // 0x33776c: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x337770u;
    // 0x337770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337774: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x337774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x337778: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x337778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x33777c: 0xc0501d0  jal         func_140740
    ctx->pc = 0x33777Cu;
    SET_GPR_U32(ctx, 31, 0x337784u);
    ctx->pc = 0x337780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33777Cu;
    // 0x337780: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x33777Cu, 0x337784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337784u;
label_337784:
    // 0x337784: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x337784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
    // 0x337788: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x337788u;
    {
        const bool branch_taken_0x337788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337788) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x337790u;
label_337790:
    // 0x337790: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x337790u;
    {
        const bool branch_taken_0x337790 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x337790) {
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x337798u;
    // 0x337798: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x337798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x33779c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x33779cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x3377a0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3377A0u;
    {
        const bool branch_taken_0x3377a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3377a0) {
            ctx->pc = 0x3377A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3377A0u;
            // 0x3377a4: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3377C0u;
            goto label_3377c0;
        }
    }
    ctx->pc = 0x3377A8u;
    // 0x3377a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3377a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3377ac: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3377acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3377b0: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x3377b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x3377b4: 0xc0501d0  jal         func_140740
    ctx->pc = 0x3377B4u;
    SET_GPR_U32(ctx, 31, 0x3377BCu);
    ctx->pc = 0x3377B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377B4u;
    // 0x3377b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140740u, 0x3377B4u, 0x3377BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377BCu;
label_3377bc:
    // 0x3377bc: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x3377bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
label_3377c0:
    // 0x3377c0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3377c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3377c4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3377c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3377c8: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x3377c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x3377cc: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3377CCu;
    {
        const bool branch_taken_0x3377cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3377cc) {
            ctx->pc = 0x337818u;
            goto label_337818;
        }
    }
    ctx->pc = 0x3377D4u;
    // 0x3377d4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3377d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3377d8: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3377D8u;
    {
        const bool branch_taken_0x3377d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3377d8) {
            ctx->pc = 0x337818u;
            goto label_337818;
        }
    }
    ctx->pc = 0x3377E0u;
    // 0x3377e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3377e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3377e4: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3377E4u;
    {
        const bool branch_taken_0x3377e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3377e4) {
            ctx->pc = 0x337818u;
            goto label_337818;
        }
    }
    ctx->pc = 0x3377ECu;
    // 0x3377ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3377ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3377f0: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3377F0u;
    {
        const bool branch_taken_0x3377f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3377f0) {
            ctx->pc = 0x337818u;
            goto label_337818;
        }
    }
    ctx->pc = 0x3377F8u;
    // 0x3377f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3377f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3377fc: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3377FCu;
    {
        const bool branch_taken_0x3377fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3377fc) {
            ctx->pc = 0x337818u;
            goto label_337818;
        }
    }
    ctx->pc = 0x337804u;
    // 0x337804: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x337804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x337808: 0x8c84da70  lw          $a0, -0x2590($a0)
    ctx->pc = 0x337808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957680)));
    // 0x33780c: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x33780cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x337810: 0x54800123  bnel        $a0, $zero, . + 4 + (0x123 << 2)
    ctx->pc = 0x337810u;
    {
        const bool branch_taken_0x337810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x337810) {
            ctx->pc = 0x337814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337810u;
            // 0x337814: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337CA0u;
            goto label_337ca0;
        }
    }
    ctx->pc = 0x337818u;
label_337818:
    // 0x337818: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x337818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x33781c: 0x9084b242  lbu         $a0, -0x4DBE($a0)
    ctx->pc = 0x33781cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947394)));
    // 0x337820: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x337820u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x337824: 0x1020011d  beqz        $at, . + 4 + (0x11D << 2)
    ctx->pc = 0x337824u;
    {
        const bool branch_taken_0x337824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337824) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x33782Cu;
    // 0x33782c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33782cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x337830: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x337830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x337834: 0x24a54bf0  addiu       $a1, $a1, 0x4BF0
    ctx->pc = 0x337834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19440));
    // 0x337838: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x337838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33783c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x33783cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337840: 0x800008  jr          $a0
    ctx->pc = 0x337840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x337848u: goto label_337848;
            case 0x337920u: goto label_337920;
            case 0x3379F8u: goto label_3379f8;
            case 0x337AD0u: goto label_337ad0;
            case 0x337BA8u: goto label_337ba8;
            case 0x337C30u: goto label_337c30;
            case 0x337C9Cu: goto label_337c9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x337848u;
label_337848:
    // 0x337848: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x337848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33784c: 0x50640021  beql        $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x33784Cu;
    {
        const bool branch_taken_0x33784c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33784c) {
            ctx->pc = 0x337850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33784Cu;
            // 0x337850: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3378D4u;
            goto label_3378d4;
        }
    }
    ctx->pc = 0x337854u;
    // 0x337854: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x337854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x337858: 0x5064000d  beql        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x337858u;
    {
        const bool branch_taken_0x337858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337858) {
            ctx->pc = 0x33785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337858u;
            // 0x33785c: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337890u;
            goto label_337890;
        }
    }
    ctx->pc = 0x337860u;
    // 0x337860: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x337860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337864: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x337864u;
    {
        const bool branch_taken_0x337864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337864) {
            ctx->pc = 0x33788Cu;
            goto label_33788c;
        }
    }
    ctx->pc = 0x33786Cu;
    // 0x33786c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337870: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337870u;
    {
        const bool branch_taken_0x337870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337870) {
            ctx->pc = 0x33788Cu;
            goto label_33788c;
        }
    }
    ctx->pc = 0x337878u;
    // 0x337878: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x337878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33787c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33787Cu;
    {
        const bool branch_taken_0x33787c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33787c) {
            ctx->pc = 0x33788Cu;
            goto label_33788c;
        }
    }
    ctx->pc = 0x337884u;
    // 0x337884: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x337884u;
    {
        const bool branch_taken_0x337884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337884u;
        // 0x337888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337884) {
            ctx->pc = 0x337908u;
            goto label_337908;
        }
    }
    ctx->pc = 0x33788Cu;
label_33788c:
    // 0x33788c: 0x8e230490  lw          $v1, 0x490($s1)
    ctx->pc = 0x33788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
label_337890:
    // 0x337890: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x337890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x337894: 0x10600101  beqz        $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x337894u;
    {
        const bool branch_taken_0x337894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x337894) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x33789Cu;
    // 0x33789c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x33789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3378a0: 0x46100fe  bgez        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x3378A0u;
    {
        const bool branch_taken_0x3378a0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3378a0) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3378A8u;
    // 0x3378a8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3378a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3378ac: 0x28630220  slti        $v1, $v1, 0x220
    ctx->pc = 0x3378acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
    // 0x3378b0: 0x146000fa  bnez        $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x3378B0u;
    {
        const bool branch_taken_0x3378b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3378b0) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3378B8u;
    // 0x3378b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3378b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3378bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3378bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3378c0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3378c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3378c4: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3378C4u;
    SET_GPR_U32(ctx, 31, 0x3378CCu);
    ctx->pc = 0x3378C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3378C4u;
    // 0x3378c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x3378C4u, 0x3378CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3378CCu;
label_3378cc:
    // 0x3378cc: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x3378CCu;
    {
        const bool branch_taken_0x3378cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3378cc) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3378D4u;
label_3378d4:
    // 0x3378d4: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3378d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3378d8: 0x106000f0  beqz        $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x3378D8u;
    {
        const bool branch_taken_0x3378d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3378d8) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3378E0u;
    // 0x3378e0: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x3378e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x3378e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3378e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3378e8: 0x146700ec  bne         $v1, $a3, . + 4 + (0xEC << 2)
    ctx->pc = 0x3378E8u;
    {
        const bool branch_taken_0x3378e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3378e8) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3378F0u;
    // 0x3378f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3378f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3378f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3378f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3378f8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3378F8u;
    SET_GPR_U32(ctx, 31, 0x337900u);
    ctx->pc = 0x3378FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3378F8u;
    // 0x3378fc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x3378F8u, 0x337900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337900u;
label_337900:
    // 0x337900: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x337900u;
    {
        const bool branch_taken_0x337900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337900) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337908u;
label_337908:
    // 0x337908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33790c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x33790cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x337910: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337910u;
    SET_GPR_U32(ctx, 31, 0x337918u);
    ctx->pc = 0x337914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337910u;
    // 0x337914: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337910u, 0x337918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337918u;
label_337918:
    // 0x337918: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x337918u;
    {
        const bool branch_taken_0x337918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337918) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337920u;
label_337920:
    // 0x337920: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x337920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x337924: 0x50640021  beql        $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x337924u;
    {
        const bool branch_taken_0x337924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337924) {
            ctx->pc = 0x337928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337924u;
            // 0x337928: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3379ACu;
            goto label_3379ac;
        }
    }
    ctx->pc = 0x33792Cu;
    // 0x33792c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x33792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x337930: 0x5064000d  beql        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x337930u;
    {
        const bool branch_taken_0x337930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337930) {
            ctx->pc = 0x337934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337930u;
            // 0x337934: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337968u;
            goto label_337968;
        }
    }
    ctx->pc = 0x337938u;
    // 0x337938: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x337938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33793c: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33793Cu;
    {
        const bool branch_taken_0x33793c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33793c) {
            ctx->pc = 0x337964u;
            goto label_337964;
        }
    }
    ctx->pc = 0x337944u;
    // 0x337944: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x337944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337948: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337948u;
    {
        const bool branch_taken_0x337948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337948) {
            ctx->pc = 0x337964u;
            goto label_337964;
        }
    }
    ctx->pc = 0x337950u;
    // 0x337950: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x337950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337954: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337954u;
    {
        const bool branch_taken_0x337954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337954) {
            ctx->pc = 0x337964u;
            goto label_337964;
        }
    }
    ctx->pc = 0x33795Cu;
    // 0x33795c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x33795Cu;
    {
        const bool branch_taken_0x33795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33795Cu;
        // 0x337960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33795c) {
            ctx->pc = 0x3379E0u;
            goto label_3379e0;
        }
    }
    ctx->pc = 0x337964u;
label_337964:
    // 0x337964: 0x8e230490  lw          $v1, 0x490($s1)
    ctx->pc = 0x337964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
label_337968:
    // 0x337968: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x337968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x33796c: 0x106000cb  beqz        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x33796Cu;
    {
        const bool branch_taken_0x33796c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33796c) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337974u;
    // 0x337974: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x337974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x337978: 0x46100c8  bgez        $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x337978u;
    {
        const bool branch_taken_0x337978 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x337978) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337980u;
    // 0x337980: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x337980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x337984: 0x2863020c  slti        $v1, $v1, 0x20C
    ctx->pc = 0x337984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)524) ? 1 : 0);
    // 0x337988: 0x146000c4  bnez        $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x337988u;
    {
        const bool branch_taken_0x337988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337988) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337990u;
    // 0x337990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337998: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x337998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x33799c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x33799Cu;
    SET_GPR_U32(ctx, 31, 0x3379A4u);
    ctx->pc = 0x3379A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33799Cu;
    // 0x3379a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x33799Cu, 0x3379A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3379A4u;
label_3379a4:
    // 0x3379a4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x3379A4u;
    {
        const bool branch_taken_0x3379a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3379a4) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3379ACu;
label_3379ac:
    // 0x3379ac: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3379acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3379b0: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x3379B0u;
    {
        const bool branch_taken_0x3379b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3379b0) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3379B8u;
    // 0x3379b8: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x3379b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x3379bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3379bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3379c0: 0x146700b6  bne         $v1, $a3, . + 4 + (0xB6 << 2)
    ctx->pc = 0x3379C0u;
    {
        const bool branch_taken_0x3379c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3379c0) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3379C8u;
    // 0x3379c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3379c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3379cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3379ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3379d0: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3379D0u;
    SET_GPR_U32(ctx, 31, 0x3379D8u);
    ctx->pc = 0x3379D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3379D0u;
    // 0x3379d4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x3379D0u, 0x3379D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3379D8u;
label_3379d8:
    // 0x3379d8: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x3379D8u;
    {
        const bool branch_taken_0x3379d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3379d8) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3379E0u;
label_3379e0:
    // 0x3379e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3379e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3379e4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x3379e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3379e8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x3379E8u;
    SET_GPR_U32(ctx, 31, 0x3379F0u);
    ctx->pc = 0x3379ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3379E8u;
    // 0x3379ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x3379E8u, 0x3379F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3379F0u;
label_3379f0:
    // 0x3379f0: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x3379F0u;
    {
        const bool branch_taken_0x3379f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3379f0) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x3379F8u;
label_3379f8:
    // 0x3379f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3379f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3379fc: 0x50640021  beql        $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3379FCu;
    {
        const bool branch_taken_0x3379fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3379fc) {
            ctx->pc = 0x337A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3379FCu;
            // 0x337a00: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337A84u;
            goto label_337a84;
        }
    }
    ctx->pc = 0x337A04u;
    // 0x337a04: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x337a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x337a08: 0x5064000d  beql        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x337A08u;
    {
        const bool branch_taken_0x337a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337a08) {
            ctx->pc = 0x337A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337A08u;
            // 0x337a0c: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337A40u;
            goto label_337a40;
        }
    }
    ctx->pc = 0x337A10u;
    // 0x337a10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x337a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337a14: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x337A14u;
    {
        const bool branch_taken_0x337a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337a14) {
            ctx->pc = 0x337A3Cu;
            goto label_337a3c;
        }
    }
    ctx->pc = 0x337A1Cu;
    // 0x337a1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x337a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337a20: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337A20u;
    {
        const bool branch_taken_0x337a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337a20) {
            ctx->pc = 0x337A3Cu;
            goto label_337a3c;
        }
    }
    ctx->pc = 0x337A28u;
    // 0x337a28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x337a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337a2c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337A2Cu;
    {
        const bool branch_taken_0x337a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337a2c) {
            ctx->pc = 0x337A3Cu;
            goto label_337a3c;
        }
    }
    ctx->pc = 0x337A34u;
    // 0x337a34: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x337A34u;
    {
        const bool branch_taken_0x337a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A34u;
        // 0x337a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a34) {
            ctx->pc = 0x337AB8u;
            goto label_337ab8;
        }
    }
    ctx->pc = 0x337A3Cu;
label_337a3c:
    // 0x337a3c: 0x8e230490  lw          $v1, 0x490($s1)
    ctx->pc = 0x337a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
label_337a40:
    // 0x337a40: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x337a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x337a44: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x337A44u;
    {
        const bool branch_taken_0x337a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x337a44) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337A4Cu;
    // 0x337a4c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x337a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x337a50: 0x4610092  bgez        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x337A50u;
    {
        const bool branch_taken_0x337a50 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x337a50) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337A58u;
    // 0x337a58: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x337a58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x337a5c: 0x28630220  slti        $v1, $v1, 0x220
    ctx->pc = 0x337a5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
    // 0x337a60: 0x1460008e  bnez        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x337A60u;
    {
        const bool branch_taken_0x337a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337a60) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337A68u;
    // 0x337a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a70: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x337a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x337a74: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337A74u;
    SET_GPR_U32(ctx, 31, 0x337A7Cu);
    ctx->pc = 0x337A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337A74u;
    // 0x337a78: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337A74u, 0x337A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A7Cu;
label_337a7c:
    // 0x337a7c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x337A7Cu;
    {
        const bool branch_taken_0x337a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337a7c) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337A84u;
label_337a84:
    // 0x337a84: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x337a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x337a88: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x337A88u;
    {
        const bool branch_taken_0x337a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x337a88) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337A90u;
    // 0x337a90: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x337a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x337a94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x337a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337a98: 0x14670080  bne         $v1, $a3, . + 4 + (0x80 << 2)
    ctx->pc = 0x337A98u;
    {
        const bool branch_taken_0x337a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x337a98) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337AA0u;
    // 0x337aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337aa8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337AA8u;
    SET_GPR_U32(ctx, 31, 0x337AB0u);
    ctx->pc = 0x337AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337AA8u;
    // 0x337aac: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337AA8u, 0x337AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337AB0u;
label_337ab0:
    // 0x337ab0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x337AB0u;
    {
        const bool branch_taken_0x337ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337ab0) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337AB8u;
label_337ab8:
    // 0x337ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337abc: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x337abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x337ac0: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337AC0u;
    SET_GPR_U32(ctx, 31, 0x337AC8u);
    ctx->pc = 0x337AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337AC0u;
    // 0x337ac4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337AC0u, 0x337AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337AC8u;
label_337ac8:
    // 0x337ac8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x337AC8u;
    {
        const bool branch_taken_0x337ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337ac8) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337AD0u;
label_337ad0:
    // 0x337ad0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x337ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x337ad4: 0x50640021  beql        $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x337AD4u;
    {
        const bool branch_taken_0x337ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337ad4) {
            ctx->pc = 0x337AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337AD4u;
            // 0x337ad8: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337B5Cu;
            goto label_337b5c;
        }
    }
    ctx->pc = 0x337ADCu;
    // 0x337adc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x337adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x337ae0: 0x5064000d  beql        $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x337AE0u;
    {
        const bool branch_taken_0x337ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337ae0) {
            ctx->pc = 0x337AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337AE0u;
            // 0x337ae4: 0x8e230490  lw          $v1, 0x490($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337B18u;
            goto label_337b18;
        }
    }
    ctx->pc = 0x337AE8u;
    // 0x337ae8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x337ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337aec: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x337AECu;
    {
        const bool branch_taken_0x337aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337aec) {
            ctx->pc = 0x337B14u;
            goto label_337b14;
        }
    }
    ctx->pc = 0x337AF4u;
    // 0x337af4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x337af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337af8: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337AF8u;
    {
        const bool branch_taken_0x337af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337af8) {
            ctx->pc = 0x337B14u;
            goto label_337b14;
        }
    }
    ctx->pc = 0x337B00u;
    // 0x337b00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x337b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337b04: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337B04u;
    {
        const bool branch_taken_0x337b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337b04) {
            ctx->pc = 0x337B14u;
            goto label_337b14;
        }
    }
    ctx->pc = 0x337B0Cu;
    // 0x337b0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x337B0Cu;
    {
        const bool branch_taken_0x337b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B0Cu;
        // 0x337b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b0c) {
            ctx->pc = 0x337B90u;
            goto label_337b90;
        }
    }
    ctx->pc = 0x337B14u;
label_337b14:
    // 0x337b14: 0x8e230490  lw          $v1, 0x490($s1)
    ctx->pc = 0x337b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1168)));
label_337b18:
    // 0x337b18: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x337b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x337b1c: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x337B1Cu;
    {
        const bool branch_taken_0x337b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x337b1c) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337B24u;
    // 0x337b24: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x337b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x337b28: 0x461005c  bgez        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x337B28u;
    {
        const bool branch_taken_0x337b28 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x337b28) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337B30u;
    // 0x337b30: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x337b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x337b34: 0x28630220  slti        $v1, $v1, 0x220
    ctx->pc = 0x337b34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
    // 0x337b38: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x337B38u;
    {
        const bool branch_taken_0x337b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337b38) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337B40u;
    // 0x337b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b48: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x337b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x337b4c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337B4Cu;
    SET_GPR_U32(ctx, 31, 0x337B54u);
    ctx->pc = 0x337B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337B4Cu;
    // 0x337b50: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337B4Cu, 0x337B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337B54u;
label_337b54:
    // 0x337b54: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x337B54u;
    {
        const bool branch_taken_0x337b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337b54) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337B5Cu;
label_337b5c:
    // 0x337b5c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x337b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x337b60: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x337B60u;
    {
        const bool branch_taken_0x337b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x337b60) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337B68u;
    // 0x337b68: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x337b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x337b6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x337b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337b70: 0x1467004a  bne         $v1, $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x337B70u;
    {
        const bool branch_taken_0x337b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x337b70) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337B78u;
    // 0x337b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b80: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337B80u;
    SET_GPR_U32(ctx, 31, 0x337B88u);
    ctx->pc = 0x337B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337B80u;
    // 0x337b84: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337B80u, 0x337B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337B88u;
label_337b88:
    // 0x337b88: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x337B88u;
    {
        const bool branch_taken_0x337b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337b88) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337B90u;
label_337b90:
    // 0x337b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b94: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x337b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x337b98: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337B98u;
    SET_GPR_U32(ctx, 31, 0x337BA0u);
    ctx->pc = 0x337B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337B98u;
    // 0x337b9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337B98u, 0x337BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BA0u;
label_337ba0:
    // 0x337ba0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x337BA0u;
    {
        const bool branch_taken_0x337ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337ba0) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337BA8u;
label_337ba8:
    // 0x337ba8: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x337ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x337bac: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x337bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x337bb0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x337bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337bb4: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x337bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x337bb8: 0xa620024c  sh          $zero, 0x24C($s1)
    ctx->pc = 0x337bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 588), (uint16_t)GPR_U32(ctx, 0));
    // 0x337bbc: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x337BBCu;
    SET_GPR_U32(ctx, 31, 0x337BC4u);
    ctx->pc = 0x337BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337BBCu;
    // 0x337bc0: 0xa6200228  sh          $zero, 0x228($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x337BBCu, 0x337BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BC4u;
label_337bc4:
    // 0x337bc4: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x337BC4u;
    SET_GPR_U32(ctx, 31, 0x337BCCu);
    ctx->pc = 0x337BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337BC4u;
    // 0x337bc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x337BC4u, 0x337BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BCCu;
label_337bcc:
    // 0x337bcc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x337bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x337bd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x337bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337bd4: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x337BD4u;
    SET_GPR_U32(ctx, 31, 0x337BDCu);
    ctx->pc = 0x337BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337BD4u;
    // 0x337bd8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x337BD4u, 0x337BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BDCu;
label_337bdc:
    // 0x337bdc: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x337bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x337be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x337be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337be4: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x337BE4u;
    SET_GPR_U32(ctx, 31, 0x337BECu);
    ctx->pc = 0x337BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337BE4u;
    // 0x337be8: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x337BE4u, 0x337BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BECu;
label_337bec:
    // 0x337bec: 0xc048bde  jal         func_122F78
    ctx->pc = 0x337BECu;
    SET_GPR_U32(ctx, 31, 0x337BF4u);
    ctx->pc = 0x337BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337BECu;
    // 0x337bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x337BECu, 0x337BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BF4u;
label_337bf4:
    // 0x337bf4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x337BF4u;
    {
        const bool branch_taken_0x337bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337bf4) {
            ctx->pc = 0x337BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337BF4u;
            // 0x337bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337C18u;
            goto label_337c18;
        }
    }
    ctx->pc = 0x337BFCu;
    // 0x337bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x337c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337c04: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x337c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x337c08: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337C08u;
    SET_GPR_U32(ctx, 31, 0x337C10u);
    ctx->pc = 0x337C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C08u;
    // 0x337c0c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337C08u, 0x337C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C10u;
label_337c10:
    // 0x337c10: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x337C10u;
    {
        const bool branch_taken_0x337c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337c10) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337C18u;
label_337c18:
    // 0x337c18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x337c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337c1c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x337c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x337c20: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337C20u;
    SET_GPR_U32(ctx, 31, 0x337C28u);
    ctx->pc = 0x337C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C20u;
    // 0x337c24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337C20u, 0x337C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C28u;
label_337c28:
    // 0x337c28: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x337C28u;
    {
        const bool branch_taken_0x337c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337c28) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337C30u;
label_337c30:
    // 0x337c30: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x337C30u;
    SET_GPR_U32(ctx, 31, 0x337C38u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x337C30u, 0x337C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C38u;
label_337c38:
    // 0x337c38: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x337C38u;
    SET_GPR_U32(ctx, 31, 0x337C40u);
    ctx->pc = 0x337C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C38u;
    // 0x337c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x337C38u, 0x337C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C40u;
label_337c40:
    // 0x337c40: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x337c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x337c44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x337c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c48: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x337C48u;
    SET_GPR_U32(ctx, 31, 0x337C50u);
    ctx->pc = 0x337C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C48u;
    // 0x337c4c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x337C48u, 0x337C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C50u;
label_337c50:
    // 0x337c50: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x337c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x337c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x337c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c58: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x337C58u;
    SET_GPR_U32(ctx, 31, 0x337C60u);
    ctx->pc = 0x337C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C58u;
    // 0x337c5c: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x337C58u, 0x337C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C60u;
label_337c60:
    // 0x337c60: 0xc048bde  jal         func_122F78
    ctx->pc = 0x337C60u;
    SET_GPR_U32(ctx, 31, 0x337C68u);
    ctx->pc = 0x337C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C60u;
    // 0x337c64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x337C60u, 0x337C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C68u;
label_337c68:
    // 0x337c68: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x337C68u;
    {
        const bool branch_taken_0x337c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337c68) {
            ctx->pc = 0x337C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337C68u;
            // 0x337c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337C8Cu;
            goto label_337c8c;
        }
    }
    ctx->pc = 0x337C70u;
    // 0x337c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c78: 0x24060a00  addiu       $a2, $zero, 0xA00
    ctx->pc = 0x337c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x337c7c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337C7Cu;
    SET_GPR_U32(ctx, 31, 0x337C84u);
    ctx->pc = 0x337C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C7Cu;
    // 0x337c80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337C7Cu, 0x337C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C84u;
label_337c84:
    // 0x337c84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x337C84u;
    {
        const bool branch_taken_0x337c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337c84) {
            ctx->pc = 0x337C9Cu;
            goto label_337c9c;
        }
    }
    ctx->pc = 0x337C8Cu;
label_337c8c:
    // 0x337c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c90: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x337c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x337c94: 0xc05a888  jal         func_16A220
    ctx->pc = 0x337C94u;
    SET_GPR_U32(ctx, 31, 0x337C9Cu);
    ctx->pc = 0x337C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C94u;
    // 0x337c98: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x337C94u, 0x337C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C9Cu;
label_337c9c:
    // 0x337c9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x337c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_337ca0:
    // 0x337ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x337CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CA8u;
        // 0x337cac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337CB0u;
}
