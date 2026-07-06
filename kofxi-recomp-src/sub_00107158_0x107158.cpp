#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107158
// Address: 0x107158 - 0x107240
void sub_00107158_0x107158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107158_0x107158");
#endif

    switch (ctx->pc) {
        case 0x107174u: goto label_107174;
        case 0x1071acu: goto label_1071ac;
        case 0x10721cu: goto label_10721c;
        default: break;
    }

    ctx->pc = 0x107158u;

    // 0x107158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10715c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107160: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x107168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10716c: 0xc041cda  jal         func_107368
    ctx->pc = 0x10716Cu;
    SET_GPR_U32(ctx, 31, 0x107174u);
    ctx->pc = 0x107170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10716Cu;
            // 0x107170: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (runtime->hasFunction(0x107368u)) {
        auto targetFn = runtime->lookupFunction(0x107368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107174u; }
        if (ctx->pc != 0x107174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107368_0x107368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107174u; }
        if (ctx->pc != 0x107174u) { return; }
    }
    ctx->pc = 0x107174u;
label_107174:
    // 0x107174: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x107174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x107178: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107178u;
    {
        const bool branch_taken_0x107178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10717Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107178u;
            // 0x10717c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107178) {
            ctx->pc = 0x107190u;
            goto label_107190;
        }
    }
    ctx->pc = 0x107180u;
    // 0x107180: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x107180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x107184: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x107184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x107188: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x107188u;
    {
        const bool branch_taken_0x107188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10718Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107188u;
            // 0x10718c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107188) {
            ctx->pc = 0x1071B8u;
            goto label_1071b8;
        }
    }
    ctx->pc = 0x107190u;
label_107190:
    // 0x107190: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x107190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x107194: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10719c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10719cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1071a0: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x1071a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x1071a4: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x1071A4u;
    SET_GPR_U32(ctx, 31, 0x1071ACu);
    ctx->pc = 0x1071A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1071A4u;
            // 0x1071a8: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (runtime->hasFunction(0x106FD8u)) {
        auto targetFn = runtime->lookupFunction(0x106FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1071ACu; }
        if (ctx->pc != 0x1071ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106FD8_0x106fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1071ACu; }
        if (ctx->pc != 0x1071ACu) { return; }
    }
    ctx->pc = 0x1071ACu;
label_1071ac:
    // 0x1071ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1071acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1071b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1071b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1071b4: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x1071b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
label_1071b8:
    // 0x1071b8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1071b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1071bc: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x1071bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x1071c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1071c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1071c4: 0x2282825  or          $a1, $s1, $t0
    ctx->pc = 0x1071c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x1071c8: 0xae04084c  sw          $a0, 0x84C($s0)
    ctx->pc = 0x1071c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 4));
    // 0x1071cc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1071ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1071d0: 0x8e060848  lw          $a2, 0x848($s0)
    ctx->pc = 0x1071d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x1071d4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1071d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1071d8: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x1071d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1071dc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1071dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1071e0: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1071e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1071e4: 0xae07082c  sw          $a3, 0x82C($s0)
    ctx->pc = 0x1071e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 7));
    // 0x1071e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1071e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1071ec: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1071ECu;
    {
        const bool branch_taken_0x1071ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1071F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1071ECu;
            // 0x1071f0: 0x868806  srlv        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071ec) {
            ctx->pc = 0x107208u;
            goto label_107208;
        }
    }
    ctx->pc = 0x1071F4u;
    // 0x1071f4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1071f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1071f8: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1071F8u;
    {
        const bool branch_taken_0x1071f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1071f8) {
            ctx->pc = 0x1071FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1071F8u;
            // 0x1071fc: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107214u;
            goto label_107214;
        }
    }
    ctx->pc = 0x107200u;
    // 0x107200: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107200u;
    {
        const bool branch_taken_0x107200 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x107204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107200u;
            // 0x107204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107200) {
            ctx->pc = 0x107210u;
            goto label_107210;
        }
    }
    ctx->pc = 0x107208u;
label_107208:
    // 0x107208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107208u;
    {
        const bool branch_taken_0x107208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107208u;
            // 0x10720c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107208) {
            ctx->pc = 0x107214u;
            goto label_107214;
        }
    }
    ctx->pc = 0x107210u;
label_107210:
    // 0x107210: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x107210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_107214:
    // 0x107214: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x107214u;
    SET_GPR_U32(ctx, 31, 0x10721Cu);
    ctx->pc = 0x107218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107214u;
            // 0x107218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (runtime->hasFunction(0x106FD8u)) {
        auto targetFn = runtime->lookupFunction(0x106FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10721Cu; }
        if (ctx->pc != 0x10721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106FD8_0x106fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10721Cu; }
        if (ctx->pc != 0x10721Cu) { return; }
    }
    ctx->pc = 0x10721Cu;
label_10721c:
    // 0x10721c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x107220: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107220u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107224: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x107224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107228: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x107228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x10722c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10722cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107234: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107238: 0x3e00008  jr          $ra
    ctx->pc = 0x107238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107238u;
            // 0x10723c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107240u;
    ctx->pc = 0x107240u;
}
