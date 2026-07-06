#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188220
// Address: 0x188220 - 0x188680
void sub_00188220_0x188220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188220_0x188220");
#endif

    switch (ctx->pc) {
        case 0x188238u: goto label_188238;
        case 0x188290u: goto label_188290;
        case 0x1882c0u: goto label_1882c0;
        case 0x1882f0u: goto label_1882f0;
        case 0x188324u: goto label_188324;
        case 0x188360u: goto label_188360;
        case 0x188390u: goto label_188390;
        case 0x1883c0u: goto label_1883c0;
        case 0x188404u: goto label_188404;
        case 0x188430u: goto label_188430;
        case 0x18848cu: goto label_18848c;
        case 0x1884c0u: goto label_1884c0;
        case 0x1884f8u: goto label_1884f8;
        case 0x188568u: goto label_188568;
        case 0x188574u: goto label_188574;
        case 0x188580u: goto label_188580;
        case 0x1885c8u: goto label_1885c8;
        case 0x1885d4u: goto label_1885d4;
        case 0x18861cu: goto label_18861c;
        case 0x188648u: goto label_188648;
        default: break;
    }

    ctx->pc = 0x188220u;

    // 0x188220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x188228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18822c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18822cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188230: 0xc0627b0  jal         func_189EC0
    ctx->pc = 0x188230u;
    SET_GPR_U32(ctx, 31, 0x188238u);
    ctx->pc = 0x188234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188230u;
            // 0x188234: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189EC0u;
    if (runtime->hasFunction(0x189EC0u)) {
        auto targetFn = runtime->lookupFunction(0x189EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188238u; }
        if (ctx->pc != 0x188238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189EC0_0x189ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188238u; }
        if (ctx->pc != 0x188238u) { return; }
    }
    ctx->pc = 0x188238u;
label_188238:
    // 0x188238: 0x960400ec  lhu         $a0, 0xEC($s0)
    ctx->pc = 0x188238u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x18823c: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x18823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x188240: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188240u;
    {
        const bool branch_taken_0x188240 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188240) {
            ctx->pc = 0x188244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188240u;
            // 0x188244: 0x90430016  lbu         $v1, 0x16($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188250u;
            goto label_188250;
        }
    }
    ctx->pc = 0x188248u;
    // 0x188248: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x188248u;
    {
        const bool branch_taken_0x188248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188248u;
            // 0x18824c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188248) {
            ctx->pc = 0x188274u;
            goto label_188274;
        }
    }
    ctx->pc = 0x188250u;
label_188250:
    // 0x188250: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x188250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x188254: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x188254u;
    {
        const bool branch_taken_0x188254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188254) {
            ctx->pc = 0x188258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188254u;
            // 0x188258: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188274u;
            goto label_188274;
        }
    }
    ctx->pc = 0x18825Cu;
    // 0x18825c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x18825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x188260: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188260u;
    {
        const bool branch_taken_0x188260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188260) {
            ctx->pc = 0x188270u;
            goto label_188270;
        }
    }
    ctx->pc = 0x188268u;
    // 0x188268: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188268u;
    {
        const bool branch_taken_0x188268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188268u;
            // 0x18826c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188268) {
            ctx->pc = 0x188274u;
            goto label_188274;
        }
    }
    ctx->pc = 0x188270u;
label_188270:
    // 0x188270: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_188274:
    // 0x188274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18827c: 0x3e00008  jr          $ra
    ctx->pc = 0x18827Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18827Cu;
            // 0x188280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188284u;
    // 0x188284: 0x0  nop
    ctx->pc = 0x188284u;
    // NOP
    // 0x188288: 0x0  nop
    ctx->pc = 0x188288u;
    // NOP
    // 0x18828c: 0x0  nop
    ctx->pc = 0x18828cu;
    // NOP
label_188290:
    // 0x188290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188294: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18829c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x18829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1882a0: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x1882a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1882a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1882a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1882A8u;
    {
        const bool branch_taken_0x1882a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882a8) {
            ctx->pc = 0x1882B8u;
            goto label_1882b8;
        }
    }
    ctx->pc = 0x1882B0u;
    // 0x1882b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1882B0u;
    {
        const bool branch_taken_0x1882b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1882B0u;
            // 0x1882b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882b0) {
            ctx->pc = 0x1882DCu;
            goto label_1882dc;
        }
    }
    ctx->pc = 0x1882B8u;
label_1882b8:
    // 0x1882b8: 0xc05a7a8  jal         func_169EA0
    ctx->pc = 0x1882B8u;
    SET_GPR_U32(ctx, 31, 0x1882C0u);
    ctx->pc = 0x169EA0u;
    if (runtime->hasFunction(0x169EA0u)) {
        auto targetFn = runtime->lookupFunction(0x169EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882C0u; }
        if (ctx->pc != 0x1882C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EA0_0x169ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1882C0u; }
        if (ctx->pc != 0x1882C0u) { return; }
    }
    ctx->pc = 0x1882C0u;
label_1882c0:
    // 0x1882c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1882c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1882c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1882c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1882c8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1882C8u;
    {
        const bool branch_taken_0x1882c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1882c8) {
            ctx->pc = 0x1882CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1882C8u;
            // 0x1882cc: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1882D8u;
            goto label_1882d8;
        }
    }
    ctx->pc = 0x1882D0u;
    // 0x1882d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1882D0u;
    {
        const bool branch_taken_0x1882d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1882D0u;
            // 0x1882d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882d0) {
            ctx->pc = 0x1882DCu;
            goto label_1882dc;
        }
    }
    ctx->pc = 0x1882D8u;
label_1882d8:
    // 0x1882d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1882d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1882dc:
    // 0x1882dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1882dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1882e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1882E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1882E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1882E0u;
            // 0x1882e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1882E8u;
    // 0x1882e8: 0x0  nop
    ctx->pc = 0x1882e8u;
    // NOP
    // 0x1882ec: 0x0  nop
    ctx->pc = 0x1882ecu;
    // NOP
label_1882f0:
    // 0x1882f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1882f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1882f4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1882f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1882f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1882f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1882fc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1882fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188304: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x188304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x188308: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18830c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18830Cu;
    {
        const bool branch_taken_0x18830c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18830Cu;
            // 0x188310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18830c) {
            ctx->pc = 0x18831Cu;
            goto label_18831c;
        }
    }
    ctx->pc = 0x188314u;
    // 0x188314: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x188314u;
    {
        const bool branch_taken_0x188314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188314u;
            // 0x188318: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188314) {
            ctx->pc = 0x18834Cu;
            goto label_18834c;
        }
    }
    ctx->pc = 0x18831Cu;
label_18831c:
    // 0x18831c: 0xc05a670  jal         func_1699C0
    ctx->pc = 0x18831Cu;
    SET_GPR_U32(ctx, 31, 0x188324u);
    ctx->pc = 0x1699C0u;
    if (runtime->hasFunction(0x1699C0u)) {
        auto targetFn = runtime->lookupFunction(0x1699C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188324u; }
        if (ctx->pc != 0x188324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001699C0_0x1699c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188324u; }
        if (ctx->pc != 0x188324u) { return; }
    }
    ctx->pc = 0x188324u;
label_188324:
    // 0x188324: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x188324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x188328: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x188328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18832c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18832Cu;
    {
        const bool branch_taken_0x18832c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18832c) {
            ctx->pc = 0x188330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18832Cu;
            // 0x188330: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18833Cu;
            goto label_18833c;
        }
    }
    ctx->pc = 0x188334u;
    // 0x188334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x188334u;
    {
        const bool branch_taken_0x188334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188334u;
            // 0x188338: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188334) {
            ctx->pc = 0x18834Cu;
            goto label_18834c;
        }
    }
    ctx->pc = 0x18833Cu;
label_18833c:
    // 0x18833c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188340: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x188340u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x188344: 0xa20300f6  sb          $v1, 0xF6($s0)
    ctx->pc = 0x188344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 3));
    // 0x188348: 0xa200057d  sb          $zero, 0x57D($s0)
    ctx->pc = 0x188348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1405), (uint8_t)GPR_U32(ctx, 0));
label_18834c:
    // 0x18834c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18834cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188354: 0x3e00008  jr          $ra
    ctx->pc = 0x188354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188354u;
            // 0x188358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18835Cu;
    // 0x18835c: 0x0  nop
    ctx->pc = 0x18835cu;
    // NOP
label_188360:
    // 0x188360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188364: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18836c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x18836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188370: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x188370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x188374: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188378: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188378u;
    {
        const bool branch_taken_0x188378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188378) {
            ctx->pc = 0x188388u;
            goto label_188388;
        }
    }
    ctx->pc = 0x188380u;
    // 0x188380: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x188380u;
    {
        const bool branch_taken_0x188380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188380u;
            // 0x188384: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188380) {
            ctx->pc = 0x1883ACu;
            goto label_1883ac;
        }
    }
    ctx->pc = 0x188388u;
label_188388:
    // 0x188388: 0xc05a384  jal         func_168E10
    ctx->pc = 0x188388u;
    SET_GPR_U32(ctx, 31, 0x188390u);
    ctx->pc = 0x168E10u;
    if (runtime->hasFunction(0x168E10u)) {
        auto targetFn = runtime->lookupFunction(0x168E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188390u; }
        if (ctx->pc != 0x188390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168E10_0x168e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188390u; }
        if (ctx->pc != 0x188390u) { return; }
    }
    ctx->pc = 0x188390u;
label_188390:
    // 0x188390: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x188390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x188394: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x188394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x188398: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188398u;
    {
        const bool branch_taken_0x188398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188398) {
            ctx->pc = 0x18839Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188398u;
            // 0x18839c: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1883A8u;
            goto label_1883a8;
        }
    }
    ctx->pc = 0x1883A0u;
    // 0x1883a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1883A0u;
    {
        const bool branch_taken_0x1883a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883A0u;
            // 0x1883a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883a0) {
            ctx->pc = 0x1883ACu;
            goto label_1883ac;
        }
    }
    ctx->pc = 0x1883A8u;
label_1883a8:
    // 0x1883a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1883a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1883ac:
    // 0x1883ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1883acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1883b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1883B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1883B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883B0u;
            // 0x1883b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1883B8u;
    // 0x1883b8: 0x0  nop
    ctx->pc = 0x1883b8u;
    // NOP
    // 0x1883bc: 0x0  nop
    ctx->pc = 0x1883bcu;
    // NOP
label_1883c0:
    // 0x1883c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1883c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1883c4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1883c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1883c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1883cc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1883ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1883d0: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x1883d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x1883d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1883d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1883d8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1883D8u;
    {
        const bool branch_taken_0x1883d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1883d8) {
            ctx->pc = 0x1883DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1883D8u;
            // 0x1883dc: 0x8c820494  lw          $v0, 0x494($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1883E8u;
            goto label_1883e8;
        }
    }
    ctx->pc = 0x1883E0u;
    // 0x1883e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1883E0u;
    {
        const bool branch_taken_0x1883e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883E0u;
            // 0x1883e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883e0) {
            ctx->pc = 0x188420u;
            goto label_188420;
        }
    }
    ctx->pc = 0x1883E8u;
label_1883e8:
    // 0x1883e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1883e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1883ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1883ECu;
    {
        const bool branch_taken_0x1883ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1883ec) {
            ctx->pc = 0x1883FCu;
            goto label_1883fc;
        }
    }
    ctx->pc = 0x1883F4u;
    // 0x1883f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1883F4u;
    {
        const bool branch_taken_0x1883f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883F4u;
            // 0x1883f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883f4) {
            ctx->pc = 0x188420u;
            goto label_188420;
        }
    }
    ctx->pc = 0x1883FCu;
label_1883fc:
    // 0x1883fc: 0xc05a398  jal         func_168E60
    ctx->pc = 0x1883FCu;
    SET_GPR_U32(ctx, 31, 0x188404u);
    ctx->pc = 0x168E60u;
    if (runtime->hasFunction(0x168E60u)) {
        auto targetFn = runtime->lookupFunction(0x168E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188404u; }
        if (ctx->pc != 0x188404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168E60_0x168e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188404u; }
        if (ctx->pc != 0x188404u) { return; }
    }
    ctx->pc = 0x188404u;
label_188404:
    // 0x188404: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x188404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x188408: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x188408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18840c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18840Cu;
    {
        const bool branch_taken_0x18840c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18840c) {
            ctx->pc = 0x188410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18840Cu;
            // 0x188410: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18841Cu;
            goto label_18841c;
        }
    }
    ctx->pc = 0x188414u;
    // 0x188414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188414u;
    {
        const bool branch_taken_0x188414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188414u;
            // 0x188418: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188414) {
            ctx->pc = 0x188420u;
            goto label_188420;
        }
    }
    ctx->pc = 0x18841Cu;
label_18841c:
    // 0x18841c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18841cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_188420:
    // 0x188420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188424: 0x3e00008  jr          $ra
    ctx->pc = 0x188424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188424u;
            // 0x188428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18842Cu;
    // 0x18842c: 0x0  nop
    ctx->pc = 0x18842cu;
    // NOP
label_188430:
    // 0x188430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188434: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x188434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x188438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18843c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x18843cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x188440: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x188440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188444: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x188444u;
    {
        const bool branch_taken_0x188444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188444) {
            ctx->pc = 0x188448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188444u;
            // 0x188448: 0x8c83049c  lw          $v1, 0x49C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188468u;
            goto label_188468;
        }
    }
    ctx->pc = 0x18844Cu;
    // 0x18844c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x18844cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x188450: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x188450u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x188454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188454u;
    {
        const bool branch_taken_0x188454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188454) {
            ctx->pc = 0x188464u;
            goto label_188464;
        }
    }
    ctx->pc = 0x18845Cu;
    // 0x18845c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18845Cu;
    {
        const bool branch_taken_0x18845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18845Cu;
            // 0x188460: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18845c) {
            ctx->pc = 0x1884A8u;
            goto label_1884a8;
        }
    }
    ctx->pc = 0x188464u;
label_188464:
    // 0x188464: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x188464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
label_188468:
    // 0x188468: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18846c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x18846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188470: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188474: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188474u;
    {
        const bool branch_taken_0x188474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188474) {
            ctx->pc = 0x188484u;
            goto label_188484;
        }
    }
    ctx->pc = 0x18847Cu;
    // 0x18847c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18847Cu;
    {
        const bool branch_taken_0x18847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18847Cu;
            // 0x188480: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18847c) {
            ctx->pc = 0x1884A8u;
            goto label_1884a8;
        }
    }
    ctx->pc = 0x188484u;
label_188484:
    // 0x188484: 0xc05a7e8  jal         func_169FA0
    ctx->pc = 0x188484u;
    SET_GPR_U32(ctx, 31, 0x18848Cu);
    ctx->pc = 0x169FA0u;
    if (runtime->hasFunction(0x169FA0u)) {
        auto targetFn = runtime->lookupFunction(0x169FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18848Cu; }
        if (ctx->pc != 0x18848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169FA0_0x169fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18848Cu; }
        if (ctx->pc != 0x18848Cu) { return; }
    }
    ctx->pc = 0x18848Cu;
label_18848c:
    // 0x18848c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18848cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x188490: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x188490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x188494: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188494u;
    {
        const bool branch_taken_0x188494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188494) {
            ctx->pc = 0x188498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188494u;
            // 0x188498: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1884A4u;
            goto label_1884a4;
        }
    }
    ctx->pc = 0x18849Cu;
    // 0x18849c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18849Cu;
    {
        const bool branch_taken_0x18849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18849Cu;
            // 0x1884a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18849c) {
            ctx->pc = 0x1884A8u;
            goto label_1884a8;
        }
    }
    ctx->pc = 0x1884A4u;
label_1884a4:
    // 0x1884a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1884a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1884a8:
    // 0x1884a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1884a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1884ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1884ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1884B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1884ACu;
            // 0x1884b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1884B4u;
    // 0x1884b4: 0x0  nop
    ctx->pc = 0x1884b4u;
    // NOP
    // 0x1884b8: 0x0  nop
    ctx->pc = 0x1884b8u;
    // NOP
    // 0x1884bc: 0x0  nop
    ctx->pc = 0x1884bcu;
    // NOP
label_1884c0:
    // 0x1884c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1884c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1884c4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1884c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1884c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1884c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1884cc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1884ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1884d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1884d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1884d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1884d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1884d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1884d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1884dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1884e0: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x1884e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x1884e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1884e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1884e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1884E8u;
    {
        const bool branch_taken_0x1884e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1884ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1884E8u;
            // 0x1884ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884e8) {
            ctx->pc = 0x188514u;
            goto label_188514;
        }
    }
    ctx->pc = 0x1884F0u;
    // 0x1884f0: 0xc05a7f4  jal         func_169FD0
    ctx->pc = 0x1884F0u;
    SET_GPR_U32(ctx, 31, 0x1884F8u);
    ctx->pc = 0x169FD0u;
    if (runtime->hasFunction(0x169FD0u)) {
        auto targetFn = runtime->lookupFunction(0x169FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884F8u; }
        if (ctx->pc != 0x1884F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169FD0_0x169fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1884F8u; }
        if (ctx->pc != 0x1884F8u) { return; }
    }
    ctx->pc = 0x1884F8u;
label_1884f8:
    // 0x1884f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1884f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1884fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1884fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x188500: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188500u;
    {
        const bool branch_taken_0x188500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188500) {
            ctx->pc = 0x188514u;
            goto label_188514;
        }
    }
    ctx->pc = 0x188508u;
    // 0x188508: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x188508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18850c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x18850Cu;
    {
        const bool branch_taken_0x18850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18850Cu;
            // 0x188510: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18850c) {
            ctx->pc = 0x18865Cu;
            goto label_18865c;
        }
    }
    ctx->pc = 0x188514u;
label_188514:
    // 0x188514: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x188514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x188518: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x188518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18851c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x18851cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x188520: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x188520u;
    {
        const bool branch_taken_0x188520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x188520) {
            ctx->pc = 0x188524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188520u;
            // 0x188524: 0x8e43049c  lw          $v1, 0x49C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188544u;
            goto label_188544;
        }
    }
    ctx->pc = 0x188528u;
    // 0x188528: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x188528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x18852c: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x18852cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x188530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188530u;
    {
        const bool branch_taken_0x188530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188530) {
            ctx->pc = 0x188540u;
            goto label_188540;
        }
    }
    ctx->pc = 0x188538u;
    // 0x188538: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x188538u;
    {
        const bool branch_taken_0x188538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18853Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188538u;
            // 0x18853c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188538) {
            ctx->pc = 0x188578u;
            goto label_188578;
        }
    }
    ctx->pc = 0x188540u;
label_188540:
    // 0x188540: 0x8e43049c  lw          $v1, 0x49C($s2)
    ctx->pc = 0x188540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1180)));
label_188544:
    // 0x188544: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188548: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x188548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x18854c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18854cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188550: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188550u;
    {
        const bool branch_taken_0x188550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188550) {
            ctx->pc = 0x188554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188550u;
            // 0x188554: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188560u;
            goto label_188560;
        }
    }
    ctx->pc = 0x188558u;
    // 0x188558: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x188558u;
    {
        const bool branch_taken_0x188558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188558u;
            // 0x18855c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188558) {
            ctx->pc = 0x188578u;
            goto label_188578;
        }
    }
    ctx->pc = 0x188560u;
label_188560:
    // 0x188560: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x188560u;
    SET_GPR_U32(ctx, 31, 0x188568u);
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188568u; }
        if (ctx->pc != 0x188568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188568u; }
        if (ctx->pc != 0x188568u) { return; }
    }
    ctx->pc = 0x188568u;
label_188568:
    // 0x188568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18856c: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x18856Cu;
    SET_GPR_U32(ctx, 31, 0x188574u);
    ctx->pc = 0x188570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18856Cu;
            // 0x188570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188574u; }
        if (ctx->pc != 0x188574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188574u; }
        if (ctx->pc != 0x188574u) { return; }
    }
    ctx->pc = 0x188574u;
label_188574:
    // 0x188574: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x188574u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_188578:
    // 0x188578: 0xc0621a0  jal         func_188680
    ctx->pc = 0x188578u;
    SET_GPR_U32(ctx, 31, 0x188580u);
    ctx->pc = 0x18857Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188578u;
            // 0x18857c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188680u;
    if (runtime->hasFunction(0x188680u)) {
        auto targetFn = runtime->lookupFunction(0x188680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188580u; }
        if (ctx->pc != 0x188580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188680_0x188680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188580u; }
        if (ctx->pc != 0x188580u) { return; }
    }
    ctx->pc = 0x188580u;
label_188580:
    // 0x188580: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188580u;
    {
        const bool branch_taken_0x188580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188580) {
            ctx->pc = 0x188584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188580u;
            // 0x188584: 0x8e43048c  lw          $v1, 0x48C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x188590u;
            goto label_188590;
        }
    }
    ctx->pc = 0x188588u;
    // 0x188588: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x188588u;
    {
        const bool branch_taken_0x188588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188588u;
            // 0x18858c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188588) {
            ctx->pc = 0x18865Cu;
            goto label_18865c;
        }
    }
    ctx->pc = 0x188590u;
label_188590:
    // 0x188590: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x188590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x188594: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188598: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x188598u;
    {
        const bool branch_taken_0x188598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188598) {
            ctx->pc = 0x18859Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x188598u;
            // 0x18859c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18865Cu;
            goto label_18865c;
        }
    }
    ctx->pc = 0x1885A0u;
    // 0x1885a0: 0x864204fc  lh          $v0, 0x4FC($s2)
    ctx->pc = 0x1885a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1276)));
    // 0x1885a4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1885A4u;
    {
        const bool branch_taken_0x1885a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1885a4) {
            ctx->pc = 0x1885A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1885A4u;
            // 0x1885a8: 0x864204fc  lh          $v0, 0x4FC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1276)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1885B8u;
            goto label_1885b8;
        }
    }
    ctx->pc = 0x1885ACu;
    // 0x1885ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1885acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1885b0: 0xa64204fc  sh          $v0, 0x4FC($s2)
    ctx->pc = 0x1885b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1276), (uint16_t)GPR_U32(ctx, 2));
    // 0x1885b4: 0x864204fc  lh          $v0, 0x4FC($s2)
    ctx->pc = 0x1885b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1276)));
label_1885b8:
    // 0x1885b8: 0x4410027  bgez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1885B8u;
    {
        const bool branch_taken_0x1885b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1885b8) {
            ctx->pc = 0x188658u;
            goto label_188658;
        }
    }
    ctx->pc = 0x1885C0u;
    // 0x1885c0: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x1885C0u;
    SET_GPR_U32(ctx, 31, 0x1885C8u);
    ctx->pc = 0x1885C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885C0u;
            // 0x1885c4: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885C8u; }
        if (ctx->pc != 0x1885C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885C8u; }
        if (ctx->pc != 0x1885C8u) { return; }
    }
    ctx->pc = 0x1885C8u;
label_1885c8:
    // 0x1885c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1885c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885cc: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x1885CCu;
    SET_GPR_U32(ctx, 31, 0x1885D4u);
    ctx->pc = 0x1885D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885CCu;
            // 0x1885d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (runtime->hasFunction(0x171B30u)) {
        auto targetFn = runtime->lookupFunction(0x171B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885D4u; }
        if (ctx->pc != 0x1885D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B30_0x171b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885D4u; }
        if (ctx->pc != 0x1885D4u) { return; }
    }
    ctx->pc = 0x1885D4u;
label_1885d4:
    // 0x1885d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1885d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1885d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1885d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1885dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1885DCu;
    {
        const bool branch_taken_0x1885dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1885dc) {
            ctx->pc = 0x1885E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1885DCu;
            // 0x1885e0: 0x9242008c  lbu         $v0, 0x8C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1885ECu;
            goto label_1885ec;
        }
    }
    ctx->pc = 0x1885E4u;
    // 0x1885e4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1885e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1885e8: 0x9242008c  lbu         $v0, 0x8C($s2)
    ctx->pc = 0x1885e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_1885ec:
    // 0x1885ec: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1885ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1885f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1885f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1885f4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1885F4u;
    {
        const bool branch_taken_0x1885f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1885f4) {
            ctx->pc = 0x1885F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1885F4u;
            // 0x1885f8: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18862Cu;
            goto label_18862c;
        }
    }
    ctx->pc = 0x1885FCu;
    // 0x1885fc: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1885fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x188600: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x188600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x188604: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x188604u;
    {
        const bool branch_taken_0x188604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188604) {
            ctx->pc = 0x188658u;
            goto label_188658;
        }
    }
    ctx->pc = 0x18860Cu;
    // 0x18860c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188610: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x188610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x188614: 0xc059318  jal         func_164C60
    ctx->pc = 0x188614u;
    SET_GPR_U32(ctx, 31, 0x18861Cu);
    ctx->pc = 0x188618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188614u;
            // 0x188618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (runtime->hasFunction(0x164C60u)) {
        auto targetFn = runtime->lookupFunction(0x164C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18861Cu; }
        if (ctx->pc != 0x18861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164C60_0x164c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18861Cu; }
        if (ctx->pc != 0x18861Cu) { return; }
    }
    ctx->pc = 0x18861Cu;
label_18861c:
    // 0x18861c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18861Cu;
    {
        const bool branch_taken_0x18861c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18861c) {
            ctx->pc = 0x188658u;
            goto label_188658;
        }
    }
    ctx->pc = 0x188624u;
    // 0x188624: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x188624u;
    {
        const bool branch_taken_0x188624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188624u;
            // 0x188628: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188624) {
            ctx->pc = 0x18865Cu;
            goto label_18865c;
        }
    }
    ctx->pc = 0x18862Cu;
label_18862c:
    // 0x18862c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x188630: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188630u;
    {
        const bool branch_taken_0x188630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188630) {
            ctx->pc = 0x188658u;
            goto label_188658;
        }
    }
    ctx->pc = 0x188638u;
    // 0x188638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18863c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x18863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x188640: 0xc059318  jal         func_164C60
    ctx->pc = 0x188640u;
    SET_GPR_U32(ctx, 31, 0x188648u);
    ctx->pc = 0x188644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188640u;
            // 0x188644: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (runtime->hasFunction(0x164C60u)) {
        auto targetFn = runtime->lookupFunction(0x164C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188648u; }
        if (ctx->pc != 0x188648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164C60_0x164c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188648u; }
        if (ctx->pc != 0x188648u) { return; }
    }
    ctx->pc = 0x188648u;
label_188648:
    // 0x188648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188648u;
    {
        const bool branch_taken_0x188648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188648) {
            ctx->pc = 0x188658u;
            goto label_188658;
        }
    }
    ctx->pc = 0x188650u;
    // 0x188650: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188650u;
    {
        const bool branch_taken_0x188650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188650u;
            // 0x188654: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188650) {
            ctx->pc = 0x18865Cu;
            goto label_18865c;
        }
    }
    ctx->pc = 0x188658u;
label_188658:
    // 0x188658: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18865c:
    // 0x18865c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18865cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18866c: 0x3e00008  jr          $ra
    ctx->pc = 0x18866Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18866Cu;
            // 0x188670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188674u;
    // 0x188674: 0x0  nop
    ctx->pc = 0x188674u;
    // NOP
    // 0x188678: 0x0  nop
    ctx->pc = 0x188678u;
    // NOP
    // 0x18867c: 0x0  nop
    ctx->pc = 0x18867cu;
    // NOP
    ctx->pc = 0x188680u;
}
