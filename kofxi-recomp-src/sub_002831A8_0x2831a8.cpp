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

// Function: sub_002831A8
// Address: 0x2831a8 - 0x283330
void sub_002831A8_0x2831a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002831A8_0x2831a8");
#endif

    switch (ctx->pc) {
        case 0x2831a8u: goto label_2831a8;
        case 0x2831acu: goto label_2831ac;
        case 0x2831b0u: goto label_2831b0;
        case 0x2831b4u: goto label_2831b4;
        case 0x2831b8u: goto label_2831b8;
        case 0x2831bcu: goto label_2831bc;
        case 0x2831c0u: goto label_2831c0;
        case 0x2831c4u: goto label_2831c4;
        case 0x2831c8u: goto label_2831c8;
        case 0x2831ccu: goto label_2831cc;
        case 0x2831d0u: goto label_2831d0;
        case 0x2831d4u: goto label_2831d4;
        case 0x2831d8u: goto label_2831d8;
        case 0x2831dcu: goto label_2831dc;
        case 0x2831e0u: goto label_2831e0;
        case 0x2831e4u: goto label_2831e4;
        case 0x2831e8u: goto label_2831e8;
        case 0x2831ecu: goto label_2831ec;
        case 0x2831f0u: goto label_2831f0;
        case 0x2831f4u: goto label_2831f4;
        case 0x2831f8u: goto label_2831f8;
        case 0x2831fcu: goto label_2831fc;
        case 0x283200u: goto label_283200;
        case 0x283204u: goto label_283204;
        case 0x283208u: goto label_283208;
        case 0x28320cu: goto label_28320c;
        case 0x283210u: goto label_283210;
        case 0x283214u: goto label_283214;
        case 0x283218u: goto label_283218;
        case 0x28321cu: goto label_28321c;
        case 0x283220u: goto label_283220;
        case 0x283224u: goto label_283224;
        case 0x283228u: goto label_283228;
        case 0x28322cu: goto label_28322c;
        case 0x283230u: goto label_283230;
        case 0x283234u: goto label_283234;
        case 0x283238u: goto label_283238;
        case 0x28323cu: goto label_28323c;
        case 0x283240u: goto label_283240;
        case 0x283244u: goto label_283244;
        case 0x283248u: goto label_283248;
        case 0x28324cu: goto label_28324c;
        case 0x283250u: goto label_283250;
        case 0x283254u: goto label_283254;
        case 0x283258u: goto label_283258;
        case 0x28325cu: goto label_28325c;
        case 0x283260u: goto label_283260;
        case 0x283264u: goto label_283264;
        case 0x283268u: goto label_283268;
        case 0x28326cu: goto label_28326c;
        case 0x283270u: goto label_283270;
        case 0x283274u: goto label_283274;
        case 0x283278u: goto label_283278;
        case 0x28327cu: goto label_28327c;
        case 0x283280u: goto label_283280;
        case 0x283284u: goto label_283284;
        case 0x283288u: goto label_283288;
        case 0x28328cu: goto label_28328c;
        case 0x283290u: goto label_283290;
        case 0x283294u: goto label_283294;
        case 0x283298u: goto label_283298;
        case 0x28329cu: goto label_28329c;
        case 0x2832a0u: goto label_2832a0;
        case 0x2832a4u: goto label_2832a4;
        case 0x2832a8u: goto label_2832a8;
        case 0x2832acu: goto label_2832ac;
        case 0x2832b0u: goto label_2832b0;
        case 0x2832b4u: goto label_2832b4;
        case 0x2832b8u: goto label_2832b8;
        case 0x2832bcu: goto label_2832bc;
        case 0x2832c0u: goto label_2832c0;
        case 0x2832c4u: goto label_2832c4;
        case 0x2832c8u: goto label_2832c8;
        case 0x2832ccu: goto label_2832cc;
        case 0x2832d0u: goto label_2832d0;
        case 0x2832d4u: goto label_2832d4;
        case 0x2832d8u: goto label_2832d8;
        case 0x2832dcu: goto label_2832dc;
        case 0x2832e0u: goto label_2832e0;
        case 0x2832e4u: goto label_2832e4;
        case 0x2832e8u: goto label_2832e8;
        case 0x2832ecu: goto label_2832ec;
        case 0x2832f0u: goto label_2832f0;
        case 0x2832f4u: goto label_2832f4;
        case 0x2832f8u: goto label_2832f8;
        case 0x2832fcu: goto label_2832fc;
        case 0x283300u: goto label_283300;
        case 0x283304u: goto label_283304;
        case 0x283308u: goto label_283308;
        case 0x28330cu: goto label_28330c;
        case 0x283310u: goto label_283310;
        case 0x283314u: goto label_283314;
        case 0x283318u: goto label_283318;
        case 0x28331cu: goto label_28331c;
        case 0x283320u: goto label_283320;
        case 0x283324u: goto label_283324;
        case 0x283328u: goto label_283328;
        case 0x28332cu: goto label_28332c;
        default: break;
    }

    ctx->pc = 0x2831a8u;

label_2831a8:
    // 0x2831a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2831a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2831ac:
    // 0x2831ac: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2831acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2831b0:
    // 0x2831b0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2831b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2831b4:
    // 0x2831b4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2831b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2831b8:
    // 0x2831b8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2831b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2831bc:
    // 0x2831bc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2831bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2831c0:
    // 0x2831c0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2831c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2831c4:
    // 0x2831c4: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2831c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2831c8:
    // 0x2831c8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2831c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2831cc:
    // 0x2831cc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2831ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2831d0:
    // 0x2831d0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2831d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2831d4:
    // 0x2831d4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2831d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2831d8:
    // 0x2831d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2831d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2831dc:
    // 0x2831dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2831dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2831e0:
    // 0x2831e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2831e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2831e4:
    // 0x2831e4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2831e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2831e8:
    // 0x2831e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2831e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2831ec:
    // 0x2831ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2831ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2831f0:
    // 0x2831f0: 0xc0a5c6c  jal         func_2971B0
label_2831f4:
    if (ctx->pc == 0x2831F4u) {
        ctx->pc = 0x2831F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831F0u;
        // 0x2831f4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2831F8u;
        goto label_2831f8;
    }
    ctx->pc = 0x2831F0u;
    SET_GPR_U32(ctx, 31, 0x2831F8u);
    ctx->pc = 0x2831F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2831F0u;
    // 0x2831f4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2971B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2971B0u, 0x2831F0u, 0x2831F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2831F8u;
label_2831f8:
    // 0x2831f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2831f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2831fc:
    // 0x2831fc: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_283200:
    if (ctx->pc == 0x283200u) {
        ctx->pc = 0x283200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831FCu;
        // 0x283200: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283204u;
        goto label_283204;
    }
    ctx->pc = 0x2831FCu;
    {
        const bool branch_taken_0x2831fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x283200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831FCu;
        // 0x283200: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831fc) {
            ctx->pc = 0x283210u;
            goto label_283210;
        }
    }
    ctx->pc = 0x283204u;
label_283204:
    // 0x283204: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x283204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_283208:
    // 0x283208: 0x10000011  b           . + 4 + (0x11 << 2)
label_28320c:
    if (ctx->pc == 0x28320Cu) {
        ctx->pc = 0x28320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283208u;
        // 0x28320c: 0x2406008d  addiu       $a2, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283210u;
        goto label_283210;
    }
    ctx->pc = 0x283208u;
    {
        const bool branch_taken_0x283208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283208u;
        // 0x28320c: 0x2406008d  addiu       $a2, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283208) {
            ctx->pc = 0x283250u;
            goto label_283250;
        }
    }
    ctx->pc = 0x283210u;
label_283210:
    // 0x283210: 0xc0a5b7e  jal         func_296DF8
label_283214:
    if (ctx->pc == 0x283214u) {
        ctx->pc = 0x283218u;
        goto label_283218;
    }
    ctx->pc = 0x283210u;
    SET_GPR_U32(ctx, 31, 0x283218u);
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x283210u, 0x283218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283218u;
label_283218:
    // 0x283218: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x283218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28321c:
    // 0x28321c: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_283220:
    if (ctx->pc == 0x283220u) {
        ctx->pc = 0x283220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28321Cu;
        // 0x283220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283224u;
        goto label_283224;
    }
    ctx->pc = 0x28321Cu;
    {
        const bool branch_taken_0x28321c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x283220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28321Cu;
        // 0x283220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28321c) {
            ctx->pc = 0x2832D8u;
            goto label_2832d8;
        }
    }
    ctx->pc = 0x283224u;
label_283224:
    // 0x283224: 0x2a0f809  jalr        $s5
label_283228:
    if (ctx->pc == 0x283228u) {
        ctx->pc = 0x283228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283224u;
        // 0x283228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28322Cu;
        goto label_28322c;
    }
    ctx->pc = 0x283224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x28322Cu);
        ctx->pc = 0x283228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283224u;
        // 0x283228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283224u, 0x28322Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28322Cu;
label_28322c:
    // 0x28322c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28322cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283230:
    // 0x283230: 0xc0a8bf6  jal         func_2A2FD8
label_283234:
    if (ctx->pc == 0x283234u) {
        ctx->pc = 0x283234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283230u;
        // 0x283234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283238u;
        goto label_283238;
    }
    ctx->pc = 0x283230u;
    SET_GPR_U32(ctx, 31, 0x283238u);
    ctx->pc = 0x283234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283230u;
    // 0x283234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x283230u, 0x283238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283238u;
label_283238:
    // 0x283238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x283238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28323c:
    // 0x28323c: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_283240:
    if (ctx->pc == 0x283240u) {
        ctx->pc = 0x283240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28323Cu;
        // 0x283240: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283244u;
        goto label_283244;
    }
    ctx->pc = 0x28323Cu;
    {
        const bool branch_taken_0x28323c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x283240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28323Cu;
        // 0x283240: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28323c) {
            ctx->pc = 0x283264u;
            goto label_283264;
        }
    }
    ctx->pc = 0x283244u;
label_283244:
    // 0x283244: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x283244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_283248:
    // 0x283248: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x283248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_28324c:
    // 0x28324c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x28324cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_283250:
    // 0x283250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x283250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283254:
    // 0x283254: 0xc0a5648  jal         func_295920
label_283258:
    if (ctx->pc == 0x283258u) {
        ctx->pc = 0x283258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283254u;
        // 0x283258: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28325Cu;
        goto label_28325c;
    }
    ctx->pc = 0x283254u;
    SET_GPR_U32(ctx, 31, 0x28325Cu);
    ctx->pc = 0x283258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283254u;
    // 0x283258: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x283254u, 0x28325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28325Cu;
label_28325c:
    // 0x28325c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_283260:
    if (ctx->pc == 0x283260u) {
        ctx->pc = 0x283264u;
        goto label_283264;
    }
    ctx->pc = 0x28325Cu;
    {
        const bool branch_taken_0x28325c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28325c) {
            ctx->pc = 0x2832D8u;
            goto label_2832d8;
        }
    }
    ctx->pc = 0x283264u;
label_283264:
    // 0x283264: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x283264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_283268:
    // 0x283268: 0x2a0f809  jalr        $s5
label_28326c:
    if (ctx->pc == 0x28326Cu) {
        ctx->pc = 0x28326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283268u;
        // 0x28326c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283270u;
        goto label_283270;
    }
    ctx->pc = 0x283268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x283270u);
        ctx->pc = 0x28326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283268u;
        // 0x28326c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283268u, 0x283270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283270u;
label_283270:
    // 0x283270: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x283270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283274:
    // 0x283274: 0xc0a5102  jal         func_294408
label_283278:
    if (ctx->pc == 0x283278u) {
        ctx->pc = 0x283278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283274u;
        // 0x283278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28327Cu;
        goto label_28327c;
    }
    ctx->pc = 0x283274u;
    SET_GPR_U32(ctx, 31, 0x28327Cu);
    ctx->pc = 0x283278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283274u;
    // 0x283278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x283274u, 0x28327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28327Cu;
label_28327c:
    // 0x28327c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_283280:
    if (ctx->pc == 0x283280u) {
        ctx->pc = 0x283280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28327Cu;
        // 0x283280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283284u;
        goto label_283284;
    }
    ctx->pc = 0x28327Cu;
    {
        const bool branch_taken_0x28327c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28327Cu;
        // 0x283280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28327c) {
            ctx->pc = 0x2832D8u;
            goto label_2832d8;
        }
    }
    ctx->pc = 0x283284u;
label_283284:
    // 0x283284: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x283284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_283288:
    // 0x283288: 0xc0a513c  jal         func_2944F0
label_28328c:
    if (ctx->pc == 0x28328Cu) {
        ctx->pc = 0x28328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283288u;
        // 0x28328c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283290u;
        goto label_283290;
    }
    ctx->pc = 0x283288u;
    SET_GPR_U32(ctx, 31, 0x283290u);
    ctx->pc = 0x28328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283288u;
    // 0x28328c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x283288u, 0x283290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283290u;
label_283290:
    // 0x283290: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x283290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_283294:
    // 0x283294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_283298:
    // 0x283298: 0xc049cb6  jal         func_1272D8
label_28329c:
    if (ctx->pc == 0x28329Cu) {
        ctx->pc = 0x28329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283298u;
        // 0x28329c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2832A0u;
        goto label_2832a0;
    }
    ctx->pc = 0x283298u;
    SET_GPR_U32(ctx, 31, 0x2832A0u);
    ctx->pc = 0x28329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283298u;
    // 0x28329c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x283298u, 0x2832A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832A0u;
label_2832a0:
    // 0x2832a0: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x2832a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2832a4:
    // 0x2832a4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2832a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2832a8:
    // 0x2832a8: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x2832a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2832ac:
    // 0x2832ac: 0xc0a73f4  jal         func_29CFD0
label_2832b0:
    if (ctx->pc == 0x2832B0u) {
        ctx->pc = 0x2832B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832ACu;
        // 0x2832b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2832B4u;
        goto label_2832b4;
    }
    ctx->pc = 0x2832ACu;
    SET_GPR_U32(ctx, 31, 0x2832B4u);
    ctx->pc = 0x2832B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2832ACu;
    // 0x2832b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CFD0u, 0x2832ACu, 0x2832B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832B4u;
label_2832b4:
    // 0x2832b4: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_2832b8:
    if (ctx->pc == 0x2832B8u) {
        ctx->pc = 0x2832B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832B4u;
        // 0x2832b8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2832BCu;
        goto label_2832bc;
    }
    ctx->pc = 0x2832B4u;
    {
        const bool branch_taken_0x2832b4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2832B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832B4u;
        // 0x2832b8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832b4) {
            ctx->pc = 0x2832D8u;
            goto label_2832d8;
        }
    }
    ctx->pc = 0x2832BCu;
label_2832bc:
    // 0x2832bc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2832bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2832c0:
    // 0x2832c0: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x2832c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_2832c4:
    // 0x2832c4: 0x24060806  addiu       $a2, $zero, 0x806
    ctx->pc = 0x2832c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
label_2832c8:
    // 0x2832c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2832c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2832cc:
    // 0x2832cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2832ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2832d0:
    // 0x2832d0: 0xc0a5648  jal         func_295920
label_2832d4:
    if (ctx->pc == 0x2832D4u) {
        ctx->pc = 0x2832D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832D0u;
        // 0x2832d4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2832D8u;
        goto label_2832d8;
    }
    ctx->pc = 0x2832D0u;
    SET_GPR_U32(ctx, 31, 0x2832D8u);
    ctx->pc = 0x2832D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2832D0u;
    // 0x2832d4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2832D0u, 0x2832D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832D8u;
label_2832d8:
    // 0x2832d8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_2832dc:
    if (ctx->pc == 0x2832DCu) {
        ctx->pc = 0x2832E0u;
        goto label_2832e0;
    }
    ctx->pc = 0x2832D8u;
    {
        const bool branch_taken_0x2832d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2832d8) {
            ctx->pc = 0x2832E8u;
            goto label_2832e8;
        }
    }
    ctx->pc = 0x2832E0u;
label_2832e0:
    // 0x2832e0: 0xc0a8c0a  jal         func_2A3028
label_2832e4:
    if (ctx->pc == 0x2832E4u) {
        ctx->pc = 0x2832E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832E0u;
        // 0x2832e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2832E8u;
        goto label_2832e8;
    }
    ctx->pc = 0x2832E0u;
    SET_GPR_U32(ctx, 31, 0x2832E8u);
    ctx->pc = 0x2832E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2832E0u;
    // 0x2832e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2832E0u, 0x2832E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832E8u;
label_2832e8:
    // 0x2832e8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2832ec:
    if (ctx->pc == 0x2832ECu) {
        ctx->pc = 0x2832ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832E8u;
        // 0x2832ec: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2832F0u;
        goto label_2832f0;
    }
    ctx->pc = 0x2832E8u;
    {
        const bool branch_taken_0x2832e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2832ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832E8u;
        // 0x2832ec: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832e8) {
            ctx->pc = 0x2832FCu;
            goto label_2832fc;
        }
    }
    ctx->pc = 0x2832F0u;
label_2832f0:
    // 0x2832f0: 0xc0a5b9c  jal         func_296E70
label_2832f4:
    if (ctx->pc == 0x2832F4u) {
        ctx->pc = 0x2832F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2832F0u;
        // 0x2832f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2832F8u;
        goto label_2832f8;
    }
    ctx->pc = 0x2832F0u;
    SET_GPR_U32(ctx, 31, 0x2832F8u);
    ctx->pc = 0x2832F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2832F0u;
    // 0x2832f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x2832F0u, 0x2832F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2832F8u;
label_2832f8:
    // 0x2832f8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2832f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2832fc:
    // 0x2832fc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2832fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_283300:
    // 0x283300: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x283300u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_283304:
    // 0x283304: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x283304u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_283308:
    // 0x283308: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x283308u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28330c:
    // 0x28330c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x28330cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_283310:
    // 0x283310: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x283310u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_283314:
    // 0x283314: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x283314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_283318:
    // 0x283318: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x283318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28331c:
    // 0x28331c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28331cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_283320:
    // 0x283320: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x283320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_283324:
    // 0x283324: 0x3e00008  jr          $ra
label_283328:
    if (ctx->pc == 0x283328u) {
        ctx->pc = 0x283328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283324u;
        // 0x283328: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28332Cu;
        goto label_28332c;
    }
    ctx->pc = 0x283324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283324u;
        // 0x283328: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28332Cu;
label_28332c:
    // 0x28332c: 0x0  nop
    ctx->pc = 0x28332cu;
    // NOP
    if (ctx->pc == 0x28332cu) { ctx->pc = 0x283330u; }
}
