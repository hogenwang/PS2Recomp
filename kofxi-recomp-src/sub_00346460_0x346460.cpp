#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00346460
// Address: 0x346460 - 0x346c60
void sub_00346460_0x346460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346460_0x346460");
#endif

    switch (ctx->pc) {
        case 0x346470u: goto label_346470;
        case 0x34647cu: goto label_34647c;
        case 0x346490u: goto label_346490;
        case 0x3464b0u: goto label_3464b0;
        case 0x3464c4u: goto label_3464c4;
        case 0x3464d0u: goto label_3464d0;
        case 0x3464dcu: goto label_3464dc;
        case 0x3464e8u: goto label_3464e8;
        case 0x3464f4u: goto label_3464f4;
        case 0x346510u: goto label_346510;
        case 0x346524u: goto label_346524;
        case 0x346530u: goto label_346530;
        case 0x346540u: goto label_346540;
        case 0x346554u: goto label_346554;
        case 0x34656cu: goto label_34656c;
        case 0x346578u: goto label_346578;
        case 0x346590u: goto label_346590;
        case 0x3465a4u: goto label_3465a4;
        case 0x3465c4u: goto label_3465c4;
        case 0x3465d0u: goto label_3465d0;
        case 0x3465e0u: goto label_3465e0;
        case 0x346600u: goto label_346600;
        case 0x346610u: goto label_346610;
        case 0x346628u: goto label_346628;
        case 0x346634u: goto label_346634;
        case 0x346658u: goto label_346658;
        case 0x346670u: goto label_346670;
        case 0x346688u: goto label_346688;
        case 0x3466a0u: goto label_3466a0;
        case 0x3466b0u: goto label_3466b0;
        case 0x3466c0u: goto label_3466c0;
        case 0x3466d8u: goto label_3466d8;
        case 0x3466f0u: goto label_3466f0;
        case 0x346708u: goto label_346708;
        case 0x346724u: goto label_346724;
        case 0x346730u: goto label_346730;
        case 0x34677cu: goto label_34677c;
        case 0x346790u: goto label_346790;
        case 0x3467a0u: goto label_3467a0;
        case 0x3467b4u: goto label_3467b4;
        case 0x346800u: goto label_346800;
        case 0x346814u: goto label_346814;
        case 0x346820u: goto label_346820;
        case 0x346834u: goto label_346834;
        case 0x346880u: goto label_346880;
        case 0x346894u: goto label_346894;
        case 0x3468a0u: goto label_3468a0;
        case 0x3468b0u: goto label_3468b0;
        case 0x3468c0u: goto label_3468c0;
        case 0x3468d8u: goto label_3468d8;
        case 0x3468f0u: goto label_3468f0;
        case 0x346908u: goto label_346908;
        case 0x346924u: goto label_346924;
        case 0x346930u: goto label_346930;
        case 0x346940u: goto label_346940;
        case 0x346950u: goto label_346950;
        case 0x34695cu: goto label_34695c;
        case 0x346970u: goto label_346970;
        case 0x346988u: goto label_346988;
        case 0x3469a4u: goto label_3469a4;
        case 0x3469b0u: goto label_3469b0;
        case 0x3469c0u: goto label_3469c0;
        case 0x3469d0u: goto label_3469d0;
        case 0x3469e4u: goto label_3469e4;
        case 0x3469f4u: goto label_3469f4;
        case 0x346a04u: goto label_346a04;
        case 0x346a18u: goto label_346a18;
        case 0x346a30u: goto label_346a30;
        case 0x346a40u: goto label_346a40;
        case 0x346a50u: goto label_346a50;
        case 0x346a64u: goto label_346a64;
        case 0x346a70u: goto label_346a70;
        case 0x346a8cu: goto label_346a8c;
        case 0x346aa8u: goto label_346aa8;
        case 0x346ae8u: goto label_346ae8;
        case 0x346af4u: goto label_346af4;
        case 0x346b04u: goto label_346b04;
        case 0x346b10u: goto label_346b10;
        case 0x346b20u: goto label_346b20;
        case 0x346b3cu: goto label_346b3c;
        case 0x346b4cu: goto label_346b4c;
        case 0x346b58u: goto label_346b58;
        case 0x346b70u: goto label_346b70;
        case 0x346b8cu: goto label_346b8c;
        case 0x346ba8u: goto label_346ba8;
        case 0x346be8u: goto label_346be8;
        case 0x346bf4u: goto label_346bf4;
        case 0x346c04u: goto label_346c04;
        case 0x346c10u: goto label_346c10;
        case 0x346c20u: goto label_346c20;
        case 0x346c44u: goto label_346c44;
        case 0x346c50u: goto label_346c50;
        default: break;
    }

    ctx->pc = 0x346460u;

    // 0x346460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346468: 0xc068e68  jal         func_1A39A0
    ctx->pc = 0x346468u;
    SET_GPR_U32(ctx, 31, 0x346470u);
    ctx->pc = 0x1A39A0u;
    if (runtime->hasFunction(0x1A39A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A39A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346470u; }
        if (ctx->pc != 0x346470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A39A0_0x1a39a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346470u; }
        if (ctx->pc != 0x346470u) { return; }
    }
    ctx->pc = 0x346470u;
label_346470:
    // 0x346470: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346474: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346474u;
    SET_GPR_U32(ctx, 31, 0x34647Cu);
    ctx->pc = 0x346478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346474u;
            // 0x346478: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34647Cu; }
        if (ctx->pc != 0x34647Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34647Cu; }
        if (ctx->pc != 0x34647Cu) { return; }
    }
    ctx->pc = 0x34647Cu;
label_34647c:
    // 0x34647c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34647cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346480: 0x3e00008  jr          $ra
    ctx->pc = 0x346480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346480u;
            // 0x346484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346488u;
    // 0x346488: 0x0  nop
    ctx->pc = 0x346488u;
    // NOP
    // 0x34648c: 0x0  nop
    ctx->pc = 0x34648cu;
    // NOP
label_346490:
    // 0x346490: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x346490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x346494: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346498: 0x2484a1d0  addiu       $a0, $a0, -0x5E30
    ctx->pc = 0x346498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943184));
    // 0x34649c: 0x80558d4  j           func_156350
    ctx->pc = 0x34649Cu;
    ctx->pc = 0x3464A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34649Cu;
            // 0x3464a0: 0x24a564b0  addiu       $a1, $a1, 0x64B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00156350_0x156350(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3464A4u;
    // 0x3464a4: 0x0  nop
    ctx->pc = 0x3464a4u;
    // NOP
    // 0x3464a8: 0x0  nop
    ctx->pc = 0x3464a8u;
    // NOP
    // 0x3464ac: 0x0  nop
    ctx->pc = 0x3464acu;
    // NOP
label_3464b0:
    // 0x3464b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3464b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3464b4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3464b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3464b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3464b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3464bc: 0xc089014  jal         func_224050
    ctx->pc = 0x3464BCu;
    SET_GPR_U32(ctx, 31, 0x3464C4u);
    ctx->pc = 0x3464C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3464BCu;
            // 0x3464c0: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (runtime->hasFunction(0x224050u)) {
        auto targetFn = runtime->lookupFunction(0x224050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464C4u; }
        if (ctx->pc != 0x3464C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224050_0x224050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464C4u; }
        if (ctx->pc != 0x3464C4u) { return; }
    }
    ctx->pc = 0x3464C4u;
label_3464c4:
    // 0x3464c4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3464c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3464c8: 0xc089014  jal         func_224050
    ctx->pc = 0x3464C8u;
    SET_GPR_U32(ctx, 31, 0x3464D0u);
    ctx->pc = 0x3464CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3464C8u;
            // 0x3464cc: 0x24841158  addiu       $a0, $a0, 0x1158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (runtime->hasFunction(0x224050u)) {
        auto targetFn = runtime->lookupFunction(0x224050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464D0u; }
        if (ctx->pc != 0x3464D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224050_0x224050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464D0u; }
        if (ctx->pc != 0x3464D0u) { return; }
    }
    ctx->pc = 0x3464D0u;
label_3464d0:
    // 0x3464d0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3464d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3464d4: 0xc089014  jal         func_224050
    ctx->pc = 0x3464D4u;
    SET_GPR_U32(ctx, 31, 0x3464DCu);
    ctx->pc = 0x3464D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3464D4u;
            // 0x3464d8: 0x248421d0  addiu       $a0, $a0, 0x21D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (runtime->hasFunction(0x224050u)) {
        auto targetFn = runtime->lookupFunction(0x224050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464DCu; }
        if (ctx->pc != 0x3464DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224050_0x224050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464DCu; }
        if (ctx->pc != 0x3464DCu) { return; }
    }
    ctx->pc = 0x3464DCu;
label_3464dc:
    // 0x3464dc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3464dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3464e0: 0xc089014  jal         func_224050
    ctx->pc = 0x3464E0u;
    SET_GPR_U32(ctx, 31, 0x3464E8u);
    ctx->pc = 0x3464E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3464E0u;
            // 0x3464e4: 0x24843248  addiu       $a0, $a0, 0x3248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (runtime->hasFunction(0x224050u)) {
        auto targetFn = runtime->lookupFunction(0x224050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464E8u; }
        if (ctx->pc != 0x3464E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224050_0x224050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464E8u; }
        if (ctx->pc != 0x3464E8u) { return; }
    }
    ctx->pc = 0x3464E8u;
label_3464e8:
    // 0x3464e8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3464e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3464ec: 0xc088696  jal         func_221A58
    ctx->pc = 0x3464ECu;
    SET_GPR_U32(ctx, 31, 0x3464F4u);
    ctx->pc = 0x3464F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3464ECu;
            // 0x3464f0: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464F4u; }
        if (ctx->pc != 0x3464F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464F4u; }
        if (ctx->pc != 0x3464F4u) { return; }
    }
    ctx->pc = 0x3464F4u;
label_3464f4:
    // 0x3464f4: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x3464f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x3464f8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3464f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3464fc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3464FCu;
    {
        const bool branch_taken_0x3464fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3464fc) {
            ctx->pc = 0x346518u;
            goto label_346518;
        }
    }
    ctx->pc = 0x346504u;
    // 0x346504: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346508: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346508u;
    SET_GPR_U32(ctx, 31, 0x346510u);
    ctx->pc = 0x34650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346508u;
            // 0x34650c: 0x24846590  addiu       $a0, $a0, 0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346510u; }
        if (ctx->pc != 0x346510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346510u; }
        if (ctx->pc != 0x346510u) { return; }
    }
    ctx->pc = 0x346510u;
label_346510:
    // 0x346510: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346510u;
    {
        const bool branch_taken_0x346510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346510u;
            // 0x346514: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346510) {
            ctx->pc = 0x346534u;
            goto label_346534;
        }
    }
    ctx->pc = 0x346518u;
label_346518:
    // 0x346518: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34651c: 0xc0885d0  jal         func_221740
    ctx->pc = 0x34651Cu;
    SET_GPR_U32(ctx, 31, 0x346524u);
    ctx->pc = 0x346520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34651Cu;
            // 0x346520: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221740u;
    if (runtime->hasFunction(0x221740u)) {
        auto targetFn = runtime->lookupFunction(0x221740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346524u; }
        if (ctx->pc != 0x346524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221740_0x221740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346524u; }
        if (ctx->pc != 0x346524u) { return; }
    }
    ctx->pc = 0x346524u;
label_346524:
    // 0x346524: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346528: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346528u;
    SET_GPR_U32(ctx, 31, 0x346530u);
    ctx->pc = 0x34652Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346528u;
            // 0x34652c: 0x24846540  addiu       $a0, $a0, 0x6540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346530u; }
        if (ctx->pc != 0x346530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346530u; }
        if (ctx->pc != 0x346530u) { return; }
    }
    ctx->pc = 0x346530u;
label_346530:
    // 0x346530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346534:
    // 0x346534: 0x3e00008  jr          $ra
    ctx->pc = 0x346534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346534u;
            // 0x346538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34653Cu;
    // 0x34653c: 0x0  nop
    ctx->pc = 0x34653cu;
    // NOP
label_346540:
    // 0x346540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346544: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34654c: 0xc088696  jal         func_221A58
    ctx->pc = 0x34654Cu;
    SET_GPR_U32(ctx, 31, 0x346554u);
    ctx->pc = 0x346550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34654Cu;
            // 0x346550: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346554u; }
        if (ctx->pc != 0x346554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346554u; }
        if (ctx->pc != 0x346554u) { return; }
    }
    ctx->pc = 0x346554u;
label_346554:
    // 0x346554: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x346554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x346558: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x346558u;
    {
        const bool branch_taken_0x346558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x346558) {
            ctx->pc = 0x34655Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346558u;
            // 0x34655c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34657Cu;
            goto label_34657c;
        }
    }
    ctx->pc = 0x346560u;
    // 0x346560: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346564: 0xc08861c  jal         func_221870
    ctx->pc = 0x346564u;
    SET_GPR_U32(ctx, 31, 0x34656Cu);
    ctx->pc = 0x346568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346564u;
            // 0x346568: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221870u;
    if (runtime->hasFunction(0x221870u)) {
        auto targetFn = runtime->lookupFunction(0x221870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34656Cu; }
        if (ctx->pc != 0x34656Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221870_0x221870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34656Cu; }
        if (ctx->pc != 0x34656Cu) { return; }
    }
    ctx->pc = 0x34656Cu;
label_34656c:
    // 0x34656c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34656cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346570: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346570u;
    SET_GPR_U32(ctx, 31, 0x346578u);
    ctx->pc = 0x346574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346570u;
            // 0x346574: 0x24846590  addiu       $a0, $a0, 0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346578u; }
        if (ctx->pc != 0x346578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346578u; }
        if (ctx->pc != 0x346578u) { return; }
    }
    ctx->pc = 0x346578u;
label_346578:
    // 0x346578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34657c:
    // 0x34657c: 0x3e00008  jr          $ra
    ctx->pc = 0x34657Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34657Cu;
            // 0x346580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346584u;
    // 0x346584: 0x0  nop
    ctx->pc = 0x346584u;
    // NOP
    // 0x346588: 0x0  nop
    ctx->pc = 0x346588u;
    // NOP
    // 0x34658c: 0x0  nop
    ctx->pc = 0x34658cu;
    // NOP
label_346590:
    // 0x346590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346594: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34659c: 0xc088696  jal         func_221A58
    ctx->pc = 0x34659Cu;
    SET_GPR_U32(ctx, 31, 0x3465A4u);
    ctx->pc = 0x3465A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34659Cu;
            // 0x3465a0: 0x8c4440a8  lw          $a0, 0x40A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16552)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3465A4u; }
        if (ctx->pc != 0x3465A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3465A4u; }
        if (ctx->pc != 0x3465A4u) { return; }
    }
    ctx->pc = 0x3465A4u;
label_3465a4:
    // 0x3465a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3465a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3465a8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3465A8u;
    {
        const bool branch_taken_0x3465a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3465a8) {
            ctx->pc = 0x3465BCu;
            goto label_3465bc;
        }
    }
    ctx->pc = 0x3465B0u;
    // 0x3465b0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3465b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3465b4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3465B4u;
    {
        const bool branch_taken_0x3465b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3465b4) {
            ctx->pc = 0x3465B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3465B4u;
            // 0x3465b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3465D4u;
            goto label_3465d4;
        }
    }
    ctx->pc = 0x3465BCu;
label_3465bc:
    // 0x3465bc: 0xc068e68  jal         func_1A39A0
    ctx->pc = 0x3465BCu;
    SET_GPR_U32(ctx, 31, 0x3465C4u);
    ctx->pc = 0x1A39A0u;
    if (runtime->hasFunction(0x1A39A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A39A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3465C4u; }
        if (ctx->pc != 0x3465C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A39A0_0x1a39a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3465C4u; }
        if (ctx->pc != 0x3465C4u) { return; }
    }
    ctx->pc = 0x3465C4u;
label_3465c4:
    // 0x3465c4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3465c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3465c8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3465C8u;
    SET_GPR_U32(ctx, 31, 0x3465D0u);
    ctx->pc = 0x3465CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3465C8u;
            // 0x3465cc: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3465D0u; }
        if (ctx->pc != 0x3465D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3465D0u; }
        if (ctx->pc != 0x3465D0u) { return; }
    }
    ctx->pc = 0x3465D0u;
label_3465d0:
    // 0x3465d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3465d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3465d4:
    // 0x3465d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3465D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3465D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3465D4u;
            // 0x3465d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3465DCu;
    // 0x3465dc: 0x0  nop
    ctx->pc = 0x3465dcu;
    // NOP
label_3465e0:
    // 0x3465e0: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x3465e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x3465e4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3465e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3465e8: 0x2484a1d0  addiu       $a0, $a0, -0x5E30
    ctx->pc = 0x3465e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943184));
    // 0x3465ec: 0x80558d4  j           func_156350
    ctx->pc = 0x3465ECu;
    ctx->pc = 0x3465F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3465ECu;
            // 0x3465f0: 0x24a56600  addiu       $a1, $a1, 0x6600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00156350_0x156350(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3465F4u;
    // 0x3465f4: 0x0  nop
    ctx->pc = 0x3465f4u;
    // NOP
    // 0x3465f8: 0x0  nop
    ctx->pc = 0x3465f8u;
    // NOP
    // 0x3465fc: 0x0  nop
    ctx->pc = 0x3465fcu;
    // NOP
label_346600:
    // 0x346600: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346604: 0x8082674  j           func_2099D0
    ctx->pc = 0x346604u;
    ctx->pc = 0x346608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346604u;
            // 0x346608: 0x24847280  addiu       $a0, $a0, 0x7280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34660Cu;
    // 0x34660c: 0x0  nop
    ctx->pc = 0x34660cu;
    // NOP
label_346610:
    // 0x346610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346614: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x346614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x346618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x346618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34661c: 0x24845160  addiu       $a0, $a0, 0x5160
    ctx->pc = 0x34661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20832));
    // 0x346620: 0xc043e52  jal         func_10F948
    ctx->pc = 0x346620u;
    SET_GPR_U32(ctx, 31, 0x346628u);
    ctx->pc = 0x346624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346620u;
            // 0x346624: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346628u; }
        if (ctx->pc != 0x346628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346628u; }
        if (ctx->pc != 0x346628u) { return; }
    }
    ctx->pc = 0x346628u;
label_346628:
    // 0x346628: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x346628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34662c: 0xc0d0c28  jal         func_3430A0
    ctx->pc = 0x34662Cu;
    SET_GPR_U32(ctx, 31, 0x346634u);
    ctx->pc = 0x346630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34662Cu;
            // 0x346630: 0x9450be90  lhu         $s0, -0x4170($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3430A0u;
    if (runtime->hasFunction(0x3430A0u)) {
        auto targetFn = runtime->lookupFunction(0x3430A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346634u; }
        if (ctx->pc != 0x346634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003430A0_0x3430a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346634u; }
        if (ctx->pc != 0x346634u) { return; }
    }
    ctx->pc = 0x346634u;
label_346634:
    // 0x346634: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x346634u;
    {
        const bool branch_taken_0x346634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346634) {
            ctx->pc = 0x346638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346634u;
            // 0x346638: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x346644u;
            goto label_346644;
        }
    }
    ctx->pc = 0x34663Cu;
    // 0x34663c: 0x64100010  daddiu      $s0, $zero, 0x10
    ctx->pc = 0x34663cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x346640: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x346640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_346644:
    // 0x346644: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x346644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346648: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346648u;
    {
        const bool branch_taken_0x346648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x346648) {
            ctx->pc = 0x34664Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346648u;
            // 0x34664c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346660u;
            goto label_346660;
        }
    }
    ctx->pc = 0x346650u;
    // 0x346650: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346650u;
    SET_GPR_U32(ctx, 31, 0x346658u);
    ctx->pc = 0x346654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346650u;
            // 0x346654: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346658u; }
        if (ctx->pc != 0x346658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346658u; }
        if (ctx->pc != 0x346658u) { return; }
    }
    ctx->pc = 0x346658u;
label_346658:
    // 0x346658: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x346658u;
    {
        const bool branch_taken_0x346658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346658) {
            ctx->pc = 0x3466B0u;
            goto label_3466b0;
        }
    }
    ctx->pc = 0x346660u;
label_346660:
    // 0x346660: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346660u;
    {
        const bool branch_taken_0x346660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x346660) {
            ctx->pc = 0x346664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346660u;
            // 0x346664: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346678u;
            goto label_346678;
        }
    }
    ctx->pc = 0x346668u;
    // 0x346668: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346668u;
    SET_GPR_U32(ctx, 31, 0x346670u);
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346670u; }
        if (ctx->pc != 0x346670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346670u; }
        if (ctx->pc != 0x346670u) { return; }
    }
    ctx->pc = 0x346670u;
label_346670:
    // 0x346670: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x346670u;
    {
        const bool branch_taken_0x346670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346670) {
            ctx->pc = 0x3466B0u;
            goto label_3466b0;
        }
    }
    ctx->pc = 0x346678u;
label_346678:
    // 0x346678: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346678u;
    {
        const bool branch_taken_0x346678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x346678) {
            ctx->pc = 0x34667Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346678u;
            // 0x34667c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346690u;
            goto label_346690;
        }
    }
    ctx->pc = 0x346680u;
    // 0x346680: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346680u;
    SET_GPR_U32(ctx, 31, 0x346688u);
    ctx->pc = 0x346684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346680u;
            // 0x346684: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346688u; }
        if (ctx->pc != 0x346688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346688u; }
        if (ctx->pc != 0x346688u) { return; }
    }
    ctx->pc = 0x346688u;
label_346688:
    // 0x346688: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x346688u;
    {
        const bool branch_taken_0x346688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346688) {
            ctx->pc = 0x3466B0u;
            goto label_3466b0;
        }
    }
    ctx->pc = 0x346690u;
label_346690:
    // 0x346690: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346690u;
    {
        const bool branch_taken_0x346690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x346690) {
            ctx->pc = 0x3466A8u;
            goto label_3466a8;
        }
    }
    ctx->pc = 0x346698u;
    // 0x346698: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346698u;
    SET_GPR_U32(ctx, 31, 0x3466A0u);
    ctx->pc = 0x34669Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346698u;
            // 0x34669c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466A0u; }
        if (ctx->pc != 0x3466A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466A0u; }
        if (ctx->pc != 0x3466A0u) { return; }
    }
    ctx->pc = 0x3466A0u;
label_3466a0:
    // 0x3466a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3466A0u;
    {
        const bool branch_taken_0x3466a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3466a0) {
            ctx->pc = 0x3466B0u;
            goto label_3466b0;
        }
    }
    ctx->pc = 0x3466A8u;
label_3466a8:
    // 0x3466a8: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x3466A8u;
    SET_GPR_U32(ctx, 31, 0x3466B0u);
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466B0u; }
        if (ctx->pc != 0x3466B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466B0u; }
        if (ctx->pc != 0x3466B0u) { return; }
    }
    ctx->pc = 0x3466B0u;
label_3466b0:
    // 0x3466b0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3466b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3466b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3466b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3466b8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3466B8u;
    SET_GPR_U32(ctx, 31, 0x3466C0u);
    ctx->pc = 0x3466BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3466B8u;
            // 0x3466bc: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466C0u; }
        if (ctx->pc != 0x3466C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466C0u; }
        if (ctx->pc != 0x3466C0u) { return; }
    }
    ctx->pc = 0x3466C0u;
label_3466c0:
    // 0x3466c0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3466c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3466c4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3466c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3466c8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3466c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3466cc: 0x248466f0  addiu       $a0, $a0, 0x66F0
    ctx->pc = 0x3466ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26352));
    // 0x3466d0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3466D0u;
    SET_GPR_U32(ctx, 31, 0x3466D8u);
    ctx->pc = 0x3466D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3466D0u;
            // 0x3466d4: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466D8u; }
        if (ctx->pc != 0x3466D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466D8u; }
        if (ctx->pc != 0x3466D8u) { return; }
    }
    ctx->pc = 0x3466D8u;
label_3466d8:
    // 0x3466d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3466d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3466dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3466dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3466e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3466E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3466E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3466E0u;
            // 0x3466e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3466E8u;
    // 0x3466e8: 0x0  nop
    ctx->pc = 0x3466e8u;
    // NOP
    // 0x3466ec: 0x0  nop
    ctx->pc = 0x3466ecu;
    // NOP
label_3466f0:
    // 0x3466f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3466f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3466f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3466f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3466f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3466f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3466fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3466fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346700: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x346700u;
    SET_GPR_U32(ctx, 31, 0x346708u);
    ctx->pc = 0x346704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346700u;
            // 0x346704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346708u; }
        if (ctx->pc != 0x346708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346708u; }
        if (ctx->pc != 0x346708u) { return; }
    }
    ctx->pc = 0x346708u;
label_346708:
    // 0x346708: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x346708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34670c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x34670cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x346710: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x346710u;
    {
        const bool branch_taken_0x346710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346710) {
            ctx->pc = 0x346714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346710u;
            // 0x346714: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346794u;
            goto label_346794;
        }
    }
    ctx->pc = 0x346718u;
    // 0x346718: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x346718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34671c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34671Cu;
    SET_GPR_U32(ctx, 31, 0x346724u);
    ctx->pc = 0x346720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34671Cu;
            // 0x346720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346724u; }
        if (ctx->pc != 0x346724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346724u; }
        if (ctx->pc != 0x346724u) { return; }
    }
    ctx->pc = 0x346724u;
label_346724:
    // 0x346724: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346728: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x346728u;
    SET_GPR_U32(ctx, 31, 0x346730u);
    ctx->pc = 0x34672Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346728u;
            // 0x34672c: 0x2484fe80  addiu       $a0, $a0, -0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (runtime->hasFunction(0x20F2A8u)) {
        auto targetFn = runtime->lookupFunction(0x20F2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346730u; }
        if (ctx->pc != 0x346730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F2A8_0x20f2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346730u; }
        if (ctx->pc != 0x346730u) { return; }
    }
    ctx->pc = 0x346730u;
label_346730:
    // 0x346730: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x346730u;
    {
        const bool branch_taken_0x346730 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x346730) {
            ctx->pc = 0x346784u;
            goto label_346784;
        }
    }
    ctx->pc = 0x346738u;
    // 0x346738: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34673c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34673cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x346740: 0x2463fe80  addiu       $v1, $v1, -0x180
    ctx->pc = 0x346740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966912));
    // 0x346744: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346748: 0xac43eab8  sw          $v1, -0x1548($v0)
    ctx->pc = 0x346748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 3));
    // 0x34674c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x34674cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346750: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x346750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
    // 0x346754: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346758: 0xac44ead0  sw          $a0, -0x1530($v0)
    ctx->pc = 0x346758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 4));
    // 0x34675c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34675cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346760: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346764: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x346764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x346768: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x346768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34676c: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x34676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x346770: 0x0  nop
    ctx->pc = 0x346770u;
    // NOP
    // 0x346774: 0xc0558d4  jal         func_156350
    ctx->pc = 0x346774u;
    SET_GPR_U32(ctx, 31, 0x34677Cu);
    ctx->pc = 0x346778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346774u;
            // 0x346778: 0x24a567a0  addiu       $a1, $a1, 0x67A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34677Cu; }
        if (ctx->pc != 0x34677Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34677Cu; }
        if (ctx->pc != 0x34677Cu) { return; }
    }
    ctx->pc = 0x34677Cu;
label_34677c:
    // 0x34677c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34677Cu;
    {
        const bool branch_taken_0x34677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34677c) {
            ctx->pc = 0x346790u;
            goto label_346790;
        }
    }
    ctx->pc = 0x346784u;
label_346784:
    // 0x346784: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346788: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346788u;
    SET_GPR_U32(ctx, 31, 0x346790u);
    ctx->pc = 0x34678Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346788u;
            // 0x34678c: 0x248467a0  addiu       $a0, $a0, 0x67A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346790u; }
        if (ctx->pc != 0x346790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346790u; }
        if (ctx->pc != 0x346790u) { return; }
    }
    ctx->pc = 0x346790u;
label_346790:
    // 0x346790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346794:
    // 0x346794: 0x3e00008  jr          $ra
    ctx->pc = 0x346794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346794u;
            // 0x346798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34679Cu;
    // 0x34679c: 0x0  nop
    ctx->pc = 0x34679cu;
    // NOP
label_3467a0:
    // 0x3467a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3467a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3467a4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3467a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3467a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3467a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3467ac: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x3467ACu;
    SET_GPR_U32(ctx, 31, 0x3467B4u);
    ctx->pc = 0x3467B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3467ACu;
            // 0x3467b0: 0x2484ff04  addiu       $a0, $a0, -0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967044));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (runtime->hasFunction(0x20F2A8u)) {
        auto targetFn = runtime->lookupFunction(0x20F2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3467B4u; }
        if (ctx->pc != 0x3467B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F2A8_0x20f2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3467B4u; }
        if (ctx->pc != 0x3467B4u) { return; }
    }
    ctx->pc = 0x3467B4u;
label_3467b4:
    // 0x3467b4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3467B4u;
    {
        const bool branch_taken_0x3467b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3467b4) {
            ctx->pc = 0x346808u;
            goto label_346808;
        }
    }
    ctx->pc = 0x3467BCu;
    // 0x3467bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3467bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3467c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3467c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3467c4: 0x2463ff04  addiu       $v1, $v1, -0xFC
    ctx->pc = 0x3467c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967044));
    // 0x3467c8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3467c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3467cc: 0xac43eab8  sw          $v1, -0x1548($v0)
    ctx->pc = 0x3467ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 3));
    // 0x3467d0: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3467d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3467d4: 0x24844310  addiu       $a0, $a0, 0x4310
    ctx->pc = 0x3467d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17168));
    // 0x3467d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3467d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3467dc: 0xac44ead0  sw          $a0, -0x1530($v0)
    ctx->pc = 0x3467dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 4));
    // 0x3467e0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3467e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3467e4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3467e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3467e8: 0x24631158  addiu       $v1, $v1, 0x1158
    ctx->pc = 0x3467e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x3467ec: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3467ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3467f0: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x3467f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x3467f4: 0x0  nop
    ctx->pc = 0x3467f4u;
    // NOP
    // 0x3467f8: 0xc0558d4  jal         func_156350
    ctx->pc = 0x3467F8u;
    SET_GPR_U32(ctx, 31, 0x346800u);
    ctx->pc = 0x3467FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3467F8u;
            // 0x3467fc: 0x24a56820  addiu       $a1, $a1, 0x6820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346800u; }
        if (ctx->pc != 0x346800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346800u; }
        if (ctx->pc != 0x346800u) { return; }
    }
    ctx->pc = 0x346800u;
label_346800:
    // 0x346800: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x346800u;
    {
        const bool branch_taken_0x346800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346800u;
            // 0x346804: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346800) {
            ctx->pc = 0x346818u;
            goto label_346818;
        }
    }
    ctx->pc = 0x346808u;
label_346808:
    // 0x346808: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34680c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34680Cu;
    SET_GPR_U32(ctx, 31, 0x346814u);
    ctx->pc = 0x346810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34680Cu;
            // 0x346810: 0x24846820  addiu       $a0, $a0, 0x6820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346814u; }
        if (ctx->pc != 0x346814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346814u; }
        if (ctx->pc != 0x346814u) { return; }
    }
    ctx->pc = 0x346814u;
label_346814:
    // 0x346814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346818:
    // 0x346818: 0x3e00008  jr          $ra
    ctx->pc = 0x346818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346818u;
            // 0x34681c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346820u;
label_346820:
    // 0x346820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346824: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34682c: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x34682Cu;
    SET_GPR_U32(ctx, 31, 0x346834u);
    ctx->pc = 0x346830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34682Cu;
            // 0x346830: 0x2484ff04  addiu       $a0, $a0, -0xFC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967044));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (runtime->hasFunction(0x20F2A8u)) {
        auto targetFn = runtime->lookupFunction(0x20F2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346834u; }
        if (ctx->pc != 0x346834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F2A8_0x20f2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346834u; }
        if (ctx->pc != 0x346834u) { return; }
    }
    ctx->pc = 0x346834u;
label_346834:
    // 0x346834: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x346834u;
    {
        const bool branch_taken_0x346834 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x346834) {
            ctx->pc = 0x346888u;
            goto label_346888;
        }
    }
    ctx->pc = 0x34683Cu;
    // 0x34683c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346840: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x346840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x346844: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x346844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x346848: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34684c: 0xac43eab8  sw          $v1, -0x1548($v0)
    ctx->pc = 0x34684cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 3));
    // 0x346850: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x346850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x346854: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x346854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x346858: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34685c: 0xac44ead0  sw          $a0, -0x1530($v0)
    ctx->pc = 0x34685cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 4));
    // 0x346860: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346864: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346868: 0x246321d0  addiu       $v1, $v1, 0x21D0
    ctx->pc = 0x346868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8656));
    // 0x34686c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34686cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x346870: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x346870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x346874: 0x0  nop
    ctx->pc = 0x346874u;
    // NOP
    // 0x346878: 0xc0558d4  jal         func_156350
    ctx->pc = 0x346878u;
    SET_GPR_U32(ctx, 31, 0x346880u);
    ctx->pc = 0x34687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346878u;
            // 0x34687c: 0x24a569c0  addiu       $a1, $a1, 0x69C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346880u; }
        if (ctx->pc != 0x346880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346880u; }
        if (ctx->pc != 0x346880u) { return; }
    }
    ctx->pc = 0x346880u;
label_346880:
    // 0x346880: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x346880u;
    {
        const bool branch_taken_0x346880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346880u;
            // 0x346884: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346880) {
            ctx->pc = 0x346898u;
            goto label_346898;
        }
    }
    ctx->pc = 0x346888u;
label_346888:
    // 0x346888: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34688c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34688Cu;
    SET_GPR_U32(ctx, 31, 0x346894u);
    ctx->pc = 0x346890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34688Cu;
            // 0x346890: 0x248469c0  addiu       $a0, $a0, 0x69C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346894u; }
        if (ctx->pc != 0x346894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346894u; }
        if (ctx->pc != 0x346894u) { return; }
    }
    ctx->pc = 0x346894u;
label_346894:
    // 0x346894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346898:
    // 0x346898: 0x3e00008  jr          $ra
    ctx->pc = 0x346898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34689Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346898u;
            // 0x34689c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3468A0u;
label_3468a0:
    // 0x3468a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3468a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3468a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3468a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3468a8: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x3468A8u;
    SET_GPR_U32(ctx, 31, 0x3468B0u);
    ctx->pc = 0x3468ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3468A8u;
            // 0x3468ac: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3468B0u; }
        if (ctx->pc != 0x3468B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3468B0u; }
        if (ctx->pc != 0x3468B0u) { return; }
    }
    ctx->pc = 0x3468B0u;
label_3468b0:
    // 0x3468b0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3468b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3468b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3468b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3468b8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3468B8u;
    SET_GPR_U32(ctx, 31, 0x3468C0u);
    ctx->pc = 0x3468BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3468B8u;
            // 0x3468bc: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3468C0u; }
        if (ctx->pc != 0x3468C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3468C0u; }
        if (ctx->pc != 0x3468C0u) { return; }
    }
    ctx->pc = 0x3468C0u;
label_3468c0:
    // 0x3468c0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3468c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3468c4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3468c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3468c8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3468c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3468cc: 0x248468f0  addiu       $a0, $a0, 0x68F0
    ctx->pc = 0x3468ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26864));
    // 0x3468d0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3468D0u;
    SET_GPR_U32(ctx, 31, 0x3468D8u);
    ctx->pc = 0x3468D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3468D0u;
            // 0x3468d4: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3468D8u; }
        if (ctx->pc != 0x3468D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3468D8u; }
        if (ctx->pc != 0x3468D8u) { return; }
    }
    ctx->pc = 0x3468D8u;
label_3468d8:
    // 0x3468d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3468d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3468dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3468DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3468E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3468DCu;
            // 0x3468e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3468E4u;
    // 0x3468e4: 0x0  nop
    ctx->pc = 0x3468e4u;
    // NOP
    // 0x3468e8: 0x0  nop
    ctx->pc = 0x3468e8u;
    // NOP
    // 0x3468ec: 0x0  nop
    ctx->pc = 0x3468ecu;
    // NOP
label_3468f0:
    // 0x3468f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3468f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3468f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3468f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3468f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3468f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3468fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3468fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346900: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x346900u;
    SET_GPR_U32(ctx, 31, 0x346908u);
    ctx->pc = 0x346904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346900u;
            // 0x346904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346908u; }
        if (ctx->pc != 0x346908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346908u; }
        if (ctx->pc != 0x346908u) { return; }
    }
    ctx->pc = 0x346908u;
label_346908:
    // 0x346908: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x346908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34690c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x34690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x346910: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x346910u;
    {
        const bool branch_taken_0x346910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346910) {
            ctx->pc = 0x346914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346910u;
            // 0x346914: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346928u;
            goto label_346928;
        }
    }
    ctx->pc = 0x346918u;
    // 0x346918: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34691c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34691Cu;
    SET_GPR_U32(ctx, 31, 0x346924u);
    ctx->pc = 0x346920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34691Cu;
            // 0x346920: 0x248469c0  addiu       $a0, $a0, 0x69C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346924u; }
        if (ctx->pc != 0x346924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346924u; }
        if (ctx->pc != 0x346924u) { return; }
    }
    ctx->pc = 0x346924u;
label_346924:
    // 0x346924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346928:
    // 0x346928: 0x3e00008  jr          $ra
    ctx->pc = 0x346928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34692Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346928u;
            // 0x34692c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346930u;
label_346930:
    // 0x346930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346938: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346938u;
    SET_GPR_U32(ctx, 31, 0x346940u);
    ctx->pc = 0x34693Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346938u;
            // 0x34693c: 0x24040049  addiu       $a0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346940u; }
        if (ctx->pc != 0x346940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346940u; }
        if (ctx->pc != 0x346940u) { return; }
    }
    ctx->pc = 0x346940u;
label_346940:
    // 0x346940: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x346944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346948: 0xc082678  jal         func_2099E0
    ctx->pc = 0x346948u;
    SET_GPR_U32(ctx, 31, 0x346950u);
    ctx->pc = 0x34694Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346948u;
            // 0x34694c: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346950u; }
        if (ctx->pc != 0x346950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346950u; }
        if (ctx->pc != 0x346950u) { return; }
    }
    ctx->pc = 0x346950u;
label_346950:
    // 0x346950: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346954: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346954u;
    SET_GPR_U32(ctx, 31, 0x34695Cu);
    ctx->pc = 0x346958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346954u;
            // 0x346958: 0x24846970  addiu       $a0, $a0, 0x6970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34695Cu; }
        if (ctx->pc != 0x34695Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34695Cu; }
        if (ctx->pc != 0x34695Cu) { return; }
    }
    ctx->pc = 0x34695Cu;
label_34695c:
    // 0x34695c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34695cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346960: 0x3e00008  jr          $ra
    ctx->pc = 0x346960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346960u;
            // 0x346964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346968u;
    // 0x346968: 0x0  nop
    ctx->pc = 0x346968u;
    // NOP
    // 0x34696c: 0x0  nop
    ctx->pc = 0x34696cu;
    // NOP
label_346970:
    // 0x346970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346974: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34697c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34697cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346980: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x346980u;
    SET_GPR_U32(ctx, 31, 0x346988u);
    ctx->pc = 0x346984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346980u;
            // 0x346984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346988u; }
        if (ctx->pc != 0x346988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346988u; }
        if (ctx->pc != 0x346988u) { return; }
    }
    ctx->pc = 0x346988u;
label_346988:
    // 0x346988: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x346988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34698c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x34698cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x346990: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x346990u;
    {
        const bool branch_taken_0x346990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346990) {
            ctx->pc = 0x346994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346990u;
            // 0x346994: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3469B4u;
            goto label_3469b4;
        }
    }
    ctx->pc = 0x346998u;
    // 0x346998: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x346998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34699c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34699Cu;
    SET_GPR_U32(ctx, 31, 0x3469A4u);
    ctx->pc = 0x3469A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34699Cu;
            // 0x3469a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469A4u; }
        if (ctx->pc != 0x3469A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469A4u; }
        if (ctx->pc != 0x3469A4u) { return; }
    }
    ctx->pc = 0x3469A4u;
label_3469a4:
    // 0x3469a4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3469a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3469a8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3469A8u;
    SET_GPR_U32(ctx, 31, 0x3469B0u);
    ctx->pc = 0x3469ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3469A8u;
            // 0x3469ac: 0x248464b0  addiu       $a0, $a0, 0x64B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469B0u; }
        if (ctx->pc != 0x3469B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469B0u; }
        if (ctx->pc != 0x3469B0u) { return; }
    }
    ctx->pc = 0x3469B0u;
label_3469b0:
    // 0x3469b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3469b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3469b4:
    // 0x3469b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3469B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3469B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3469B4u;
            // 0x3469b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3469BCu;
    // 0x3469bc: 0x0  nop
    ctx->pc = 0x3469bcu;
    // NOP
label_3469c0:
    // 0x3469c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3469c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3469c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3469c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3469c8: 0xc0d0c60  jal         func_343180
    ctx->pc = 0x3469C8u;
    SET_GPR_U32(ctx, 31, 0x3469D0u);
    ctx->pc = 0x343180u;
    if (runtime->hasFunction(0x343180u)) {
        auto targetFn = runtime->lookupFunction(0x343180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469D0u; }
        if (ctx->pc != 0x3469D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343180_0x343180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469D0u; }
        if (ctx->pc != 0x3469D0u) { return; }
    }
    ctx->pc = 0x3469D0u;
label_3469d0:
    // 0x3469d0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3469D0u;
    {
        const bool branch_taken_0x3469d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3469d0) {
            ctx->pc = 0x3469D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3469D0u;
            // 0x3469d4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3469ECu;
            goto label_3469ec;
        }
    }
    ctx->pc = 0x3469D8u;
    // 0x3469d8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3469d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3469dc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3469DCu;
    SET_GPR_U32(ctx, 31, 0x3469E4u);
    ctx->pc = 0x3469E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3469DCu;
            // 0x3469e0: 0x24846930  addiu       $a0, $a0, 0x6930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469E4u; }
        if (ctx->pc != 0x3469E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469E4u; }
        if (ctx->pc != 0x3469E4u) { return; }
    }
    ctx->pc = 0x3469E4u;
label_3469e4:
    // 0x3469e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3469E4u;
    {
        const bool branch_taken_0x3469e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3469E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3469E4u;
            // 0x3469e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469e4) {
            ctx->pc = 0x346A1Cu;
            goto label_346a1c;
        }
    }
    ctx->pc = 0x3469ECu;
label_3469ec:
    // 0x3469ec: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x3469ECu;
    SET_GPR_U32(ctx, 31, 0x3469F4u);
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469F4u; }
        if (ctx->pc != 0x3469F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3469F4u; }
        if (ctx->pc != 0x3469F4u) { return; }
    }
    ctx->pc = 0x3469F4u;
label_3469f4:
    // 0x3469f4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3469f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3469f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3469f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3469fc: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3469FCu;
    SET_GPR_U32(ctx, 31, 0x346A04u);
    ctx->pc = 0x346A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3469FCu;
            // 0x346a00: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A04u; }
        if (ctx->pc != 0x346A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A04u; }
        if (ctx->pc != 0x346A04u) { return; }
    }
    ctx->pc = 0x346A04u;
label_346a04:
    // 0x346a04: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346a08: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346a0c: 0x24846a70  addiu       $a0, $a0, 0x6A70
    ctx->pc = 0x346a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27248));
    // 0x346a10: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346A10u;
    SET_GPR_U32(ctx, 31, 0x346A18u);
    ctx->pc = 0x346A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346A10u;
            // 0x346a14: 0xac404378  sw          $zero, 0x4378($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A18u; }
        if (ctx->pc != 0x346A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A18u; }
        if (ctx->pc != 0x346A18u) { return; }
    }
    ctx->pc = 0x346A18u;
label_346a18:
    // 0x346a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346a1c:
    // 0x346a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x346A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346A1Cu;
            // 0x346a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346A24u;
    // 0x346a24: 0x0  nop
    ctx->pc = 0x346a24u;
    // NOP
    // 0x346a28: 0x0  nop
    ctx->pc = 0x346a28u;
    // NOP
    // 0x346a2c: 0x0  nop
    ctx->pc = 0x346a2cu;
    // NOP
label_346a30:
    // 0x346a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346a34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346a38: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346A38u;
    SET_GPR_U32(ctx, 31, 0x346A40u);
    ctx->pc = 0x346A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346A38u;
            // 0x346a3c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A40u; }
        if (ctx->pc != 0x346A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A40u; }
        if (ctx->pc != 0x346A40u) { return; }
    }
    ctx->pc = 0x346A40u;
label_346a40:
    // 0x346a40: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346a44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x346a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346a48: 0xc082678  jal         func_2099E0
    ctx->pc = 0x346A48u;
    SET_GPR_U32(ctx, 31, 0x346A50u);
    ctx->pc = 0x346A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346A48u;
            // 0x346a4c: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A50u; }
        if (ctx->pc != 0x346A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A50u; }
        if (ctx->pc != 0x346A50u) { return; }
    }
    ctx->pc = 0x346A50u;
label_346a50:
    // 0x346a50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346a54: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346a58: 0x24846a70  addiu       $a0, $a0, 0x6A70
    ctx->pc = 0x346a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27248));
    // 0x346a5c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346A5Cu;
    SET_GPR_U32(ctx, 31, 0x346A64u);
    ctx->pc = 0x346A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346A5Cu;
            // 0x346a60: 0xac404378  sw          $zero, 0x4378($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A64u; }
        if (ctx->pc != 0x346A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A64u; }
        if (ctx->pc != 0x346A64u) { return; }
    }
    ctx->pc = 0x346A64u;
label_346a64:
    // 0x346a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346a68: 0x3e00008  jr          $ra
    ctx->pc = 0x346A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346A68u;
            // 0x346a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346A70u;
label_346a70:
    // 0x346a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346a74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x346a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x346a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x346a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346a84: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x346A84u;
    SET_GPR_U32(ctx, 31, 0x346A8Cu);
    ctx->pc = 0x346A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346A84u;
            // 0x346a88: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A8Cu; }
        if (ctx->pc != 0x346A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346A8Cu; }
        if (ctx->pc != 0x346A8Cu) { return; }
    }
    ctx->pc = 0x346A8Cu;
label_346a8c:
    // 0x346a8c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x346a8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x346a90: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x346a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x346a94: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x346A94u;
    {
        const bool branch_taken_0x346a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346a94) {
            ctx->pc = 0x346A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346A94u;
            // 0x346a98: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x346AC4u;
            goto label_346ac4;
        }
    }
    ctx->pc = 0x346A9Cu;
    // 0x346a9c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x346a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x346aa0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x346AA0u;
    SET_GPR_U32(ctx, 31, 0x346AA8u);
    ctx->pc = 0x346AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346AA0u;
            // 0x346aa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346AA8u; }
        if (ctx->pc != 0x346AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346AA8u; }
        if (ctx->pc != 0x346AA8u) { return; }
    }
    ctx->pc = 0x346AA8u;
label_346aa8:
    // 0x346aa8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346aac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346ab0: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x346ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x346ab4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x346ab4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x346ab8: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x346ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x346abc: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x346abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x346ac0: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x346ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_346ac4:
    // 0x346ac4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x346AC4u;
    {
        const bool branch_taken_0x346ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346ac4) {
            ctx->pc = 0x346AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346AC4u;
            // 0x346ac8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346B14u;
            goto label_346b14;
        }
    }
    ctx->pc = 0x346ACCu;
    // 0x346acc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346ad0: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x346ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x346ad4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x346AD4u;
    {
        const bool branch_taken_0x346ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346ad4) {
            ctx->pc = 0x346AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346AD4u;
            // 0x346ad8: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346AFCu;
            goto label_346afc;
        }
    }
    ctx->pc = 0x346ADCu;
    // 0x346adc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x346adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x346ae0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x346AE0u;
    SET_GPR_U32(ctx, 31, 0x346AE8u);
    ctx->pc = 0x346AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346AE0u;
            // 0x346ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346AE8u; }
        if (ctx->pc != 0x346AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346AE8u; }
        if (ctx->pc != 0x346AE8u) { return; }
    }
    ctx->pc = 0x346AE8u;
label_346ae8:
    // 0x346ae8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346aec: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346AECu;
    SET_GPR_U32(ctx, 31, 0x346AF4u);
    ctx->pc = 0x346AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346AECu;
            // 0x346af0: 0x24847280  addiu       $a0, $a0, 0x7280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346AF4u; }
        if (ctx->pc != 0x346AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346AF4u; }
        if (ctx->pc != 0x346AF4u) { return; }
    }
    ctx->pc = 0x346AF4u;
label_346af4:
    // 0x346af4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x346AF4u;
    {
        const bool branch_taken_0x346af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346af4) {
            ctx->pc = 0x346B10u;
            goto label_346b10;
        }
    }
    ctx->pc = 0x346AFCu;
label_346afc:
    // 0x346afc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x346AFCu;
    SET_GPR_U32(ctx, 31, 0x346B04u);
    ctx->pc = 0x346B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346AFCu;
            // 0x346b00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B04u; }
        if (ctx->pc != 0x346B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B04u; }
        if (ctx->pc != 0x346B04u) { return; }
    }
    ctx->pc = 0x346B04u;
label_346b04:
    // 0x346b04: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346b08: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346B08u;
    SET_GPR_U32(ctx, 31, 0x346B10u);
    ctx->pc = 0x346B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346B08u;
            // 0x346b0c: 0x24846b20  addiu       $a0, $a0, 0x6B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B10u; }
        if (ctx->pc != 0x346B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B10u; }
        if (ctx->pc != 0x346B10u) { return; }
    }
    ctx->pc = 0x346B10u;
label_346b10:
    // 0x346b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_346b14:
    // 0x346b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346b18: 0x3e00008  jr          $ra
    ctx->pc = 0x346B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346B18u;
            // 0x346b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346B20u;
label_346b20:
    // 0x346b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346b24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346b2c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346b30: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x346b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x346b34: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x346B34u;
    SET_GPR_U32(ctx, 31, 0x346B3Cu);
    ctx->pc = 0x346B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346B34u;
            // 0x346b38: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B3Cu; }
        if (ctx->pc != 0x346B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B3Cu; }
        if (ctx->pc != 0x346B3Cu) { return; }
    }
    ctx->pc = 0x346B3Cu;
label_346b3c:
    // 0x346b3c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346b40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x346b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346b44: 0xc082678  jal         func_2099E0
    ctx->pc = 0x346B44u;
    SET_GPR_U32(ctx, 31, 0x346B4Cu);
    ctx->pc = 0x346B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346B44u;
            // 0x346b48: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B4Cu; }
        if (ctx->pc != 0x346B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B4Cu; }
        if (ctx->pc != 0x346B4Cu) { return; }
    }
    ctx->pc = 0x346B4Cu;
label_346b4c:
    // 0x346b4c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346b50: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346B50u;
    SET_GPR_U32(ctx, 31, 0x346B58u);
    ctx->pc = 0x346B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346B50u;
            // 0x346b54: 0x24846b70  addiu       $a0, $a0, 0x6B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B58u; }
        if (ctx->pc != 0x346B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B58u; }
        if (ctx->pc != 0x346B58u) { return; }
    }
    ctx->pc = 0x346B58u;
label_346b58:
    // 0x346b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x346B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346B5Cu;
            // 0x346b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346B64u;
    // 0x346b64: 0x0  nop
    ctx->pc = 0x346b64u;
    // NOP
    // 0x346b68: 0x0  nop
    ctx->pc = 0x346b68u;
    // NOP
    // 0x346b6c: 0x0  nop
    ctx->pc = 0x346b6cu;
    // NOP
label_346b70:
    // 0x346b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346b74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x346b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x346b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x346b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x346b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b84: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x346B84u;
    SET_GPR_U32(ctx, 31, 0x346B8Cu);
    ctx->pc = 0x346B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346B84u;
            // 0x346b88: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B8Cu; }
        if (ctx->pc != 0x346B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346B8Cu; }
        if (ctx->pc != 0x346B8Cu) { return; }
    }
    ctx->pc = 0x346B8Cu;
label_346b8c:
    // 0x346b8c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x346b8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x346b90: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x346b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x346b94: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x346B94u;
    {
        const bool branch_taken_0x346b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346b94) {
            ctx->pc = 0x346B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346B94u;
            // 0x346b98: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x346BC4u;
            goto label_346bc4;
        }
    }
    ctx->pc = 0x346B9Cu;
    // 0x346b9c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x346b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x346ba0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x346BA0u;
    SET_GPR_U32(ctx, 31, 0x346BA8u);
    ctx->pc = 0x346BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346BA0u;
            // 0x346ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346BA8u; }
        if (ctx->pc != 0x346BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346BA8u; }
        if (ctx->pc != 0x346BA8u) { return; }
    }
    ctx->pc = 0x346BA8u;
label_346ba8:
    // 0x346ba8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x346ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x346bac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x346bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x346bb0: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x346bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x346bb4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x346bb4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x346bb8: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x346bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x346bbc: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x346bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x346bc0: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x346bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_346bc4:
    // 0x346bc4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x346BC4u;
    {
        const bool branch_taken_0x346bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346bc4) {
            ctx->pc = 0x346BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346BC4u;
            // 0x346bc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346C14u;
            goto label_346c14;
        }
    }
    ctx->pc = 0x346BCCu;
    // 0x346bcc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346bd0: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x346bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x346bd4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x346BD4u;
    {
        const bool branch_taken_0x346bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346bd4) {
            ctx->pc = 0x346BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346BD4u;
            // 0x346bd8: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346BFCu;
            goto label_346bfc;
        }
    }
    ctx->pc = 0x346BDCu;
    // 0x346bdc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x346bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x346be0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x346BE0u;
    SET_GPR_U32(ctx, 31, 0x346BE8u);
    ctx->pc = 0x346BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346BE0u;
            // 0x346be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346BE8u; }
        if (ctx->pc != 0x346BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346BE8u; }
        if (ctx->pc != 0x346BE8u) { return; }
    }
    ctx->pc = 0x346BE8u;
label_346be8:
    // 0x346be8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346bec: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346BECu;
    SET_GPR_U32(ctx, 31, 0x346BF4u);
    ctx->pc = 0x346BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346BECu;
            // 0x346bf0: 0x248464b0  addiu       $a0, $a0, 0x64B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346BF4u; }
        if (ctx->pc != 0x346BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346BF4u; }
        if (ctx->pc != 0x346BF4u) { return; }
    }
    ctx->pc = 0x346BF4u;
label_346bf4:
    // 0x346bf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x346BF4u;
    {
        const bool branch_taken_0x346bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346bf4) {
            ctx->pc = 0x346C10u;
            goto label_346c10;
        }
    }
    ctx->pc = 0x346BFCu;
label_346bfc:
    // 0x346bfc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x346BFCu;
    SET_GPR_U32(ctx, 31, 0x346C04u);
    ctx->pc = 0x346C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346BFCu;
            // 0x346c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C04u; }
        if (ctx->pc != 0x346C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C04u; }
        if (ctx->pc != 0x346C04u) { return; }
    }
    ctx->pc = 0x346C04u;
label_346c04:
    // 0x346c04: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x346c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x346c08: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346C08u;
    SET_GPR_U32(ctx, 31, 0x346C10u);
    ctx->pc = 0x346C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346C08u;
            // 0x346c0c: 0x24846a30  addiu       $a0, $a0, 0x6A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C10u; }
        if (ctx->pc != 0x346C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C10u; }
        if (ctx->pc != 0x346C10u) { return; }
    }
    ctx->pc = 0x346C10u;
label_346c10:
    // 0x346c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_346c14:
    // 0x346c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346c18: 0x3e00008  jr          $ra
    ctx->pc = 0x346C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346C18u;
            // 0x346c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346C20u;
label_346c20:
    // 0x346c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346c24: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x346c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x346c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346c2c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x346c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x346c30: 0x8c43f78c  lw          $v1, -0x874($v0)
    ctx->pc = 0x346c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    // 0x346c34: 0x24845180  addiu       $a0, $a0, 0x5180
    ctx->pc = 0x346c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20864));
    // 0x346c38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346c3c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x346C3Cu;
    SET_GPR_U32(ctx, 31, 0x346C44u);
    ctx->pc = 0x346C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346C3Cu;
            // 0x346c40: 0xac43ead8  sw          $v1, -0x1528($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961880), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C44u; }
        if (ctx->pc != 0x346C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C44u; }
        if (ctx->pc != 0x346C44u) { return; }
    }
    ctx->pc = 0x346C44u;
label_346c44:
    // 0x346c44: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x346c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x346c48: 0xc082674  jal         func_2099D0
    ctx->pc = 0x346C48u;
    SET_GPR_U32(ctx, 31, 0x346C50u);
    ctx->pc = 0x346C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346C48u;
            // 0x346c4c: 0x8c44ead8  lw          $a0, -0x1528($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961880)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C50u; }
        if (ctx->pc != 0x346C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346C50u; }
        if (ctx->pc != 0x346C50u) { return; }
    }
    ctx->pc = 0x346C50u;
label_346c50:
    // 0x346c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346c54: 0x3e00008  jr          $ra
    ctx->pc = 0x346C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346C54u;
            // 0x346c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346C5Cu;
    // 0x346c5c: 0x0  nop
    ctx->pc = 0x346c5cu;
    // NOP
    ctx->pc = 0x346c60u;
}
