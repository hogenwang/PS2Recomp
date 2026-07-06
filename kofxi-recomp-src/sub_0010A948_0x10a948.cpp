#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A948
// Address: 0x10a948 - 0x10aa98
void sub_0010A948_0x10a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A948_0x10a948");
#endif

    switch (ctx->pc) {
        case 0x10a9a0u: goto label_10a9a0;
        case 0x10a9e4u: goto label_10a9e4;
        case 0x10a9f0u: goto label_10a9f0;
        case 0x10aa08u: goto label_10aa08;
        case 0x10aa20u: goto label_10aa20;
        case 0x10aa30u: goto label_10aa30;
        case 0x10aa40u: goto label_10aa40;
        case 0x10aa50u: goto label_10aa50;
        case 0x10aa60u: goto label_10aa60;
        case 0x10aa70u: goto label_10aa70;
        case 0x10aa80u: goto label_10aa80;
        default: break;
    }

    ctx->pc = 0x10a948u;

    // 0x10a948: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10a948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a94c: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x10a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x10a950: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A950u;
    {
        const bool branch_taken_0x10a950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a950) {
            ctx->pc = 0x10A954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A950u;
            // 0x10a954: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A958u;
            goto label_10a958;
        }
    }
    ctx->pc = 0x10A958u;
label_10a958:
    // 0x10a958: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x10a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x10a95c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A95Cu;
    {
        const bool branch_taken_0x10a95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a95c) {
            ctx->pc = 0x10A960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A95Cu;
            // 0x10a960: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A964u;
            goto label_10a964;
        }
    }
    ctx->pc = 0x10A964u;
label_10a964:
    // 0x10a964: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x10a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x10a968: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A968u;
    {
        const bool branch_taken_0x10a968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a968) {
            ctx->pc = 0x10A96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A968u;
            // 0x10a96c: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A970u;
            goto label_10a970;
        }
    }
    ctx->pc = 0x10A970u;
label_10a970:
    // 0x10a970: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x10a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
    // 0x10a974: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A974u;
    {
        const bool branch_taken_0x10a974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a974) {
            ctx->pc = 0x10A978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A974u;
            // 0x10a978: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A97Cu;
            goto label_10a97c;
        }
    }
    ctx->pc = 0x10A97Cu;
label_10a97c:
    // 0x10a97c: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x10a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x10a980: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A980u;
    {
        const bool branch_taken_0x10a980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a980) {
            ctx->pc = 0x10A984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A980u;
            // 0x10a984: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A988u;
            goto label_10a988;
        }
    }
    ctx->pc = 0x10A988u;
label_10a988:
    // 0x10a988: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x10a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x10a98c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A98Cu;
    {
        const bool branch_taken_0x10a98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a98c) {
            ctx->pc = 0x10A990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A98Cu;
            // 0x10a990: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A994u;
            goto label_10a994;
        }
    }
    ctx->pc = 0x10A994u;
label_10a994:
    // 0x10a994: 0x3e00008  jr          $ra
    ctx->pc = 0x10A994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A994u;
            // 0x10a998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A99Cu;
    // 0x10a99c: 0x0  nop
    ctx->pc = 0x10a99cu;
    // NOP
label_10a9a0:
    // 0x10a9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10a9a4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10a9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a9ac: 0xc74018  mult        $t0, $a2, $a3
    ctx->pc = 0x10a9acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x10a9b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10a9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10a9b4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x10a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10a9b8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10a9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10a9bc: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a9c0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10a9c4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x10a9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x10a9c8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x10a9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x10a9cc: 0xac6700f4  sw          $a3, 0xF4($v1)
    ctx->pc = 0x10a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 7));
    // 0x10a9d0: 0xac6500ec  sw          $a1, 0xEC($v1)
    ctx->pc = 0x10a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 5));
    // 0x10a9d4: 0xac6800f8  sw          $t0, 0xF8($v1)
    ctx->pc = 0x10a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 8));
    // 0x10a9d8: 0xac6600f0  sw          $a2, 0xF0($v1)
    ctx->pc = 0x10a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 6));
    // 0x10a9dc: 0xc04275e  jal         func_109D78
    ctx->pc = 0x10A9DCu;
    SET_GPR_U32(ctx, 31, 0x10A9E4u);
    ctx->pc = 0x10A9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9DCu;
            // 0x10a9e0: 0xac6000c4  sw          $zero, 0xC4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109D78u;
    if (runtime->hasFunction(0x109D78u)) {
        auto targetFn = runtime->lookupFunction(0x109D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A9E4u; }
        if (ctx->pc != 0x10A9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109D78_0x109d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A9E4u; }
        if (ctx->pc != 0x10A9E4u) { return; }
    }
    ctx->pc = 0x10A9E4u;
label_10a9e4:
    // 0x10a9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A9E8u;
            // 0x10a9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A9F0u;
label_10a9f0:
    // 0x10a9f0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a9f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a9f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a9fc: 0xfc650090  sd          $a1, 0x90($v1)
    ctx->pc = 0x10a9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 5));
    // 0x10aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA00u;
            // 0x10aa04: 0xac64008c  sw          $a0, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AA08u;
label_10aa08:
    // 0x10aa08: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10aa0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aa10: 0xfc600090  sd          $zero, 0x90($v1)
    ctx->pc = 0x10aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 0));
    // 0x10aa14: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA14u;
            // 0x10aa18: 0xac60008c  sw          $zero, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AA1Cu;
    // 0x10aa1c: 0x0  nop
    ctx->pc = 0x10aa1cu;
    // NOP
label_10aa20:
    // 0x10aa20: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10aa24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aa28: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA28u;
            // 0x10aa2c: 0xac6500ec  sw          $a1, 0xEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AA30u;
label_10aa30:
    // 0x10aa30: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10aa34: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA34u;
            // 0x10aa38: 0x8c6200e0  lw          $v0, 0xE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AA3Cu;
    // 0x10aa3c: 0x0  nop
    ctx->pc = 0x10aa3cu;
    // NOP
label_10aa40:
    // 0x10aa40: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10aa44: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA44u;
            // 0x10aa48: 0x8c6200e4  lw          $v0, 0xE4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AA4Cu;
    // 0x10aa4c: 0x0  nop
    ctx->pc = 0x10aa4cu;
    // NOP
label_10aa50:
    // 0x10aa50: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x10aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10aa54: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA54u;
            // 0x10aa58: 0x244200c8  addiu       $v0, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AA5Cu;
    // 0x10aa5c: 0x0  nop
    ctx->pc = 0x10aa5cu;
    // NOP
label_10aa60:
    // 0x10aa60: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x10aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10aa64: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA64u;
            // 0x10aa68: 0x244200c8  addiu       $v0, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AA6Cu;
    // 0x10aa6c: 0x0  nop
    ctx->pc = 0x10aa6cu;
    // NOP
label_10aa70:
    // 0x10aa70: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10aa74: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x10aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x10aa78: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA78u;
            // 0x10aa7c: 0xac6500fc  sw          $a1, 0xFC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AA80u;
label_10aa80:
    // 0x10aa80: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x10aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10aa84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aa88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aa8c: 0xacc30108  sw          $v1, 0x108($a2)
    ctx->pc = 0x10aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 264), GPR_U32(ctx, 3));
    // 0x10aa90: 0x3e00008  jr          $ra
    ctx->pc = 0x10AA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AA90u;
            // 0x10aa94: 0xfcc50100  sd          $a1, 0x100($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 256), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AA98u;
    ctx->pc = 0x10aa98u;
}
