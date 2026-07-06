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

// Function: sub_00307170
// Address: 0x307170 - 0x307350
void sub_00307170_0x307170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307170_0x307170");
#endif

    switch (ctx->pc) {
        case 0x307190u: goto label_307190;
        case 0x3071acu: goto label_3071ac;
        case 0x3071b4u: goto label_3071b4;
        case 0x3071d0u: goto label_3071d0;
        case 0x3071d8u: goto label_3071d8;
        case 0x3071e0u: goto label_3071e0;
        case 0x30720cu: goto label_30720c;
        case 0x307214u: goto label_307214;
        case 0x307238u: goto label_307238;
        case 0x30724cu: goto label_30724c;
        case 0x307254u: goto label_307254;
        case 0x30728cu: goto label_30728c;
        case 0x307294u: goto label_307294;
        case 0x3072b8u: goto label_3072b8;
        case 0x3072ccu: goto label_3072cc;
        case 0x3072d4u: goto label_3072d4;
        case 0x3072ecu: goto label_3072ec;
        case 0x307310u: goto label_307310;
        case 0x307324u: goto label_307324;
        case 0x307338u: goto label_307338;
        default: break;
    }

    ctx->pc = 0x307170u;

    // 0x307170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307174: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x307174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x307178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30717c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30717cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x307180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x307184: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x307184u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x307188: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x307188u;
    SET_GPR_U32(ctx, 31, 0x307190u);
    ctx->pc = 0x30718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307188u;
    // 0x30718c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x307188u, 0x307190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307190u;
label_307190:
    // 0x307190: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x307190u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x307194: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x307194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x307198: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x307198u;
    {
        const bool branch_taken_0x307198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307198) {
            ctx->pc = 0x30719Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307198u;
            // 0x30719c: 0x32020080  andi        $v0, $s0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3071BCu;
            goto label_3071bc;
        }
    }
    ctx->pc = 0x3071A0u;
    // 0x3071a0: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x3071a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x3071a4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3071A4u;
    SET_GPR_U32(ctx, 31, 0x3071ACu);
    ctx->pc = 0x3071A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3071A4u;
    // 0x3071a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3071A4u, 0x3071ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071ACu;
label_3071ac:
    // 0x3071ac: 0xc0c4850  jal         func_312140
    ctx->pc = 0x3071ACu;
    SET_GPR_U32(ctx, 31, 0x3071B4u);
    ctx->pc = 0x312140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312140u, 0x3071ACu, 0x3071B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071B4u;
label_3071b4:
    // 0x3071b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3071B4u;
    {
        const bool branch_taken_0x3071b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3071b4) {
            ctx->pc = 0x3071D8u;
            goto label_3071d8;
        }
    }
    ctx->pc = 0x3071BCu;
label_3071bc:
    // 0x3071bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3071BCu;
    {
        const bool branch_taken_0x3071bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3071bc) {
            ctx->pc = 0x3071D8u;
            goto label_3071d8;
        }
    }
    ctx->pc = 0x3071C4u;
    // 0x3071c4: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x3071c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x3071c8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3071C8u;
    SET_GPR_U32(ctx, 31, 0x3071D0u);
    ctx->pc = 0x3071CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3071C8u;
    // 0x3071cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3071C8u, 0x3071D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071D0u;
label_3071d0:
    // 0x3071d0: 0xc0c486c  jal         func_3121B0
    ctx->pc = 0x3071D0u;
    SET_GPR_U32(ctx, 31, 0x3071D8u);
    ctx->pc = 0x3121B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3121B0u, 0x3071D0u, 0x3071D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071D8u;
label_3071d8:
    // 0x3071d8: 0xc0c48a8  jal         func_3122A0
    ctx->pc = 0x3071D8u;
    SET_GPR_U32(ctx, 31, 0x3071E0u);
    ctx->pc = 0x3122A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3122A0u, 0x3071D8u, 0x3071E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071E0u;
label_3071e0:
    // 0x3071e0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3071e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3071e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3071e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3071e8: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x3071e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x3071ec: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3071ECu;
    {
        const bool branch_taken_0x3071ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3071ec) {
            ctx->pc = 0x30725Cu;
            goto label_30725c;
        }
    }
    ctx->pc = 0x3071F4u;
    // 0x3071f4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3071f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3071f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3071F8u;
    {
        const bool branch_taken_0x3071f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3071f8) {
            ctx->pc = 0x30721Cu;
            goto label_30721c;
        }
    }
    ctx->pc = 0x307200u;
    // 0x307200: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x307200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x307204: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x307204u;
    SET_GPR_U32(ctx, 31, 0x30720Cu);
    ctx->pc = 0x307208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307204u;
    // 0x307208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x307204u, 0x30720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30720Cu;
label_30720c:
    // 0x30720c: 0xc0c1638  jal         func_3058E0
    ctx->pc = 0x30720Cu;
    SET_GPR_U32(ctx, 31, 0x307214u);
    ctx->pc = 0x3058E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058E0u, 0x30720Cu, 0x307214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307214u;
label_307214:
    // 0x307214: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x307214u;
    {
        const bool branch_taken_0x307214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307214u;
        // 0x307218: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307214) {
            ctx->pc = 0x30733Cu;
            goto label_30733c;
        }
    }
    ctx->pc = 0x30721Cu;
label_30721c:
    // 0x30721c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30721cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x307220: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x307220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x307224: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x307224u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x307228: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30722c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x30722cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x307230: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x307230u;
    SET_GPR_U32(ctx, 31, 0x307238u);
    ctx->pc = 0x307234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307230u;
    // 0x307234: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x307230u, 0x307238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307238u;
label_307238:
    // 0x307238: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x307238u;
    {
        const bool branch_taken_0x307238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307238) {
            ctx->pc = 0x307338u;
            goto label_307338;
        }
    }
    ctx->pc = 0x307240u;
    // 0x307240: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x307240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x307244: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x307244u;
    SET_GPR_U32(ctx, 31, 0x30724Cu);
    ctx->pc = 0x307248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307244u;
    // 0x307248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x307244u, 0x30724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30724Cu;
label_30724c:
    // 0x30724c: 0xc0c1638  jal         func_3058E0
    ctx->pc = 0x30724Cu;
    SET_GPR_U32(ctx, 31, 0x307254u);
    ctx->pc = 0x3058E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058E0u, 0x30724Cu, 0x307254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307254u;
label_307254:
    // 0x307254: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x307254u;
    {
        const bool branch_taken_0x307254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307254) {
            ctx->pc = 0x307338u;
            goto label_307338;
        }
    }
    ctx->pc = 0x30725Cu;
label_30725c:
    // 0x30725c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30725cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x307260: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x307260u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x307264: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x307264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x307268: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x307268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30726c: 0x5020001b  beql        $at, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x30726Cu;
    {
        const bool branch_taken_0x30726c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30726c) {
            ctx->pc = 0x307270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30726Cu;
            // 0x307270: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3072DCu;
            goto label_3072dc;
        }
    }
    ctx->pc = 0x307274u;
    // 0x307274: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x307274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x307278: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x307278u;
    {
        const bool branch_taken_0x307278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307278) {
            ctx->pc = 0x30729Cu;
            goto label_30729c;
        }
    }
    ctx->pc = 0x307280u;
    // 0x307280: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x307280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x307284: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x307284u;
    SET_GPR_U32(ctx, 31, 0x30728Cu);
    ctx->pc = 0x307288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307284u;
    // 0x307288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x307284u, 0x30728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30728Cu;
label_30728c:
    // 0x30728c: 0xc0c1638  jal         func_3058E0
    ctx->pc = 0x30728Cu;
    SET_GPR_U32(ctx, 31, 0x307294u);
    ctx->pc = 0x3058E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058E0u, 0x30728Cu, 0x307294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307294u;
label_307294:
    // 0x307294: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x307294u;
    {
        const bool branch_taken_0x307294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307294) {
            ctx->pc = 0x307338u;
            goto label_307338;
        }
    }
    ctx->pc = 0x30729Cu;
label_30729c:
    // 0x30729c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3072a0: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x3072a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3072a4: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x3072a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x3072a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3072a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3072ac: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3072acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3072b0: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x3072B0u;
    SET_GPR_U32(ctx, 31, 0x3072B8u);
    ctx->pc = 0x3072B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072B0u;
    // 0x3072b4: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x3072B0u, 0x3072B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072B8u;
label_3072b8:
    // 0x3072b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3072B8u;
    {
        const bool branch_taken_0x3072b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3072b8) {
            ctx->pc = 0x307338u;
            goto label_307338;
        }
    }
    ctx->pc = 0x3072C0u;
    // 0x3072c0: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x3072c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x3072c4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3072C4u;
    SET_GPR_U32(ctx, 31, 0x3072CCu);
    ctx->pc = 0x3072C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072C4u;
    // 0x3072c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3072C4u, 0x3072CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072CCu;
label_3072cc:
    // 0x3072cc: 0xc0c1638  jal         func_3058E0
    ctx->pc = 0x3072CCu;
    SET_GPR_U32(ctx, 31, 0x3072D4u);
    ctx->pc = 0x3058E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058E0u, 0x3072CCu, 0x3072D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072D4u;
label_3072d4:
    // 0x3072d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3072D4u;
    {
        const bool branch_taken_0x3072d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3072d4) {
            ctx->pc = 0x307338u;
            goto label_307338;
        }
    }
    ctx->pc = 0x3072DCu;
label_3072dc:
    // 0x3072dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3072DCu;
    {
        const bool branch_taken_0x3072dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3072dc) {
            ctx->pc = 0x3072F4u;
            goto label_3072f4;
        }
    }
    ctx->pc = 0x3072E4u;
    // 0x3072e4: 0xc0c1650  jal         func_305940
    ctx->pc = 0x3072E4u;
    SET_GPR_U32(ctx, 31, 0x3072ECu);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x3072E4u, 0x3072ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072ECu;
label_3072ec:
    // 0x3072ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3072ECu;
    {
        const bool branch_taken_0x3072ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3072ec) {
            ctx->pc = 0x307338u;
            goto label_307338;
        }
    }
    ctx->pc = 0x3072F4u;
label_3072f4:
    // 0x3072f4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3072f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3072f8: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x3072f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3072fc: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x3072fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x307300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x307304: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x307304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x307308: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x307308u;
    SET_GPR_U32(ctx, 31, 0x307310u);
    ctx->pc = 0x30730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307308u;
    // 0x30730c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x307308u, 0x307310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307310u;
label_307310:
    // 0x307310: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x307310u;
    {
        const bool branch_taken_0x307310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307310) {
            ctx->pc = 0x307338u;
            goto label_307338;
        }
    }
    ctx->pc = 0x307318u;
    // 0x307318: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x307318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x30731c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x30731Cu;
    SET_GPR_U32(ctx, 31, 0x307324u);
    ctx->pc = 0x307320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30731Cu;
    // 0x307320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x30731Cu, 0x307324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307324u;
label_307324:
    // 0x307324: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x307324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x307328: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x307328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x30732c: 0x24846c90  addiu       $a0, $a0, 0x6C90
    ctx->pc = 0x30732cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27792));
    // 0x307330: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x307330u;
    SET_GPR_U32(ctx, 31, 0x307338u);
    ctx->pc = 0x307334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307330u;
    // 0x307334: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x307330u, 0x307338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307338u;
label_307338:
    // 0x307338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30733c:
    // 0x30733c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30733cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307340: 0x3e00008  jr          $ra
    ctx->pc = 0x307340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307340u;
        // 0x307344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307348u;
    // 0x307348: 0x0  nop
    ctx->pc = 0x307348u;
    // NOP
    // 0x30734c: 0x0  nop
    ctx->pc = 0x30734cu;
    // NOP
}
